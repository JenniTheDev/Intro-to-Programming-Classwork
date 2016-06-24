/*
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on June 22, 2016, 8:18 PM
 * Purpose: Land Conversion Problem
 */

//System Libraries
#include <iostream> //Input/Output Library
using namespace std; //namespace of the system

//user libraries

//globals constants
const float CNVFTAC=4.356e4f;//conversion ft^2 to acres
const float CNVMFT=1/5.28e3f;//conversion from miles to Ft

//Function Prototypes

//Execution begins here

int main(int argc, char** argv) {
    // declare variables
    float nAcres;//Number of Acres
    float nSqMls;//Number of Square Miles
    
    //Input Data
    cout<<"Enter the number of acres to convert to Square Miles"<<endl;
    cin>>nAcres;
    
    //Process the Data
    nSqMls=nAcres*CNVFTAC*CNVMFT*CNVMFT;
    
    
        //Output the processed Data
    cout<<nAcres<<" acres = "<<nSqMls<<" miles" <<endl;
    
    //Exit Stage Right!

  
    
    return 0;
}
