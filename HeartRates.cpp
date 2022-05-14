//
// Created by rrluc on 5/13/2022.
//

#include "HeartRates.h"

// constructor
HeartRates::HeartRates() {
    firstName = "No first name";
    lastName = "No last name";
}
// set the user's first name
void HeartRates::setFirstName(string first_name) {
    firstName = first_name;
}
// get the user's first name
string HeartRates::getFirstName() {
    return firstName;
}
// set the user's last name
void HeartRates::setLastName(string last_name) {
    lastName = last_name;
}
// get the user's last name
string HeartRates::getLastName() {
    return lastName;
}
// set the user's birth month
void HeartRates::setBirthMonth(int month) {
    birthMonth = month;
}
// get the user's birth month
int HeartRates::getBirthMonth() {
    return birthMonth;
}
// set the user's birth day
void HeartRates::setBirthDay(int day) {
    birthDay = day;
}
// get the user's birth day
int HeartRates::getBirthDay() {
    return birthDay;
}
// set the user's birth year
void HeartRates::setBirthYear(int year) {
    birthYear = year;
}
// get the user's birth year
int HeartRates::getBirthYear() {
    return birthYear;
}
// set the current year
void HeartRates::setCurrentYear(int presentYear) {
    currentYear = presentYear;
}
// get the current year
int HeartRates::getCurrentYear() {
    return currentYear;
}
// convert the user's numerical birth month into its formal spelling
string HeartRates::getDOB() {
    string month;
    if ((birthMonth > 0) && (birthMonth < 13)) {
        if (birthMonth == 1) {
            month = "January";
        } else if (birthMonth == 2) {
            month = "February";
        } else if (birthMonth == 3) {
            month = "March";
        } else if (birthMonth == 4) {
            month = "April";
        } else if (birthMonth == 5) {
            month = "May";
        } else if (birthMonth == 6) {
            month = "June";
        } else if (birthMonth == 7) {
            month = "July";
        } else if (birthMonth == 8) {
            month = "August";
        } else if (birthMonth == 9) {
            month = "September";
        } else if (birthMonth == 10) {
            month = "October";
        } else if (birthMonth == 11) {
            month = "November";
        } else {
            month = "December";
        }
    }
    else {
        cout << "Invalid month. Try again.";
    }
    return month;
}
// calculate the user's age
int HeartRates::getAge() {
    int age = getCurrentYear() - getBirthYear();
    return age;
}
// calculate the user's max heart rate
int HeartRates::maxHeartRate() {
    int maxRate = 220 - getAge();
    return maxRate;
}
// calculate the user's target heart rate at 50% of max heart rate
int HeartRates::targetHeartRate50() {
    int targetRate50 = maxHeartRate() * .50;

    return targetRate50;
}
// calculate the user's target heart rate at 85% of max heart rate
int HeartRates::targetHeartRate85() {
    int targetRate85 = maxHeartRate() * .85;

    return targetRate85;
}
// Create and output the UI to collect the user's info
void HeartRates::printAll() {
    string name;
    int number;
    cout << "Welcome to your heart rate calculator!" << endl << endl;
    cout << "First name: ";
    cin >> name;
    setFirstName(name);
    cout << "Last name: ";
    cin >> name;
    setLastName(name);
    cout << "Enter birth month (MM): ";
    cin >> number;
    setBirthMonth(number);
    cout << "Enter birth day (DD): ";
    cin >> number;
    setBirthDay(number);
    cout << "Enter birth year (YYYY): ";
    cin >> number;
    setBirthYear(number);
    cout << "Enter the current year: (YYYY): ";
    cin >> number;
    setCurrentYear(number);

    cout << "Name: " << getFirstName() << " " << getLastName() << endl;
    cout << "DOB: " << getDOB() << " " << getBirthDay() << ", " << getBirthYear() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Your max heart rate: " << maxHeartRate() << " beats per minute" << endl;
    cout << "Your target heart rate is 50-85% of your max heart rate: " << targetHeartRate50() << " - " << targetHeartRate85()
            << " beats per minute" << endl << endl;
    cout << "Thank you for using myHeartRate Calculator!";
}