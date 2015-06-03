/* 
 * File:   main.cpp
 * Author: Minwossi Zerbo
 *
 * Created on May 28, 2015, 12:24 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include "manager.h"


using namespace std;
// Useful variables

// Constant variables



// Functions prototypes for the program
  void managerTrack();
/*
 * 
 */

// Beginning of the execution
int main(int argc, char** argv) {

    
            
            
          
    // Dynamic array declaration for the pin numbers
    int *pin; 
    pin = new int[3];
    // Pin numbers for unlocking
    pin[0] = 4518;
    pin[1] = 5612;
    pin[2] = 6310;
    cout << "Hello. Enter a valid pin number to unlock: ";
    string nameO;
    int enterPin;
    cin >> enterPin;
    
    if(enterPin == 4518 || enterPin == 5612 || enterPin == 6310 )
    {
        cout << "Enter your name: ";
        cin >> nameO;
        cout << "Hello Mr " << nameO << endl;
    }
    // Checking for wrong pin
    else
    {
        cout << "Pin number wrong. Enter again: ";
        cin >> enterPin;
        do
        {
        cout << "Pin number wrong. Enter again: ";
        cin >> enterPin;
        }while(enterPin != 4518 && enterPin != 5612 && enterPin != 6310 );
    
        cout << "Enter your name: ";
        getline(cin, nameO);
        cout << "Hello Mr " << nameO << endl;
    }
    // execution of the managing software
    
    managerTrack();
    
     ofstream outfile2("track.txt", ios::app);
               outfile2 <<setw(16) << "Log in sheet" << endl;
               outfile2 <<"Name: " << nameO << endl;
               outfile2.close();  
    
    // delete the array at the end
    delete []pin;
    return 0;
}
// Function for the managing software
void managerTrack()
{
  cout << "What do you want to do today: " << endl;
    cout << "1. Take inventory" << endl;
    cout << "2. Hire an employee" << endl;
    cout << "3. Day benefit" << endl;
    cout << "4. Make a schedule" << endl;
    cout << "5. Calculate business benefit" << endl;
    cout << "6. Calculate the pay of your employees" << endl;
    cout << "-1. EXIT" << endl;
    
    int choose;
    cin >> choose;
    
    while(choose != -1)
    {
    switch (choose)
    {
    
        // take inventory
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
               outfile1 << left << setw(16) << received[i].items;
               outfile1 << left << setw(8) << received[i].numberItem;
               outfile1 << endl;
    }
  // Close the file
    outfile1.close();
            }
            break;
            
           
             //Hire an employee
        case 2:
        {
            Employee hiring;
            
            
            cout << "Enter the date: ";
            int date1,month1,year1;
            
            cin >> date1 >> month1 >> year1;
            
                do
                {
                     cout << "Invalid date. Enter a valid date: ";
                     cin >> date1 >> month1 >> year1;
                }while(date1 > 31 || date1 < 1 && month1 > 12 || month1 < 1  );
            
                cout << "Enter the employee First name: ";
                string firstName;
                cin >> firstName;
                cout << "Enter the employee last name: ";
                string lastName;
                cin >> lastName;
                cout << "Enter the employee phone number: ";
                int phoneNum;
                // for phone number format design
                cin >> phoneNum;
                hiring.setPhonenum(phoneNum);
                hiring.setfName(firstName);
                hiring.setlName(lastName);
                cout <<"This employee was added to your list of employees: ";
                cout <<"Name: "<<hiring.getlName() << " " << hiring.getfName();
                cout << "Phone Number: " << hiring.getNum();
                
                ofstream outfile2("output3.txt", ios::app);
                outfile2 << fixed << showpoint << setprecision(2);
   outfile2 <<left<< setw(16) << "First Name" << setw(8) << "Last Name" << endl;
                outfile2 << left << setw(16) << hiring.getlName();
                outfile2 << left << setw(8) << hiring.getfName();
                outfile2 << endl;
    
  // Close the file
    outfile2.close();
        }
            break;
            // Day benefit
        case 3:
        {
            Shift benefitDay;
            cout << "Enter the date: ";
            int day2,month2,year2;
            cin >> day2 >> month2 >> year2;
            //check for invalid entry
            while(day2 > 31 || day2 < 1 && month2 > 12 || month2 < 1)
            {
              cout << "Invalid date. Enter a valid date: ";
              cin >> day2 >> month2 >> year2;
            }
                cout << "Enter the time: ";
                int hour,minute;
                cin >> hour >> minute;
            while(hour > 24 || hour < 1 && minute > 59 || minute < 00); 
            {
               cout << "Invalid time. Enter a valid time: ";
               cin >> hour >> minute;
            }   
                // Date of the day
                benefitDay.setDate(day2);
                // month
                benefitDay.setMonth(month2);
                // year
                benefitDay.setYear(year2);
                
                // Time
                benefitDay.setHour(hour);
                benefitDay.setMinute(minute);
                cout << "Enter the opening balance:";
                float openBal;
                cin >> openBal;
                
                // setting the opening balance
                benefitDay.getObalance(openBal);
                
                cout << "Enter the closing balance: ";
                float closeBal;
                cin >> closeBal;
                
                //setting th closing balance
                benefitDay.getCbalance(closeBal);
                // calculate the benefit of the day
                benefitDay.getBenefit(closeBal,openBal);
                
                cout << "Date: " << benefitDay.giveDate() << "/";
                cout << benefitDay.giveMonth()<<"/" ;
                cout << benefitDay.giveYear() << endl;
                cout << "Time: " << benefitDay.giveHour()<< ":";
                cout << benefitDay.giveMinute();
                cout <<"The benefit of the day was: " <<benefitDay.giveB();
                cout << fixed << showpoint << setprecision(2);
                
                ofstream outfile3("output4.txt", ios::app);
                outfile3 << fixed << showpoint << setprecision(2);
                outfile3 << "Date: " << benefitDay.giveDate() << "/";
                outfile3 << benefitDay.giveMonth()<<"/" ;
                outfile3 << benefitDay.giveYear() << "          ";
                outfile3 << "Time: " << benefitDay.giveHour()<< ":";
                outfile3 << benefitDay.giveMinute()<< endl;
                outfile3 <<"The benefit of this day is: "<< benefitDay.giveB();
                outfile3 << endl;
                outfile3.close();
                
        }
            break;
           // Make a working schedule
        case 4:
        {
            
            ofstream outfile4("schedule.txt", ios::app);
                outfile4 << fixed << showpoint << setprecision(2);
                outfile4<<right << setw(15) << "Monday";
                outfile4<<right << setw(15) << "Tuesday";
                outfile4<<right << setw(15) << "Wednesday";
                outfile4<<right << setw(15) << "Thursday";
                outfile4<<right << setw(15) << "Friday";
                outfile4<<right << setw(15) << "Saturday";
                outfile4<<right << setw(15) << "Sunday";
                outfile4 <<endl;
                
                // Making the schedule for the first shift 
                // and writing it in the file
                outfile4 <<left <<setw(9)<<"Shift 1";
                cout <<"Enter the name of the employees that works." << endl;
                cout << "SHIFT 1......................." << endl;
                cout << "Monday Shift 1: ";
                string name;
                cin >> name;
                outfile4 <<left <<setw(14) << name;
                cout << "Tuesday Shift 1: ";
                cin >> name;
                outfile4 <<left <<setw(13) << name;
                cout << "Wednesday Shift 1: ";
                cin >> name;
                outfile4 <<left <<setw(16) << name;
                cout << "Thursday Shift 1: ";
                cin >> name;
                outfile4 <<left <<setw(17) << name;
                cout << "Friday Shift 1: ";
                cin >> name;
                outfile4 <<left <<setw(13) << name;
                cout << "Saturday Shift 1: ";
                cin >> name;
                outfile4 <<left <<setw(17) << name;
                cout << "Sunday Shift 1: ";
                cin >> name;
                outfile4 << name;
                outfile4 <<endl;
                outfile4 << endl;
                 
                // Making the schedule for the second shift 
                // and writing it into a file
                 cout << "SHIFT 2......................." << endl;
                 cout << "Monday Shift 2: ";
                 outfile4 <<left <<setw(9)<<"Shift 2";
                 
                cin >> name;
                outfile4 <<left <<setw(14) << name;
                cout << "Tuesday Shift 2: ";
                cin >> name;
                outfile4 <<left <<setw(13) << name;
                cout << "Wednesday Shift 2: ";
                cin >> name;
                outfile4 <<left <<setw(16) << name;
                cout << "Thursday Shift 2: ";
                cin >> name;
                outfile4 <<left <<setw(17) << name;
                cout << "Friday Shift 2: ";
                cin >> name;
                outfile4 <<left <<setw(13) << name;
                cout << "Saturday Shift 2: ";
                cin >> name;
                outfile4 <<left <<setw(17) << name;
                cout << "Sunday Shift 2: ";
                cin >> name;
                outfile4 << name;
                outfile4 <<endl;
                outfile4 << endl;
                
                // Making the schedule for the third shift
                // and write in the file
                cout << "SHIFT 3......................." << endl;
                 cout << "Monday Shift 3: ";
                 outfile4 <<left <<setw(9)<<"Shift 3";
                cin >> name;
                outfile4 <<left <<setw(14) << name;
                cout << "Tuesday Shift 3: ";
                cin >> name;
                outfile4 <<left <<setw(13) << name;
                cout << "Wednesday Shift 3: ";
                cin >> name;
                outfile4 <<left <<setw(16) << name;
                cout << "Thursday Shift 3: ";
                cin >> name;
                outfile4 <<left <<setw(17) << name;
                cout << "Friday Shift 3: ";
                cin >> name;
                outfile4 <<left <<setw(13) << name;
                cout << "Saturday Shift 3: ";
                cin >> name;
                outfile4 <<left <<setw(17) << name;
                cout << "Sunday Shift 3: ";
                cin >> name;
                outfile4 << name;
                outfile4 <<endl;
                outfile4 << endl;
                
                
                outfile4.close();
                
               /*ifstream infile("schedule.txt");
                string word;
                while(infile >> word)
                {
                    cout << word <<"      "<< word<<"      "; 
                    cout << word<<"      "; 
                    cout << word <<"      "<< word <<"      ";
                    cout << word <<"      " << word << endl;
                    
                    cout << word <<" "<< word <<"      "; 
                    cout << word<<"      "; 
                    cout << word <<"      "<< word <<"      ";
                    cout << word <<"      " << word <<"      ";
                    cout << word <<"      "<< word << endl;
                    
                     cout << word <<" "<< word <<"      "; 
                    cout << word<<"      "; 
                    cout << word <<"      "<< word <<"      ";
                    cout << word <<"      " << word <<"      ";
                    cout << word <<"      "<< word << endl;
                    
                     cout << word <<" "<< word <<"      "; 
                    cout << word<<"      "; 
                    cout << word <<"      "<< word <<"      ";
                    cout << word <<"      " << word <<"      ";
                    cout << word <<"      "<< word << endl;
                }
                */
               
        }
        break;
        
          // Business benefit
        case 5:
            
            cout << "";
            break;
        // Calculate the pay of the employees
        case 6:
        {
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
      outfile << endl;
    }
  // Close the file
    outfile.close();
        }
            break;
     
//                    
         default:
         
          cout << "Invalid selection" << endl;
         
           break;
    }
    cout << "What do you want to do today: " << endl;
    cout << "1. Take inventory" << endl;
    cout << "2. Hire an employee" << endl;
    cout << "3. Day benefit" << endl;
    cout << "4. Make a schedule" << endl;
    cout << "5. Calculate business benefit" << endl;
    cout << "6. Calculate the pay of your employees" << endl;
    cout << "-1. EXIT" << endl;
    
    cin >> choose;
    }
    //ManagerTrack();
    
              

}