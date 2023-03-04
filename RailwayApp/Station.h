#pragma once
#include <string>

class Station
{
    std::string name;
    int id;
public:
    Station(int id, std::string name);
    std::string getstationname();
    int getstationid();
};