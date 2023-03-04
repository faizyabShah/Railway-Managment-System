#pragma once
#include "Station.h"

class Schedule
{
	Station* origin;
	Station* destination;
	std::string leaving_time;
	std::string arrival;
public:
	Schedule(std::string leaving_time, std::string arrival, int OriginStationID, std::string OriginStationName, int DestinationStationId, std::string DestinationStationName);
	Station* getoriginstation();
	Station* getdestinationstation();
	std::string getleavingtime();
	std::string getarrivaltime();
};