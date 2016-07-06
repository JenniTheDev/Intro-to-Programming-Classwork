/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 5, 2016 6:04 PM 
 * Purpose: Magic Dates
 */

//system Libraries
#include <iostream>  //input/output Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float mnth, dy, yr;     //month in numbers, day and year
    float mnthdy;    //month and day multiplied today
    
    //Input Data
    cout<<"A magic date is when the month and day multiply to equal the year"<<endl;
    cout<<"To find out if a date is magic, enter the following"<<endl;
    cout<<"Enter the Month in number form (example: January = 1): "<<endl;
    cin>>mnth;
    cout<<"Enter the day in numbers:"<<endl;
    cin>>dy;
    cout<<"Enter the last two digits of the year:"<<endl;
    cin>>yr;      
    
    
    //Process the Data
    mnthdy=dy*mnth;
    
    
    //Output the processed Data
    if (mnthdy==yr) {
        cout<<"The date "<<mnth<<"/"<<dy<<"/"<<yr<<"  is magic!"<<endl;
    } else {
        cout<<"The date "<<mnth<<"/"<<dy<<"/"<<yr<<" is NOT magic"<<endl;
    }    
    
    
    //Exit Stage Right
    return 0;
}

