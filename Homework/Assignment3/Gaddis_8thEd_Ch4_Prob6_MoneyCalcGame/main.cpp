/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 5, 2016 7:50pm
 * Purpose: Can you make a dollar game
 */

//system Libraries
#include <iostream>//input/output Library
#include <iomanip> //formating library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float ps,ns,ds,qs;//inputed number of pennies, nickels, dimes, quarters
    float pennies=.01, nickels=.05, dimes=.10, quarters=.25; //values of coins
    float total; //total guessed
    
    //Input Data
    cout<<"Change Counting Game"<<endl;
    cout<<"Guess the number of coins to make a dollar"<<endl;
    cout<<"How many pennies?"<<endl;
    cin>>ps;
    cout<<"How many nickels?"<<endl;
    cin>>ns;
    cout<<"How many dimes?"<<endl;
    cin>>ds;
    cout<<"How many quarters"<<endl;
    cin>>qs;
    
    
    //Process the Data
    total=(ps*pennies)+(ns*nickels)+(ds*dimes)+(qs*quarters);
    
    //Output the processed Data
cout<<fixed<<setprecision(2)<<showpoint;

if (total==1.00) {
    cout<<"You won! Your guess was exactly $"<<total<<endl;
    } else if (total>1.00) {
    cout<<"You lost. Your guess was over a dollar by being $"<<total<<endl;
    }   else if (total<1.00) {
    cout<<"You lost. Your guess was under a dollar by being $"<<total<<endl;    
    }
    
    //Exit Stage Right
    return 0;
}

