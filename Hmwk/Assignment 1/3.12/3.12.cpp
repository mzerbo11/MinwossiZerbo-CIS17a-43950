/* 
 * File:   main.cpp
 * Author: Minwossi
 *
 * Created on March 11, 2015, 11:15 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    char letter;
    
    cout << " Enter a Character: " << endl;
    cin >> letter;
    int number;
    number = static_cast<int>(letter);
    cout << "The character's ASCII code is : " << number << endl;

    return 0;
}

