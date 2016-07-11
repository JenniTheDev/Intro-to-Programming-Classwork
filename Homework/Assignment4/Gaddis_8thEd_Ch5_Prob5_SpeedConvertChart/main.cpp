/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 11, 2016 3:50 PM 
 * Purpose: Speed Convert Chart
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
    float mph, kph, cnt=35; //miles per hour, kilometers per hour, count starts at 40
    
    //Input Data
    cout<<"Speed in Kilometers per Hour to Speed in Miles per Hour"<<endl;
    cout<<"---------KPH----------MPH---------------------"<<endl;
    
    
    //Process the Data
    
    while (kph<=119) {
        cout<<fixed<<setprecision(0); //I picked 0 because you usually don't drive in pts of a mph/kph
        kph=cnt+=5;
        mph=(kph)*0.6214;
        cout<<"          "<<kph<<"           "<<mph<<endl;        
    }
    
    
    
    
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

