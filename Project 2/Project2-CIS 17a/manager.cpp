#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "manager.h"


void Shift::getCbalance(float c)
{closingBalance = c;}

void Shift::getObalance(float b)
{openingBalance = b;}

void Shift::getBenefit(float i, float j)
{benefit = i - j;}

void Shift::setDate(int d)
{date = d;}

void Shift::setHour(int h)
{hour = h;}

void Shift::setMinute(int m)
{minute = m;}

void Shift::setMonth(int m)
{month = m;}

void Shift::setYear(int y)
{year = y;}

// Return the opening balance
float Shift::giveC()
{return closingBalance;}
//return the opening balance
float Shift::giveO()
{return openingBalance;}
//return the benefit of the day
float Shift::giveB()
{return benefit;}
// return the date
int Shift::giveDate()
{return date;}
// return the time(hour)
int Shift::giveHour()
{return hour;}
//return the time(minute)
int Shift::giveMinute()
{return minute;}
//return the month
int Shift::giveMonth()
{return month;}
//return the year
int Shift::giveYear()
{return year;}
