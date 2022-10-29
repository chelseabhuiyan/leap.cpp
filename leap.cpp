/*
  Author: Chelsea Bhuiyan
  Course: CSCI-135
  Instructor: Genady Maryash
  Assignment: Lab 1C
  
  This program asks the user to enter a year
  and prints if its a leap year or common year.
*/

#include <iostream>        
using namespace std;       

int main()
{
    int year;   
    cout<<"Enter year:";  
    cin>>year;   

    if (year%4!=0)              //if year is not divisible by 4 then common year
    {
        cout<<"Common year";   
    }
    else if (year%100!=0)      //if year is not divisible by 100 then leap year
    {
        cout<<"Leap year";     
    }
    else if (year%400!=0)      //if year is not divisble by 400 then common year
    {
        cout<<"Common year";  
    }
    else 
    {
        cout<<"Leap year";       //else its a leap year
    }
    return 0;  
}