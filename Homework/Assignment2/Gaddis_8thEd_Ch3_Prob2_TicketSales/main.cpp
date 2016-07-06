/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 4, 2016 10:00am
 * Purpose: Ticket Sales
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip>//formating library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
        float total, seatA, seatB, seatC;//how many of each purchased
    
    //Input Data
    cout<<" Enter the number of Class A Tickets "<<endl;
    cin>>seatA;//seats purchased for Class A
    cout<<" Enter the number of Class B Tickets "<<endl;
    cin>>seatB;//Seats purchased for class B
    cout<<" Enter the number of Class C Tickets "<<endl;
    cin>>seatC;//Seats purchased for class C
    
    
    //Process the Data
    total=seatA*15.00+seatB*12.00+seatC*9.00;
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;//all numbers to 2 decimals
    cout<<" With "<<seatA<<" A Tickets at $15.00"<<endl;
    cout<<"  and "<<seatB<<" B Tickets at $12.00"<<endl;
    cout<<"  and "<<seatC<<" C Tickets at $9.00"<<endl;
    cout<<" There was a total of $"<<total<<" made from ticket sales"<<endl;
    
    //Exit Stage Right
    return 0;
}

