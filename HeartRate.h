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
    void setFirstName(string personFirstName) {
        firstName = personFirstName;
    }
    string getFirstName() {
        return firstName;
    }
    void setLastName(string personLastName) {
        lastName = personLastName;
    }
    string getLastName() {
        return lastName;
    }
    void setBirthMonth(int month) {
        birthMonth = month;
    }
    int getBirthMonth() {
        return birthMonth;
    }
    void setBirthDay(int day) {
        birthDay = day;
    }
    int getBirthDay() {
        return birthDay;
    }
    void setBirthYear(int year) {
        birthYear = year;
    }
    int getBirthYear() {
        return birthYear;
    }
    int getAge() {
        age = 2022 - birthYear;
        return age;
    }
    int getMaxHeartRate() {
        heartRate = 220 - age;
        return heartRate;
    }
    int getTargetHeartRate50() {
        targetHeartRate50 = heartRate * .50;
        return targetHeartRate50;
    }
    int getTargetHeartRate85() {
        targetHeartRate85 = heartRate * .85;
        return targetHeartRate85;
    }
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