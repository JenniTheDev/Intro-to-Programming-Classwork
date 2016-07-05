/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on June 29, 2016 8:07 PM
 * Purpose: Square Root
 */

//system Libraries
#include <iostream>  //input/output Library
#include <cmath>     //math library
#include <iomanip>    //formatting library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float n,guess,r;
    
    
    //Input Data
    cout<<"Program to calculate the square root"<<endl;
    cout<<"Input a number to see the repetitive approximation "<<endl;
    cout<<"of the square root"<<endl;
    cin>>n;
    
    
    //Process the Data- first pass
    guess=n/2;
    r=n/guess;
    guess=(guess+r)/2;
     
    //Output the processed Data
    cout<<fixed<<setprecision(4)<<showpoint;
    cout<<"r="<<setw(10)<<r<<" guess="<<guess<<setw(10)<<" sqrt= ("<<n<<")="<<sqrt(n)<<endl;
    
    
    //Input the data 2nd pass
    cout<<"Program to calculate the square root"<<endl;
    cout<<"Input a number to see the repetitive approximation "<<endl;
    cout<<"of the square root"<<endl;
    cin>>n;
    
    
    //Process the Data- 2nd pass
    r=n/guess;
    guess=(guess+r)/2;
    
    //Output the processed Data
    cout<<"r="<<r<<" guess="<<guess<<" square root ("<<n<<")="<<sqrt(n)<<endl;  
    
    
    
    
    
    
    
    
    
    
    //Exit Stage Right
    return 0;
}

