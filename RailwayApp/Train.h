#pragma once
#include <string>
#include <vector>
#include "schedule.h"

class Train
{
    std::string name;
    Schedule* TrainSchedule;
    std::string Seats;
    int id;
    int max_seats;
public:
    Train(int TrainID, std::string TrainName, int MaxSeats, std::string leaving_time, std::string arrival, int OriginStationID, std::string OriginStationName, int DestinationStationId,std::string DestinationStationName);
    Schedule* gettrainschedule();
    int getseatsize();
    std::string getseatschild(int i);
    int getid();
    void setseatchild(int num, char state);
    std::string getseat();
    void ResetSeats();
};