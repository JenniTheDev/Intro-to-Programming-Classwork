/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 5, 2016 6:30PM
 * Purpose: Roman Number Converter
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
    float nChoice; //choice of number 1-10
    
    
    //Input Data
    cout<<"Pick a whole number 1-10 to convert into a Roman Numeral"<<endl;
    cin>>nChoice;
        
    //Process the Data
    if (nChoice==1) { 
        cout<<"The roman numeral is I "<<endl;
    } else if (nChoice==2) {
        cout<<"The roman numeral is II"<<endl;
    } else if (nChoice==3) {    
        cout<<"The roman numeral is III"<<endl;
    } else if (nChoice==4) {
        cout<<"The roman numeral is IV"<<endl;
    } else if (nChoice==5) {
        cout<<"The roman numeral is V"<<endl;
    } else if (nChoice==6) {
        cout<<"The roman numeral is VI"<<endl;
    } else if (nChoice==7) {
        cout<<"The roman numeral is VII"<<endl;
    } else if (nChoice==8) {
        cout<<"The roman numeral is VIII"<<endl;
    } else if (nChoice==9) {
        cout<<"The roman numeral is IX"<<endl;
    } else if (nChoice==10) {
        cout<<"The roman numeral is X"<<endl;
    } else  {
        cout<<" You did not pick a whole number 1-10"<<endl;
        
    }
    
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

