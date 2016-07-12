/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 11, 2016 9:00AM
 * Purpose: Membership Fees
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip>//format library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float mCst, yr, pInc=1.04, mFee=2500; //membership cost, year, fee increase,  member fee $2500
    float cnt=1; //start counting
    
    //Input Data
    cout<<" Membership Fees are rising, join now!"<<endl;
    cout<<"    Year      Amount of Membership   "<<endl;
            
          
    //Process the Data
    while (yr<6) {
        yr=cnt++;
        mCst=mFee*pInc*yr;
        cout<<fixed<<setprecision(2)<<showpoint; 
        cout<<"    "<<yr<<"   $"<<mCst<<"    "<<endl;
    }
    
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

