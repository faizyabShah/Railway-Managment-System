#include "Passenger.h"

Passenger::Passenger(std::string username, std::string name, std::string password, std::string gender, int id, int age) {
    this->username = username;
    this->password = password;
    this->id = id;
    this->name = name;
    this->gender = gender;
    this->age = age;

}


std::string Passenger::getname() {
    return name;
}

int Passenger::getage() {
    return age;
}

std::string Passenger::getpassword() {
    return password;
}

std::string Passenger::getusername() {
    return username;
}

void Passenger::addticket(int trackid, int seat) {
    booked.push_back({ trackid, seat });
}

int Passenger::getbookedsize() {
    return booked.size();
}

std::vector<int> Passenger::getbookedchild(int i) {
    return booked[i];
}

int Passenger::getid() {
    return id;
}

std::string Passenger::getgender() {
    return gender;
}

std::vector<std::vector<int>> Passenger::getbooked() {
    return booked;
}