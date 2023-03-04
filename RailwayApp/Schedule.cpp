#include "Schedule.h"


Schedule::Schedule(std::string leaving_time, std::string arrival, int OriginStationID, std::string OriginStationName, int DestinationStationId, std::string DestinationStationName) {
	this->leaving_time = leaving_time;
	this->arrival = arrival;
	origin = new Station(OriginStationID, OriginStationName);
	destination = new Station(DestinationStationId, DestinationStationName);
}

Station* Schedule::getoriginstation() {
	return origin;
}

Station* Schedule::getdestinationstation() {
	return destination;
}

std::string Schedule::getarrivaltime() {
	return arrival;
}

std::string Schedule::getleavingtime() {
	return leaving_time;
}