#pragma once
#include <string>
#include <vector>



class Person
{
protected:
    std::string name;
    std::string password;
    std::string gender;
    int age;
public:
    virtual std::string getname() = 0;
    virtual int getage() = 0;
};



class Passenger :public Person
{
    std::string username;
    int id;
    std::vector<std::vector<int>> booked;
public:
    Passenger(std::string username, std::string name, std::string password, std::string gender, int id, int age);
    std::string getname();
    std::string getusername();
    int getage();
    std::string getpassword();
    int getbookedsize();
    std::vector<std::vector<int>> getbooked();
    std::vector<int> getbookedchild(int i);
    void addticket(int trackid, int seat);
    int getid();
    std::string getgender();
};