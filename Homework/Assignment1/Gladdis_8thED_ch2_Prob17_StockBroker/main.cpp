/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on June 22, 2016, 9:00 PM
 * Purpose: Stock Price Paid
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip> //formatting library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    unsigned short nShares=750;//number of shares
    unsigned char stkPrce=35; //stock price in dollars
    float commish=2e-2f;//2percent commission
    float valStk, cPaid, totPaid;//Value of storck, commission paid, total paid
    
    //Input Data
   
      
    
    //Process the Data
    valStk=nShares*stkPrce;
    cPaid=valStk*commish;
    totPaid=valStk+cPaid;
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Price paid for the stock = $"<<setw(8)<<valStk<<endl;
    cout<<"Commission Paid          = $"<<setw(8)<<cPaid<<endl;
    cout<<"Cost of the transaction  = $"<<setw(8)<<totPaid<<endl;
    
    //Exit Stage Right
    return 0;
}

