/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on June 24, 2016, 3:48 PM
 * Purpose: How much in the paycheck
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip> //format Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float yearpay=32500; //yearly amount of paycheck
    float biweekly=26; //number of biweekly paydays
    float bimonthly=24; //number of monthly paydays
    float weekpay=yearpay/biweekly;
    float monthpay=yearpay/bimonthly;
    
    //Input Data
    weekpay=yearpay/biweekly;//amount paid biweekly
    monthpay=yearpay/bimonthly;//amount paid twice a month
            
            
    //Process the Data
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"If yearly pay is $"<<yearpay<<endl;
    cout<< "The amount of the paycheck with biweekly paydates is $"<<weekpay<<endl;
    cout<<"The amount of the paycheck with bimonthly paydates is $"<<monthpay<<endl;
    
    //Exit Stage Right
    return 0;
}

