#pragma once
#include <string>
#include "Train.h"
#include "Station.h"

class Track {
    std::string name;
    int id;
    Train* train;
    int fare;
public:
    Track(int TrackId, std::string TrackName, int TrainID, std::string TrainName, int MaxSeats, std::string leaving_time, std::string arrival, int OriginStationID, std::string OriginStationName, int DestinationStationId, std::string DestinationStationName, std::string fare);
    Train* gettrain();
    int getid();
    int getfare();
};