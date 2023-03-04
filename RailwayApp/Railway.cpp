#include "Railway.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <ctime>

Railway::Railway() {
    logged_in = false;
    to_login = false;
    toprofile = false;
    toadmlogin = false;
    toEnterTrains = false;
    setPassengerData();
    setTrackData();
    setpassengerstickets();
    LoadAllStations();
    CheckTimings();

}

void Railway::setPassengerData() {
        std::ifstream file("login.csv");
        std::string line;
        while (getline(file, line)) {
            std::vector<std::string> vect;
            std::stringstream ss(line);
            std::string substr;
            while (getline(ss, substr, ',')) {
                vect.push_back(substr);
            }
            passengers.push_back(new Passenger(vect[1], vect[3], vect[2], vect[4], std::stoi(vect[0]), std::stoi(vect[5])));
        }
}

void Railway::setTrackData() {
    std::ifstream file("tracks.csv");
    std::string line;
    while (getline(file, line)) {
        std::vector<std::string> vect;
        std::stringstream ss(line);
        std::string substr;
        while (getline(ss, substr, ',')) {
            vect.push_back(substr);
        }
        tracks.push_back(new Track(std::stoi(vect[0]), vect[1], std::stoi(vect[2]), vect[3], std::stoi(vect[4]), vect[5], vect[6], std::stoi(vect[7]), vect[8], std::stoi(vect[9]), vect[10], vect[11]));
        
    }

}

void Railway::setTrack(std::string trackID, std::string trackName, std::string trainID, std::string trainName, std::string maxseats, std::string leaving, std::string arriving, std::string originstationID, std::string originStationName, std::string destinationStationID, std::string destinationStationName, std::string fare) {
    std::ofstream file("tracks.csv", std::ios_base::app);
    file << trackID << "," << trackName << "," << trainID << "," << trainName << "," << maxseats << "," << leaving << "," << arriving << "," << originstationID << "," << originStationName << "," << destinationStationID << "," << destinationStationName << "," << fare << std::endl;
    std::ofstream file2("trainsseats.csv", std::ios_base::app);
    std::string seatsdata = "";
    for (int i = 0; i < std::stoi(maxseats); i++) {
        seatsdata += "1";
    }
    file2 << trackID << "," << seatsdata << std::endl;
}

void Railway::setpassengerstickets() {
    std::ifstream file("usertickets.csv");
    std::string line;
    while (getline(file, line)) {
        std::vector<std::string> vect;
        std::stringstream ss(line);
        std::string substr;
        while (getline(ss, substr, ',')) {
            vect.push_back(substr);
        }
        for (int i = 0; i < passengers.size(); i++) {
            if (passengers[i]->getid() == std::stoi(vect[0])) {
                passengers[i]->addticket(std::stoi(vect[1]), std::stoi(vect[2]));
            }
        }

    }
}

void Railway::signup(std::string user, std::string name, std::string pass, std::string gender, int age) {
    std::ofstream file("login.csv", std::ios_base::app);
    int id = getusercount();
    file << id << "," << user << "," << pass << "," << name << "," << gender << "," << age << std::endl;
    current_user = new Passenger(user, name, pass, gender, id, age);
    passengers.push_back(current_user);
    this->logged_in = true;
}

std::string Railway::login(std::string user, std::string pass) {
    for (int i = 0; i < passengers.size(); i++) {
        if (passengers[i]->getusername() == user && passengers[i]->getpassword() == pass) {
            current_user = passengers[i];
            this->logged_in = true;
            this->to_login = false;
        }
    }
    if (logged_in) {
        return "Logged in succesfully!";
    }
    else {
        return "Incorrect Username and/or Password.";
    }
}

int Railway::getusercount() {
    return passengers.size();
}

int Railway::gettrackcount() {
    return tracks.size();
}


Track* Railway::gettrackchild(int i) {
    return tracks[i];
}

bool Railway::hasLoggedin() {
    return logged_in;
}

Track* Railway::gettrackbyID(int id) {
    for (int i = 0; i < tracks.size(); i++) {
        if (tracks[i]->getid() == id) {
            return tracks[i];
        }
    }
}

void Railway::BuyTicket(int trackid, int seat) {
    gettrackbyID(trackid)->gettrain()->setseatchild(seat-1, '0');
    updateseatsdata();
}

void Railway::updateseatsdata() {
    std::ofstream file("trainsseats.csv");
    for (int i = 0; i < tracks.size(); i++) {
        file << tracks[i]->getid() << "," << tracks[i]->gettrain()->getseat() << std::endl;
    }
}

void Railway::addticketToUser(int trackid, int seat) {
    current_user->addticket(trackid, seat);
    updateuserticketsdata();
}

void Railway::updateuserticketsdata() {
    std::ofstream file("usertickets.csv");
    for (int i = 0; i < passengers.size(); i++) {
        for (int j = 0; j < passengers[i]->getbookedsize(); j++) {
            file << passengers[i]->getid() << "," << passengers[i]->getbookedchild(j)[0] << "," << passengers[i]->getbookedchild(j)[1] << std::endl;
        }
    }
}

void Railway::settoprofile(bool profile) {
    toprofile = profile;
}

bool Railway::gettoprofile() {
    return toprofile;
}

Passenger* Railway::getcurrentuser() {
    return current_user;
}

bool Railway::gettoadmlogin() {
    return toadmlogin;
}

void Railway::settoadmlogin(bool adm) {
    toadmlogin = adm;
}

bool Railway::gettoentertrains() {
    return toEnterTrains;
}

void Railway::settoentertrains(bool trains) {
    toEnterTrains = trains;
}

int Railway::getstationidbyname(std::string name) {
    std::ifstream file("Stations.csv");
    std::string line;
    while (getline(file, line)){
        std::vector<std::string> vect;
        std::stringstream ss(line);
        std::string substr;
        while (getline(ss, substr, ',')) {
            vect.push_back(substr);
        }
        if (vect[0] == name) {
            return std::stoi(vect[1]);
        }
    }
}

void Railway::LoadAllStations() {
    std::ifstream file("Stations.csv");
    std::string line;
    while (getline(file, line)) {
        std::vector<std::string> vect;
        std::stringstream ss(line);
        std::string substr;
        while (getline(ss, substr, ',')) {
            vect.push_back(substr);
        }
        AllStations.push_back(vect[0]);
    }
}

int Railway::getallStationssize() {
    return AllStations.size();
}


std::string Railway::getstationchild(int i) {
    return AllStations[i];
}

bool Railway::gettologin() {
    return to_login;
}

void Railway::settologin(bool login) {
    to_login = login;
}

void Railway::CheckTimings() {
    time_t now = time(0);
    tm* ltm = localtime(&now);

    for (int i = 0; i < tracks.size(); i++) {
        std::string leaving = tracks[i]->gettrain()->gettrainschedule()->getleavingtime();
        std::string hours = "";
        hours += leaving[0];
        hours += leaving[1];
        int inthours = std::stoi(hours);
        std::string minutes = "";
        minutes += leaving[3];
        minutes += leaving[4];
        int intminutes = std::stoi(minutes);
        if (inthours < ltm->tm_hour) {
            tracks[i]->gettrain()->ResetSeats();
            updateseatsdata();
            //updateUserTickets(tracks[i]->gettrain()->getid());
        }
        else if ((inthours == ltm->tm_hour) && (intminutes < ltm->tm_min)) {
            tracks[i]->gettrain()->ResetSeats();
            updateseatsdata();
            //updateUserTickets(tracks[i]->gettrain()->getid());
        }

    }
}

/*
void Railway::updateUserTickets(int trackid) {
    for (int i = 0; i < passengers.size(); i++) {
        for (int j = 0; j < passengers[i]->getbookedsize(); j++) {
            std::vector<std::vector<int>>::iterator it = passengers[i]->getbooked().begin();
            while (it != passengers[i]->getbooked().end()) {
                if ((*it)[0] == trackid) {
                    it = passengers[i]->getbooked().erase(passengers[i]->getbooked().begin() + j);
                }
                else {
                    ++it;
                }


            }

        }
    }
    
    updateuserticketsdata();
}

*/
