/* 
 * File:   7.6.cpp
 * Author: Minwossi
 *
 * Created on March 11, 2015, 2:51 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    int values[5], count;
    
    for (count = 0; count < 5; count++)
    {
        values[count] = count + 1;
    }
    
    for (count = 0; count < 5; count++)
    {
        cout << values[count] << endl;
    }

    return 0;
}

