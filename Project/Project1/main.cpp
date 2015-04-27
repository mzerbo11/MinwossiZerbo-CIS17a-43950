/* 
 * File:   main.cpp
 * Author: Minwossi Zerbo
 *
 * Created on April 21, 2015, 12:24 AM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;
// Useful variables

// Constant variables

const double pound = 2.2046;

// Functions prototypes for the program




void ATMApp();
/*
 * 
 */

// Beginning of the execution
int main(int argc, char** argv) {

    ATMApp();
    return 0;
}

// Functions

void ATMApp()
{
    struct ATMCarac
    {
           string name1cus; // Name of the member
           int pinNum; // Age of the member
           float valueBank; // Available balance of the customer
           float deposit; // Deposit of customer
           float withdrawal; // withdrawal of the customer
         
    };
    
    ATMCarac riverside[50];
    
    for(int i = 1; i < 50; i++)
    {
        riverside[i].pinNum = rand() % 5232 + 4000;
    
    }
    
     cout << "Welcome to Bank of RIverside. Enter your 4 digit pin:" << endl;
     
     int pin;
     cin >> pin;
     
     
     int choose;
     cin >> choose;
     if(choose > 3 || choose < 1)
     {
         cout << "Invalid selection, enter again a number :" << endl;
            cin >> choose;
            do{
             cout << "Invalid selection, enter again a number :" << endl;
            cin >> choose;
            } while(choose > 3 || choose < 1);
     }
     else
     {
     do{
         switch(choose)
         {
             case 1:
                 
                 break;
                 
             case 2:
                 
                 break;
                 
           
                 
         
         
         
         }
         
     
         cin >> choose;
     } while(choose ==1 || choose ==2 || choose ==3);
     }
}