#include <iostream>
#include "HeartRate.h"

int main() {

    HeartRates patient;

    cout << "First name: ";
    string firstName;
    cin >> firstName;
    patient.setFirstName(firstName);

    cout << "Last name: ";
    string lastName;
    cin >> lastName;
    patient.setLastName(lastName);

    cout << "Birth month (2-digit): ";
    int birthMonth;
    cin >> birthMonth;
    patient.setBirthMonth(birthMonth);
    
    cout << "Birth day (2-digit): ";
    int birthDay;
    cin >> birthDay;
    patient.setBirthDay(birthDay);

    cout << "Birth year (4-digit): ";
    int birthYear;
    cin >> birthYear;
    patient.setBirthYear(birthYear);

    patient.printAll();

    return 0;
}