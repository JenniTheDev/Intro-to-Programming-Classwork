/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 4th 2016 9:00pm
 * Purpose: Test Average
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip>//format library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float Tavg; //test average
    float grd1, grd2, grd3, grd4, grd5;//imputed grades
    
        //Input Data
    cout<<"Let's find out your average grade."<<endl;
    cout<<"Enter the first grade:"<<endl;
    cin>>grd1;                                //grade 1
    cout<<"Enter the second grade:"<<endl;
    cin>>grd2;                                //grade 2
    cout<<"Enter the third grade;"<<endl;
    cin>>grd3;                                //grade 3
    cout<<"Enter the fourth grade:"<<endl;
    cin>>grd4;                                //grade 4
    cout<<"Enter the fifth grade:"<<endl;
    cin>>grd5;                                 //grade 5
    
     
    //Process the Data
    Tavg=(grd1+grd2+grd3+grd4+grd5)/5;
    
    
    //Output the processed Data
            cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"Your average grade is "<<Tavg<<endl;
    
    //Exit Stage Right
    return 0;
}

