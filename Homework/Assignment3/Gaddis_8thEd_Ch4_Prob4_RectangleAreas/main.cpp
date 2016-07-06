/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 5, 2016, 6:51 PM
 * Purpose: Compare two rectangles
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
float wdth1, lngth1, wdth2, lngth2; //width and length for rectangles 1 and 2
float area1, area2; //area of rectangle 1, area of rectangle 2
    
//Input Data
    cout<<"Lets compare the area of two rectangles."<<endl;
    cout<<"Enter the length of the first rectangle."<<endl;
    cin>>lngth1;
    cout<<"Enter the width of the first rectangle."<<endl;
    cin>>wdth1;
    cout<<"Enter the length of the second rectangle."<<endl;
    cin>>lngth2;
    cout<<"Enter the width of the second rectangle."<<endl;
    cin>>wdth2;    
    
    
    //Process the Data
    area1=lngth1*wdth1;
    area2=lngth2*wdth2;
    
    
    //Output the processed Data
    
    if (area1==area2) {
        cout<<"The rectangles have the same area"<<endl;
    } else if (area1>area2) {    
        cout<<"The first rectangle is bigger"<<endl;
    } else if (area2>area1) {
        cout<<"The second rectangle is bigger"<<endl;
    } else {
        cout<<"A mistake happened, please try again"<<endl; 
    }
    
    //Exit Stage Right
    return 0;
}

