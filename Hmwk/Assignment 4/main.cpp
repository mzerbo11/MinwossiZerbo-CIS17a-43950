/* 
 * File:   main.cpp
 * Author: Minwossi
 *
 * Created on May 15, 2015, 11:12 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void ex1();
void ex2();
void ex3();
void ex4();
void ex5();
/*
 * 
 */
int main(int argc, char** argv) {
    
    cout << "Chapter 15.............. " << endl;
    cout << "1: Exerice 1" << endl;
    cout << "2: Exerice 2" << endl;
    cout << "3: Exerice 3" << endl;
    cout << "4: Exerice 4" << endl;
    cout << "5: Exerice 5 : ";
    
    int choose;
    cin >> choose;
    
    switch(choose)
    {
        case 1: ex1(); break;
        case 2: ex2();break;
        case 3: ex3();break;
        case 4: ex4();break;
        case 5: ex5();break;
    }

    return 0;
}

void ex1()
{
    // declaring a class
    class Base
    {
    protected:
        int baseVar;
    public:
        // constructor
        Base(int val = 2)
        {baseVar = val;}
        
        int getVar()
        {return baseVar;}
    };
    // derived class to inherit base class
    class Derived : public Base
    {
    private: 
        int derivedVar;
    public:
        Derived(int val = 100)
        {derivedVar = val;}
        int getVar()
        {return derivedVar;}
    };
    
    Base *optr = NULL;
    Derived object;
    
    optr = &object;
    
    cout << "Demonstration Inheritance" << endl;
    cout << optr->getVar() << endl;

}
void ex2()
{
    //declaring a class
    class First
    {
    protected:
        int a;
    public:
        First(int x = 1)
        {a = x;}
        // creating a virtual function
        virtual void twist()
        {a *= 2;}
        int getVal()
        {twist(); return a;}
    };
   // derived class
    class Second : public First
    {
    private:
        int b;
    public:
        Second(int y = 5)
        {b = y;}
        virtual void twist()
        {b *= 10;}
    };
    
    First object1;
    Second object2;
    cout << object1.getVal() << endl;
    cout << object2.getVal() << endl;
}
void ex3()
{
    class Sky
    {
    public:
        Sky()
        {cout << "Entering the sky" << endl;}
        Sky(string color)
        {cout << "The sky is " << color << endl;}
        ~Sky()    
        { cout << "Leaving the sky" << endl; } 
    
    };
    class Ground : public Sky 
    {
    public:
        Ground()
        {cout << "Entering the ground" << endl;}
        Ground(string c1, string c2): Sky(c1)
        {cout << "The ground is " << c2 << endl;}
        ~Ground()
        {cout << "Leaving the ground" << endl;}
    
    };
    
    Ground demonstration;
}
void ex4()
{}
void ex5()
{}
