/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 10, 2016 2:14PM
 * Purpose: Distance Calculator
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
    float spd, hr, mTrv; //speed, hours, miles traveled  
    float cntml=1; //start counting miles at 1
    
    //Input Data
    cout<<"What is the speed of the vehicle in mph?"<<endl;
    cin>>spd;
    cout<<"How many hours has it traveled?"<<endl;
    cin>>hr;
    
    
    //Process the Data
    cout<<"Hours       Miles"<<endl;
    cout<<"-----------------"<<endl;
    
    while (cntml <=hr) {
        mTrv=spd*cntml;
        cout<<cntml++<<"              "<<mTrv<<endl;
    } 
    
    
    
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

