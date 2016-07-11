/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 6, 2016, 8:43 PM
 * Purpose: factorial hard way no limit
 */

//system Libraries
#include <iostream>  //input/output Library
#include <cmath> //math library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float apprxEx=1, x; //approx value of x 
    
    //Input Data
    cout<<"This program calculates e^x"<<endl;
    cout<<"Input the x which will then output e^x"<<endl;
    cin>>x;
    
    
    
    //Process the Data
    for (int n=1;n<=12;n++){
        unsigned int fact=1;
        for (int i=1;i<=n;i++) {
            fact*=i;
        }
        apprxEx+=(pow(x,n)/fact);
    }
    
    //Output the processed Data
    cout<<"Exact       e^"<<x<<"="<<exp(x)<<endl;
    cout<<"Approximate e^"<<x<<"="<<apprxEx<<endl;
    
    
    
    //Exit Stage Right
    return 0;
}
