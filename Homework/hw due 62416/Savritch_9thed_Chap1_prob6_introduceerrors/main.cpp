/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on June 20, 2016, 6:51 PM
 * Purpose: Use the math library
 */

//system Libraries
#include <iostream>  //input/output Library
#include <cmath>  //Math Library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1); //PI to 7 significant digits
const float CNVRDEG=PI/180; //conversion from radians to degrees

//Function Prototypes

//Execution Begins Here!


int main (int argc, char** argv) {
    //Declare Variables
    float deg=30;//30 degrees
    float rad; //declare the radian equivalient 
    float result;//result of the sin
    float x=2;
    float y=3;
    float ze,zm;
       
    //Input Data
    rad=deg*CNVRDEG;//convert to radian
    
    //Process the Data
    result=sin(rad);
    ze=exp(y*log(x));
    zm=x*x*x;
    
    //Output the processed Data
    cout<<"sin("<<deg<<")="<<result<<endl;
    cout<<"ze="<<x<<"^"<<y<<" -> "<<ze<<endl;
    cout<<"zm="<<x<<"^"<<y<<" -> "<<zm<<endl;
    
    cout<<"failure 1 gives #include < iostream> //input/output library"<<endl;
    cout<<"failure 2 gives #include iostream> //input/output library"<<endl;
    cout<<"failure 3 leaving int out from int main gives no error"<<endl;
    cout<<"Failure 4 mispell main to min In function 'main':"<<endl;
    cout<<"Failure 5 missing ( int main int argc, char** argv)" <<endl;
    cout<<"Failure 6 missing o from cout cut" <<endl;
    
    
    //Exit Stage Right
    return 0;
}

