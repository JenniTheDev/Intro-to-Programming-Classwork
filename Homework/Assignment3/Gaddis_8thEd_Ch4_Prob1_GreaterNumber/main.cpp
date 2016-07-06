/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 5th, 2016 5:15PM
 * Purpose: What number is greater?
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
    float frst,  //first number input
            scnd; //second number input
    
    //Input Data
    cout<<"Which number is bigger?"<<endl;
    cout<<"Pick a number."<<endl;
    cin>>frst;   //first number
    cout<<"Pick a second number"<<endl;
    cin>>scnd;       //second number
    
    
    //Process the Data
    if (frst>scnd) {
        cout<<"The number "<<frst<<" is greater."<<endl;
    } else if (scnd>frst) {
        cout<<"The number "<<scnd<<" is greater."<<endl;
    } else {   
        cout<<"Please try again"<<endl;
    }    
    
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

