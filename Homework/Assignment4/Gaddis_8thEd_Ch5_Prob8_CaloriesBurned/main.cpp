/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 10, 2016 8:00pm
 * Purpose: Calories Burned
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
    float cals, mRan, cnt=5; //calories, miles ran, counting
   
    
    //Input Data
    cout<<"Burn Calories on the Treadmill!"<<endl;
    cout<<"     Minutes    Calories "<<endl;
    
           
    //Process the Data
    while (mRan<=25) {
       mRan=cnt+=5;
       cals=mRan*3.9;
       cout<<"     "<<mRan<<"         "<<cals<<endl; 
    }
    
    //Output the processed Data
    
    
    
    //Exit Stage Right
    return 0;
}

