/* 
 * File:   manager.h
 * Author: Minwossi
 *
 * Created on May 28, 2015, 2:10 AM
 */

#ifndef MANAGER_H
#define	MANAGER_H
#include <cstring>

class Employee
{
private:
    char *fName; // Employee first name
    char *lName; // Employe last name
public:
    // constructor
    Employee(char *f, char *l)
    {
        // Allocate memory for the names
        fName = new char[strlen(f) + 1];
        lName = new char[strlen(l) + 1];
        
        // Copy the name to the designed allocated memory
        strcpy(fName, f);
        strcpy(lName, l);
    }
    
    ~Employee()
    {
        delete [] fName;
        delete [] lName;
    }
    
};

class Shift
{
private:
    float closingBalance;
    float openingBalance;
    float benefit;
    int date;
    int month;
    int year;
    int hour;
    int minute;
public:
    // constructor
    Shift()
    {closingBalance = 0,0; openingBalance = 0,0; benefit = 0,0;
     date = 0; month = 0; year = 0; hour = 0; minute = 0;}
    void getObalance(float b);
    void getCbalance(float c);
    void getbenefit();
    void setDate(int d);
    void setMonth(int m);
    void setYear(int y);
    void setHour(int h);
    void setMinute(int m);
};

#endif	

