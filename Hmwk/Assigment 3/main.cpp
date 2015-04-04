/* 
 * File:   main.cpp
 * Author: Minwossi
 *
 * Created on April 2, 2015, 12:22 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>

// Exercise 10.4
void e1();
// Exercise 10.6
void e2();
// Exercise 11.9
void e3();
// Exercise 12.7
void e4();
//Exercise 12.8
void e5();
// Exercise 12.11
void e6();

void e7();

void e8();

void e9();

void e10();


using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int choose;
    cout << " Choose you program or enter -1 to exit:" << endl;
    cout << "1: Exercise 10.4" << endl;
    cout << "2: Exercise 10.6" << endl;
    cout << "3: Exercise 11.9" << endl;
    cout << "4: Exercise 12.7" << endl;
    cout << "5: Exercise 12.8" << endl;
    cout << "6: Exercise 12.11" << endl;
    cout << "7: Exercise 12.9" << endl;
    cout << "8: Exercise 11.6" << endl;
    cout << "8: Exercise 11.12" << endl;
    cout << "10: Exercise 10.8" << endl;
            cin >> choose;
            
            while(choose != -1)
            {
            
    switch (choose)
    {
        case 1:
            e1();
            break;
        case 2:
            e2();
            break;
        case 3:
            e3();
            break;
        case 4:
            e4();
            break;
        case 5:
            e5();
            break;
        case 6:
            e6();
            break;
        case 7:
            e7();
            break;
        case 8:
            e8();
            break;
        case 9:
            e9();
            break;
        case 10:
            e10();
            break;
        default:
            cout << "Invalid selection" << endl;
            
    }
    cout << endl;
    cout << "Choose your program or press -1 to exit:" << endl; 
    cin >> choose;
            }
    return 0;
}

void e1()
{
    cout << " The output of the following statement cout << toupper";
    cout << "(tolower('A')) is :" << endl;
    cout << toupper(tolower('A'));
            
}
void e2()
{
}

void e3()
{
    struct Destination
    {
        string city;
        float mesuarement;
    };
}
void e4()
{
    fstream infile("input.txt", ios::in);
    string item;
    infile >> item;
    while(infile)
    {
        cout << item << endl;
        infile >> item;
    }
    infile.close();
}
void e5()
{
    cout << "Reading a file with >> doesnt include space in the file";
    cout << " but reading with the function getline includes the spaces";
    cout << endl;
}
void e6()
{
    cout << "The difference between a tellg and tellp is that";
    cout << " tellg is used to get the position in an input sequence";
    cout << " but tellp is used to get the position in an output sequence";
    cout << endl;
}
void e7()
{
    const int SIZE = 5;
    ofstream outfile("out.txt");
    double nums[SIZE] = {100.279, 1.719, 8.602, 7.777, 5.099};
    outfile << fixed << setprecision(2);
    for (int count = 0; count < 5; count++)
    {
        outfile << setw(8) << nums[count];
    }
    outfile.close();
    
}
void e8()
{
}
void e9()
{
}
void e10()
{
}