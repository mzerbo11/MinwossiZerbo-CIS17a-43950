/* 
 * File:   manager.h
 * Author: Minwossi
 *
 * Created on May 28, 2015, 2:10 AM
 */

#ifndef MANAGER_H
#define	MANAGER_H
#include <cstring>
#include <string>

class Employee
{
private:
    std::string fName;
    std::string lName;
//    char *fName; // Employee first name
//    char *lName; // Employee last name
    int phoneN;
public:
    // constructor
//    Employee(std::string *f, std::string *l)
//    {
//        // Allocate memory for the names
//        fName = new char[strlen(f) + 1];
//        lName = new char[strlen(l) + 1];
//        
//        // Copy the name to the designed allocated memory
//        strcpy(fName, f);
//        strcpy(lName, l);
//    }
    
    Employee()
    { fName = ""; lName = "";}
    void setPhonenum(int n)
    {phoneN = n;}
    
    void setfName(std::string n)
    {fName = n;}
    void setlName(std::string l)
    {lName = l;}
    
    std::string getfName(std::string r)
    {return fName;}
    std::string getlName(std::string e)
    {return lName;}
    int getNum(int num)
    {return phoneN;}
    ~Employee();
//    {
//        delete [] fName;
//        delete [] lName;
//    }
    
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

