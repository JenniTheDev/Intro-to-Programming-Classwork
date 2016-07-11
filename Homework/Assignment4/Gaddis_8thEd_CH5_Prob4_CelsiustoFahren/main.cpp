/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 10, 2016 5:32PM
 * Purpose: Celsius to Fahrenheit Table
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip>  //format libary

using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
//Declare Variables
float c, f; //celsius, Fahrenheit
int srtcnt=0;//start counting at
    
//Input Data
    cout<<"Celsius       Fahrenheit"<<endl;
        while (c <=19) {
        c=srtcnt++ ;      //celsius count on by ones
        f=(c*5/9)+32;    //F to C convert 
        cout<<c<<"               "<<f<<endl;        
}
    
    
    
    //Process the Data
    
    
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

