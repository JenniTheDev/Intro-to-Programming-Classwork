/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on June 24, 2016, 4:38 PM
 * Purpose: Stock Loss
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip> //Formatting Library

using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float shares=600; //number of shares
    float pricebuy=21.77; //price per share when purchased
    float pricesell=16.44;//price per share when sold
    float loss; //amount lost
    float purchase; //total cost of all shares purchased
    float sellamount;//total cost of all shares sold
    
    
    //Input Data
   
            
            
    //Process the Data
    purchase=shares*pricebuy;
    sellamount=shares*pricesell;
    loss=purchase-sellamount;
    
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Cost of purchased shares  $"<<purchase<<endl;
    cout<<"Cost of shares when sold  $ "<<sellamount<<endl;
    cout<<"Amount of money lost      $ "<<loss<<endl;
    
    //Exit Stage Right
    return 0;
}

