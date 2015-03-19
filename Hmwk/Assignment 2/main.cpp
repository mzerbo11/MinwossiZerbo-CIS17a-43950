/* 
 * File:   main.cpp
 * Author: Minwossi
 *
 * Created on March 18, 2015, 11:16 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */

void fillArray(int a[], int size)
{  
 for(int i =0; i < size; i++ )
    {
        a[i] = rand()% 90 + 10;
    }
}

float mean(int[], int);
float median(int , int);
int mode(int , int);

int main(int argc, char** argv) {
    
    
   
    int num;
    
    cout << " Enter the Size of the Array: " << endl;
    cin >> num;
    int array[num];
    fillArray(array, num);
    
    //Question 2: Fill array woth two digits random numbers
    

    for(int i =0; i < num; i++ )
    {
       cout << array[i] << " ";
    }
    cout << endl << endl;
    
    cout << "The mean of the array is : " << mean(array,num) << endl;
    return 0;
    
}

float mean(int a [], int num)
{
    float sum = 0;
    int count = 0;
    
    for(int i =0; i < num ; i++ )
    {
      sum += a[i];
      count++;
    }
    float meanVal;
    
    meanVal = sum/count;
    
    return meanVal;
}

float median(int b[], int num1)
{
 for(int i =0; i < num1; i++ )
    {
        for(int j =0; j < num1; j++ )
        {
            if(b[j]> b[j+1])
            {
              float randVal;
              randVal = b[j];
              b[j] = b[j+1];
              b[j+1] = randVal;
            }
        }
    }

}

int mode(int c[] , int num2)

{
    for(int i =0; i < num2; i++ )
    {
        for(int j =0; j < num2; j++ )
        {
            if(c[j]> c[j+1])
            {
              float randVal;
              randVal = c[j];
              c[j] = c[j+1];
              c[j+1] = randVal;
            }
        }
    }
    
    int modeVal;
    int maxNum = 1;
    int count = 1;
    int firstNum = c[0];
    for(int i = 0; i < num2; i++)
        
        {
        if (c[i] == maxNum) 
      {
         count++;
      }
      else
      { 
            if (count > maxNum) 
            {
                  maxNum = count;
                  modeVal = firstNum;
            }
           count = 1;
           firstNum = c[i];
  }
        }

    return modeVal;
}