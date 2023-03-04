#include "Station.h"


Station::Station(int id, std::string name) {
    this->name = name;
    this->id = id;
}

int Station::getstationid() {
    return id;
}

std::string Station::getstationname() {
    return name;
}