#include "Train.h"
#include <fstream>
#include <vector>
#include <sstream>


Train::Train(int TrainID, std::string TrainName, int MaxSeats, std::string leaving_time, std::string arrival, int OriginStationID, std::string OriginStationName, int DestinationStationId, std::string DestinationStationName) {
    this->name = TrainName;
    this->id = TrainID;
    this->max_seats = MaxSeats;
    TrainSchedule = new Schedule(leaving_time, arrival, OriginStationID, OriginStationName, DestinationStationId, DestinationStationName);
    std::ifstream file("trainsseats.csv");
    std::string line;
    while (getline(file, line)) {
        std::vector<std::string> vect;
        std::stringstream ss(line);
        std::string substr;
        while (getline(ss, substr, ',')) {
            vect.push_back(substr);
        }
        if (std::stoi(vect[0]) == this->id) {
            for (int i = 1; i < vect.size(); i++) {
                Seats += vect[i];
            }
        break;
        }


    }
}

Schedule* Train::gettrainschedule() {
    return TrainSchedule;
}

int Train::getseatsize() {
    return Seats.size();
}

std::string Train::getseatschild(int i) {
    std::string temp;
    temp.push_back(Seats[i]);
    return temp;
}

int Train::getid() {
    return id;
}

void Train::setseatchild(int num, char state) {
    Seats[num] = state;
}

std::string Train::getseat() {
    return Seats;
}

void Train::ResetSeats() {
    Seats = "";
    for (int i = 0; i < max_seats; i++) {
        Seats += "0";
    }
}