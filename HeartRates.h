//
// Created by rrluc on 5/13/2022.
//

#ifndef HEARTRATECALC_HEARTRATES_H
#define HEARTRATECALC_HEARTRATES_H

#include <iostream>
#include <cmath>
#include <chrono>

using std::cout;
using std::cin;
using std::string;
using std::endl;


class HeartRates {
private:
    string firstName, lastName;
    int birthMonth{0}, birthDay{0}, birthYear{0}, currentYear{0};

public:
    HeartRates();
    void setFirstName(string);
    string getFirstName();
    void setLastName(string);
    string getLastName();
    void setBirthMonth(int);
    int getBirthMonth();
    void setBirthDay(int);
    int getBirthDay();
    void setBirthYear(int);
    int getBirthYear();
    void setCurrentYear(int);
    int getCurrentYear();
    string getDOB();
    int getAge();
    int maxHeartRate();
    int targetHeartRate50();
    int targetHeartRate85();
    void printAll();

};

#endif //HEARTRATECALC_HEARTRATES_H