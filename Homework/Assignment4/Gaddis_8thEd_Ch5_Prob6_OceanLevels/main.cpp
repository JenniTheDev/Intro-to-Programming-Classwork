/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 10, 2016 2:00PM
 * Purpose: Ocean Levels
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip> //formating library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float oLvl, yr, cnt=1; //ocean level, year, count from 
    
    //Input Data
    cout<<"Number of millimeters the Ocean Rises"<<endl;
    cout<<"  Year          Ocean Level        "<<endl;
    
    
    
    //Process the Data
    while (yr<25) {
        yr=cnt++;
        oLvl=yr*3.1;
        cout<<"   "<<yr<<"         "<<oLvl<<endl;
    }
    
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

