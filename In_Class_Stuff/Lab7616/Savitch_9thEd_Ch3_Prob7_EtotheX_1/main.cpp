/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 6, 2016, 8:43 PM
 * Purpose: factorial
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
    int fact=1,n;
    
    //Input Data
    cout<<"This program calculates the factorial"<<endl;
    cout<<"Input the n which will then output n!"<<endl;
    cin>>n;
    
    
    
    //Process the Data
    for (int i=1;i<=n;i++) {
        fact*=i;
    }    
    
    
    //Output the processed Data
    cout<<n<<"!="<<endl;
    
    //Exit Stage Right
    return 0;
}

