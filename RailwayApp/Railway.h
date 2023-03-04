#pragma once

#include<vector>
#include "Track.h"
#include "Passenger.h"

class Railway
{
private:
    std::vector<Passenger*> passengers;
    Passenger* current_user;
    std::vector<Track*> tracks;
    bool logged_in;
    bool toprofile;
    bool to_login;
    bool toadmlogin;
    bool toEnterTrains;
    std::vector<std::string> AllStations;
public:
    std::vector<int> availabletrackIDs;
    Railway();
    void setPassengerData();
    void setTrackData();
    Track* gettrackbyID(int id);
    std::string login(std::string user, std::string pass);
    void signup( std::string user, std::string name, std::string pass, std::string gender, int age);
    int getusercount();
    int gettrackcount();
    Track* gettrackchild(int i);
    bool hasLoggedin();
    void BuyTicket(int trackid, int seat);
    void updateseatsdata();
    void addticketToUser(int trackid, int seat);
    void updateuserticketsdata();
    void settoprofile(bool profile);
    bool gettoprofile();
    Passenger* getcurrentuser();
    void setpassengerstickets();
    bool gettoadmlogin();
    void settoadmlogin(bool adm);
    bool gettoentertrains();
    void settoentertrains(bool trains);
    void setTrack(std::string trackID, std::string trackName, std::string trainID, std::string trainName, std::string maxseats, std::string leaving, std::string arriving, std::string originstationID, std::string originStationName, std::string destinationStationID, std::string destinationStationName, std::string fare);
    int getstationidbyname(std::string name);
    void LoadAllStations();
    int getallStationssize();
    std::string getstationchild(int i);
    bool gettologin();
    void settologin(bool login);
    void CheckTimings();
    //void updateUserTickets(int trackid);
};