/* 
 * File:   main.cpp
 * Author: Minwossi
 *
 * Created on May 4, 2015, 10:42 PM
 */

#include <cstdlib>
#include <iostream>

// Declaration of functions

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
void ex6();
void ex7();
void ex8();
void ex9();
void ex10();
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "Chapter 13..............." << endl;
    cout << "1. Exercise 1" << endl;
    cout << "2. Exercise 2" << endl;
    cout << "3. Exercise 3" << endl;
    cout << "4. Exercise 4" << endl;
    cout << "5. Exercise 5" << endl;
    
    cout << "Chapter 14..............." << endl;
    cout << "6. Exercise 1" << endl;
    cout << "7. Exercise 2" << endl;
    cout << "8. Exercise 3" << endl;
    cout << "9. Exercise 4" << endl;
    cout << "10. Exercise 5" << endl;
    
    cout << "Which program do you want to run: ";
    int choose;
    cin >> choose;
    
    if(choose < 1 || choose > 10)
    {
        cout << "Invalid selection. Enter again: ";
        cin >> choose;
        do
        {
        cout << "Invalid selection. Enter again: ";
        cin >> choose;
        } while(choose < 1 || choose > 10);
    }
    
    switch(choose)
    {
        case 1: ex1(); break;
        case 2: ex2(); break;
        case 3: ex3(); break;
        case 4: ex4(); break;
        case 5: ex5(); break;
        case 6: ex6(); break;
        case 7: ex7(); break;
        case 8: ex8(); break;
        case 9: ex9(); break;
        case 10: ex10(); break;
               
    
    
    }
    return 0;
}

void ex1()
{
  class Tank
  {
  private:
      int gallons;
  public:
      Tank()
      {gallons = 50;}
      Tank (int gal)
      {gallons = gal;}
      int getGallons()
      {return gallons;}
          
  };  

        Tank storage[3] = {10, 20};
      for(int index = 0; index <3; index++)
          cout << storage[index].getGallons() << endl;

}
void ex2()
{
    class Package
    {
    private: 
        int value;
    public:
        Package()
        {value = 7; cout << value << endl;}
        Package(int v)
        {value = v; cout << value << endl;}
        ~Package()
        {cout << value << endl;}
    
    };
    
    Package obj1(4);
    Package obj2(3);
    Package obj3(2);
}
void ex3()
{
    class Yard
    {
    private: 
        int length, width;
    public:
        Yard()
        {length = 0; width = 0;}
        setLength(int len)
        {length = len;}
        setWidth(int w)
        {width = w;}
        getLength()
        {return length;}
        getWidth()
        {return width;}
    };
    
    cout << "How many yard do you want to create: ";
    int yard;
    cin >> yard;
    Yard numYard[yard];
    int count = 1;
    for(int i = 0; i < yard; i++)
    {
        cout << "Enter the length of yard #" << count << ": ";
        int length;
        cin >> length;
        numYard[i].setLength(length);
        
        cout << "Enter the width of yard #" << count << ": ";
        int width;
        cin >> width;
        numYard[i].setWidth(width);
        count++;
        cout << endl;
    }
    count = 1;
    for(int i = 0; i < yard; i++)
    {
        cout << "YARD #" << count << ": ";
        cout << "Length = " << numYard[i].getLength() << "; ";
        cout << "Width = " << numYard[i].getWidth();
        cout << endl;
        count++;
    }
}
void ex4()
{
    class phoneNumber
    {
    private:
        int number;
        string name;
    public:
        phoneNumber()
        {number = 0; string = " ";}
        setPhone(int p)
        {number = p;}
        setName(string n)
        {string = n;}
        getPhone()
        {return number;}
        getName()
        {return name;}
    };
    
    phoneNumber customer;
    
    cout << "Enter your name: ";
    string name;
    cin >> name;
    customer.setName(name);
    
     cout << "Enter your phone number: ";
        int phoneNum;
        cin >> phoneNum;
      customer.setPhone(phoneNum);
      
      cout << "Name: " << customer.getName() << endl;
      cout << "Phone Number: " << customer.getPhone() << endl;
      
}
void ex5()
{}
void ex6()
{}
void ex7()
{}
void ex8()
{}
void ex9()
{}
void ex10()
{}