/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on June 4, 2016 8:31pm
 * Purpose: Movie Profits
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip> //math formating
#include <string> //sting of characters
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float tAdult,//adult ticket
            tChild,//child ticket
            gProf,//Gross Movie Profit
            aPaid,//Amount paid to distributer
            net;//Net Profit
    char mName[30];//name of movie
    
    
    //Input Data
    cout<<" Box Office Profit Calculator"<<endl;
    cout<<" What is the name of the movie?"<<endl;
    cin.getline(mName,30);
    cout<<" How many Adult Tickets sold?"<<endl;
    cin>>tAdult;
    cout<<" How many Child Tickets sold?"<<endl;
    cin>>tChild;
    
    
    //Process the Data
    gProf=tAdult*6+tChild*3; //Adult ticket $6 Child ticket $3
    aPaid=.80*gProf;//amount paid = 80% of gross profit
    net=gProf-aPaid;//net = gross profit - amount paid
        
    
    //Output the processed Data
    
    cout<<"Movie Name:                   "<<mName<<endl;
    cout<<"Adult Tickets Sold:           "<<tAdult<<endl;
    cout<<"Child Tickets Sold:           "<<tChild<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Gross Box Office:             $"<<gProf<<endl;
    cout<<"Amount Paid to Distributer:  -$"<<aPaid<<endl;
    cout<<"Net Box Office Profit:        $"<<net<<endl;
    
    //Exit Stage Right
    return 0;
}

