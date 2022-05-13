//
// Created by rrluc on 5/13/2022.
//

#include "HeartRates.h"

HeartRates::HeartRates() {
    firstName = "No first name";
    lastName = "No last name";
    birthMonth;
    birthDay;
    birthYear;
}

void HeartRates::setFirstName(string first_name) {
    firstName = first_name;
}

string HeartRates::getFirstName() {
    return firstName;
}

void HeartRates::setLastName(string last_name) {
    lastName = last_name;
}

string HeartRates::getLastName() {
    return lastName;
}

void HeartRates::setBirthMonth(int month) {
    birthMonth = month;
}

int HeartRates::getBirthMonth() {
    return birthMonth;
}

void HeartRates::setBirthDay(int day) {
    birthDay = day;
}

int HeartRates::getBirthDay() {
    return birthDay;
}

void HeartRates::setBirthYear(int year) {
    birthYear = year;
}

int HeartRates::getBirthYear() {
    return birthYear;
}

void HeartRates::setCurrentYear(int presentYear) {
    currentYear = presentYear;
}

int HeartRates::getCurrentYear() {
    return currentYear;
}

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

int HeartRates::getAge() {
    int age = getCurrentYear() - getBirthYear();
    return age;
}

int HeartRates::maxHeartRate() {
    int maxRate = 220 - getAge();
    return maxRate;
}

int HeartRates::targetHeartRate50() {
    int targetRate50 = maxHeartRate() * .50;

    return targetRate50;
}

int HeartRates::targetHeartRate85() {
    int targetRate85 = maxHeartRate() * .85;

    return targetRate85;
}

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
            << " beats per minute" << endl;
}