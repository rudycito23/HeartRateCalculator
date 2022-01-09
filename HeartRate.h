#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

// create a class called HeartRates
class HeartRates {
    public:
    // constructor receiving data
    HeartRates() {
        firstName;
        lastName;
        birthMonth;
        birthDay;
        birthYear;    
    }
    // set user first name
    void setFirstName(string personFirstName) {
        firstName = personFirstName;
    }
    // retrieve user first name
    string getFirstName() {
        return firstName;
    }
    // set user last name
    void setLastName(string personLastName) {
        lastName = personLastName;
    }
    // get user last name
    string getLastName() {
        return lastName;
    }
    // set user birth month
    void setBirthMonth(int month) {
        birthMonth = month;
    }
    // get user birth month
    int getBirthMonth() {
        return birthMonth;
    }
    // set user birth day
    void setBirthDay(int day) {
        birthDay = day;
    }
    // get user birth day
    int getBirthDay() {
        return birthDay;
    }
    // set user birth year
    void setBirthYear(int year) {
        birthYear = year;
    }
    // set user birth year
    int getBirthYear() {
        return birthYear;
    }
    // calculate and return user age
    int getAge() {
        age = 2022 - birthYear;
        return age;
    }
    // calculate and return user's max heart rate
    int getMaxHeartRate() {
        heartRate = 220 - age;
        return heartRate;
    }
    // calculate and return user's target heart rate at 50% of max heart rate
    int getTargetHeartRate50() {
        targetHeartRate50 = heartRate * .50;
        return targetHeartRate50;
    }
    // calculate and return user's target heart rate at 85% of max heart rate
    int getTargetHeartRate85() {
        targetHeartRate85 = heartRate * .85;
        return targetHeartRate85;
    }
    // print user's information
    void printAll() {
        cout << getFirstName() << " " << getLastName() << endl;
        cout << "DOB: " << getBirthMonth() << "/" << getBirthDay() << "/" << getBirthYear() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Your max heart rate is: " << getMaxHeartRate() << endl;
        cout << "Your target heart rate is 50 - 85 percent of your max heart rate (bpm): " 
        << getTargetHeartRate50() << "-" << getTargetHeartRate85() << endl;
    }
    private:
    // attributes
    string firstName, lastName;
    int birthMonth, birthDay, birthYear, age{0};
    int heartRate, targetHeartRate50, targetHeartRate85;

};
