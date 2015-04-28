/* 
 * File:   main.cpp
 * Author: Minwossi Zerbo
 *
 * Created on April 21, 2015, 12:24 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>

using namespace std;
// Useful variables

// Constant variables

const double pound = 2.2046;

// Functions prototypes for the program




void ManagerTrack();
/*
 * 
 */

// Beginning of the execution
int main(int argc, char** argv) {

    
    ManagerTrack();
    return 0;
}

void ManagerTrack()
{

    cout << "What do you want to do today: " << endl;
    cout << "1. Take inventory" << endl;
    cout << "2. Calculate the pay of your employees" << endl;
    
    
    int choose;
    cin >> choose;
    
    
    switch (choose)
    {
    
        case 1: 
            
            // Structure declaration
            struct delivery
            {
                string items; // Items delivered
                int numberItem; // Amount delivered
            };
           
           int day;
           int month;
           int year;
           // Date of delivery
           cout << "Enter The date: ";
           
           cin >> day >> month >> year;
            cout << "How many categories of items where delivered: ";
            int itemNum;
            cin >> itemNum;
            // Check for negative entry
            if(itemNum < 0)
            {
                cout << "Invalid. Enter again: ";
                cin >> itemNum;
                do
                {
                 cout << "Invalid. Enter again: ";
                cin >> itemNum;
                }while(itemNum < 0);
            
            }
            else
            {
                delivery received[itemNum];
                string category;
                int numReceived;
                        // For example beer, candy, soda.
            cout << "Enter the different categories of item received" << endl;
                for(int i = 0; i < itemNum; i++)
                {
                    cout << "Category: ";
                    cin >> category;
                    received[i].items = category;
                    
                    // Number of each item received
                    cout << "Number received: ";
                    cin >> numReceived;
                    received[i].numberItem = numReceived;
                    
                }
            
           cout << "Delivery received on " << day << "/" << month << "/";
           cout << year << endl;
           
         
               
           for(int i = 0; i < itemNum; i++)
           {
               
               cout << left << setw(8) << received[i].items;
               cout << left << setw(8) << received[i].numberItem;
               cout << endl;
           }
           ofstream outfile1("output2.txt", ios::app);
  outfile1 << fixed << showpoint << setprecision(2);
  outfile1 <<left<< setw(16) << "Category" << setw(8) << "Amount" << endl;
    for (int i = 0; i < itemNum; i++)
    { 
               outfile1 << left << setw(8) << received[i].items;
               outfile1 << left << setw(8) << received[i].numberItem;
    }
  // Close the file
    outfile1.close();
            }
            break;
        case 2:
             // declaration of the structure
        struct globalPayroll
        {
            string name; // name of the employees
            int hours; // hours worked
            float ratePay; // pay rate of the employee
            float money; // Payment of the employee
        };
        
        cout << "How many employees are there in the company: " ;
        int empl;
        cin >> empl; // number of employee
        int count = 1;
        globalPayroll employees[empl]; // array of structure for employees
        for(int i = 0; i < empl; i++)
        {
            cout << "Employee #" << count << ": ";
            cin >> employees[i].name; // employee name
            cout << "Number of hours worked: ";
            cin >> employees[i].hours; // hours worked
            
            // error checking for negative hours
            while(employees[i].hours < 0)
            {
                cout << "Invalid hour. Enter again: ";
                cin >> employees[i].hours;
            }
            cout << "Rate of pay: ";
            cin >> employees[i].ratePay; // pay rate for each employee
            
            // error checking for negative pay rate
            while(employees[i].ratePay < 0)
            {
                cout << "Invalid hour. Enter again: ";
                cin >> employees[i].ratePay;
            }
            count++;
        }
        
            //Calculate and display the pay of each employee
            int count2 = 1;
            cout << fixed << showpoint << setprecision(2);
             for(int i = 0; i < empl; i++)
            {
            float money;
                    money = employees[i].hours * employees[i].ratePay;
                    
                    employees[i].money = money;
                    // output gross pay
                    cout << "Employee #" << count2 << ": ";
                    cout << employees[i].name << "'s Pay is $";
                    cout << money << endl;
                    count2++;
             }
            //Open a file for the output
            
    ofstream outfile("output.txt", ios::app);
  outfile << fixed << showpoint << setprecision(2);
  outfile <<left<< setw(16) << "Employee Name" << setw(8) << "Payment" << endl;
    for (int i = 0; i < empl; i++)
    { 
        // Writing the data to the file
      outfile << left << setw(16) << employees[i].name ;
      outfile << setw(8) << employees[i].money;
      cout << endl;
    }
  // Close the file
    outfile.close();
    
            break;
        
    }
}