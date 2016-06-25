/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * Created on June 24, 2016, 2:53 PM
 * Purpose:  To create a Diamond Pattern
 */


//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!



int main(int argc, char** argv) {
    //Declare Variables
    char c;//Character to utilize in creating a diamond shape
    
    //Input Data
    cout<<"Choose a character to use in creating a beautiful diamond /n"<<endl;
    cin>>c; //user to input character to form diamond
    
    //Process the Data
    
    //Output the processed Data
    cout<<"    "<<c<<endl;
    cout<<"   "<<c<<c<<c<<endl;
    cout<<"  "<<c<<c<<c<<c<<c<<endl;
    cout<<" "<<c<<c<<c<<c<<c<<c<<c<<endl;
    cout<<"  "<<c<<c<<c<<c<<c<<endl;
    cout<<"   "<<c<<c<<c<<endl;
    cout<<"    "<<c<<endl;
    
    
    //Exit Stage Right!
    return 0;
}