#include "Track.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

Track::Track(int TrackId, std::string TrackName, int TrainID, std::string TrainName, int MaxSeats, std::string leaving_time, std::string arrival, int OriginStationID, std::string OriginStationName, int DestinationStationId, std::string DestinationStationName, std::string fare)
{
    this->name = TrackName;
    this->id = TrackId;
    this->fare = std::stoi(fare);
    train = new Train(TrainID, TrainName, MaxSeats, leaving_time, arrival, OriginStationID, OriginStationName, DestinationStationId, DestinationStationName);

}

Train* Track::gettrain() {
    return train;
}

int Track::getid() {
    return id;
}

int Track::getfare() {
    return fare;
}