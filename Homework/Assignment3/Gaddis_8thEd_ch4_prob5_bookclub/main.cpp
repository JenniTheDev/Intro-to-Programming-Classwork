/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 5th, 2016 11:00am
 * Purpose: Book Club
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
    float bkpur, pts;//books purchased, points earned 
    
    
    //Input Data
    cout<<"To determine your book club points"<<endl;
    cout<<"How many books did you purchase this month?"<<endl;
    cin>>bkpur;        
    
    
    
    //Process the Data
    if (bkpur==0) {
        cout<<"You have 0 points"<<endl;
    } else if (bkpur==1)  {
        cout<<"You have 5 points"<<endl;
    } else if (bkpur==2) {
        cout<<"You have 15 points"<<endl;
    } else if (bkpur==3) {
        cout<<"You have 30 points"<<endl;
    } else if (4<=bkpur) {
        cout<<"You have 60 points"<<endl;
    }  
    
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

