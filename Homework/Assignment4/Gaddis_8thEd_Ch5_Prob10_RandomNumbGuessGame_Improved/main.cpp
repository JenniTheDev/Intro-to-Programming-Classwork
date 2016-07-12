/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 10, 2016 5:54PM
 * Purpose: Random Number Guessing Game
 */

//system Libraries
#include <iostream>  //input/output Library
#include <ctime> //Time seed for random number generator
#include <cstdlib> //Random number generator

using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Set the random number generator seed
    
    
    //Declare Variables
    int rndm=rand()%99+1, guess; //random number, guess
    srand(static_cast<unsigned int>(time(0)));//set the time seed for random generator
        
    //Input Data
    cout<<"Let's play a game."<<endl;
     
        
    //Process the Data
   
do {cout<<"Pick a number 1-100"<<endl;
    cin>>guess;  
     if (guess<=0, guess>=101) {
        cout<<"You did not pick a number between 1-100, pick again."<<endl;
        } else if (rndm>guess) {
            cout<<"You need to guess higher"<<endl;
            } else if (rndm<guess) {
                cout<<"You need to guess lower"<<endl;
                } else if (rndm==guess) {
                cout<<"You guessed correctly!"<<endl;
                }       
}
while (guess !=rndm);    


    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

