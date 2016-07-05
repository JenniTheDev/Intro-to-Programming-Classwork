/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 4 2016 5:49PM
 * Purpose: Convert to MPH
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
    float gallons; //gallons in tank
    float miles; //how many miles driven on a tank
    float mpg;//miles per gallon
    
    //Input Data
    cout<<"Enter the number of gallons of gas your car holds"<<endl;
    cin>>gallons;
    cout<<"Enter the number of miles your car travels on a full tank of gas"<<endl;
    cin>>miles;
           
    
    
    
    //Process the Data
    mpg=miles/gallons;
    
    //Output the processed Data
    cout<<"Your car gets "<<mpg<<" miles per gallon"<<endl;
    
    //Exit Stage Right
    return 0;
}

