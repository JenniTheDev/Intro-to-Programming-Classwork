/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on June 24, 2016, 3:08 PM
 * Purpose: Money Calculation
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
    float quarter=25;//value of a quarter
    float dime=10;//value of a dime
    float nickel=5;//value of a nickel
    float qin;//number of quarters inputed
    float din;//number of dimes inputed
    float nin;//number of nickels inputed
    float totalq;//cent value of quarters
    float totald;//cent value of dimes
    float totaln;//cent value of nickels
    float grandtotal;//grand total of all coins in cents
    
    //Input Data
    cout<<"How many quarters do you have ?"<<endl;
    cin>>qin;                                   //input of how many quarters
    cout<<"How many dimes do you have?"<<endl;
    cin>>din;                                   //input of how many dimes         
    cout<<"How many nickels do you have?"<<endl;
    cin>>nin;                                    //input of how many nickels  
            
            
    //Process the Data
    totalq=qin*quarter;//total cent amount of quarters
    totald=din*dime;//total cent amount of dimes
    totaln=nin*nickel;//total cent amount of nickels
    grandtotal=totalq+totald+totaln;//total amount of all cents added up
    
    //Output the processed Data
    cout<<"You have a total of $."<<grandtotal<<"cents. Don't spend it all in one spot!"<<endl;
    
    //Exit Stage Right
    return 0;
}

