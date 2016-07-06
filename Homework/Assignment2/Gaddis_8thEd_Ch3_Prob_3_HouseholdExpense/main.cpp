/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 4th 2016  8:02pm
 * Purpose: Monthly to Yearly Expense
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip>//input output manipulation
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float mRent, mUtilities, mPhone, mCable;//monthly amounts 
    float yRent, yUtilities, yPhone, yCable;//yearly amounts
    float mTotal, yTotal;//monthly total, yearly total
    
    
    //Input Data
    cout<<"Lets see how much you spend a year on household bills!"<<endl;
    cout<<"How much is your rent monthly?"<<endl;
    cin>>mRent;                                         //monthly rent amount
    cout<<"How much is your utilities monthly?"<<endl;
    cin>>mUtilities;                                    //monthly Utilities  
    cout<<"How much is your phone bill monthly?"<<endl;
    cin>>mPhone;                                        //monthly Phone 
    cout<<" How much is your cable bill monthly?"<<endl;
    cin>>mCable;                                        //monthly cable  
    
    //Process the Data
    mTotal=mRent+mUtilities+mPhone+mCable;               //total monthly bills 
    yTotal=mTotal*12;        
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your monthly bills are $"<<mTotal<<endl;
    cout<<"Your yearly bills are $"<<yTotal<<endl;
    
    //Exit Stage Right
    return 0;
}

