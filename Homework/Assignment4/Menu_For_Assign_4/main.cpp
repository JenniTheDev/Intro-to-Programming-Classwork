/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 11, 2016
 * Purpose: Menu for all Assignment 4 problems
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip> //format library
#include <ctime> //time
#include <cstdlib> //Random number generator


using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    int choice; //choice for menu
    
    //Input Data
    do {
    cout<<"Choose the Program you would like to use"<<endl;
    cout<<"Pick 1 for Distance Traveled Calculator"<<endl;
    cout<<"Pick 2 for Celsius to Fahrenheit Calculator"<<endl;
    cout<<"Pick 3 for MPH to KPH Converter"<<endl;
    cout<<"Pick 4 for Ocean Levels"<<endl;
    cout<<"Pick 5 for Calories Burned on Treadmill"<<endl;
    cout<<"Pick 6 for Member Fee Increase"<<endl;
    cout<<"Pick 7 for Improved Random Number Guess Game"<<endl;
    cout<<"Pick 8 for Random Number Guess Game"<<endl;
    cout<<"Pick 9 for 99 bottles of beer on the wall"<<endl;
    cin>>choice;

    
        //Program 1
        if (choice==1) {
            //Declare Variables
            float spd, hr, mTrv; //speed, hours, miles traveled  
            float cntml=1; //start counting miles at 1
    
            //Input Data
            cout<<"What is the speed of the vehicle in mph?"<<endl;
            cin>>spd;
            cout<<"How many hours has it traveled?"<<endl;
            cin>>hr;
    
            //Process the Data
            cout<<"Hours       Miles"<<endl;
            cout<<"-----------------"<<endl;
    
                while (cntml <=hr) {
                    mTrv=spd*cntml;
                    cout<<cntml++<<"              "<<mTrv<<endl;
                    } 
            }
    
    //Program 2
    if (choice==2){
        //Declare Variables
        float c, f; //celsius, Fahrenheit
        int srtcount=0;//start counting at
    
        //Input Data
        cout<<"Celsius       Fahrenheit"<<endl;
            while (c <=19) {
            c=srtcount++ ;      //celsius count on by ones
            f=(c*5/9)+32;    //F to C convert 
            cout<<c<<"               "<<f<<endl;        
            }
    }
    
    //Program 3
    if (choice==3) {
        //Declare Variables
        float mph, kph, cnt=35; //miles per hour, kilometers per hour, count starts at 40
    
        //Input Data
        cout<<"Speed in Kilometers per Hour to Speed in Miles per Hour"<<endl;
        cout<<"---------KPH----------MPH---------------------"<<endl;
    
        //Process the Data    
            while (kph<=119) {
            cout<<fixed<<setprecision(0); //I picked 0 because you usually don't drive in pts of a mph/kph
            kph=cnt+=5;
            mph=(kph)*0.6214;
            cout<<"          "<<kph<<"           "<<mph<<endl;        
            }
        
    }
    
    //Program 4
    if (choice==4) {
         //Declare Variables
        float oLvl, yr, cnt=1; //ocean level, year, count from 
    
        //Input Data
        cout<<"Number of millimeters the Ocean Rises"<<endl;
        cout<<"  Year          Ocean Level        "<<endl;  
    
        //Process the Data
            while (yr<25) {
            yr=cnt++;
            oLvl=yr*3.1;
            cout<<"   "<<yr<<"         "<<oLvl<<endl;
            }
    }
    
    //Program 5
    if (choice==5){
        //Declare Variables
        float cals, mRan, cnt=5; //calories, miles ran, counting
   
        //Input Data
        cout<<"Burn Calories on the Treadmill!"<<endl;
        cout<<"     Minutes    Calories "<<endl;
               
        //Process the Data
            while (mRan<=25) {
            mRan=cnt+=5;
            cals=mRan*3.9;
            cout<<"     "<<mRan<<"         "<<cals<<endl; 
            }
    }
    
    //Program 6
    
    if (choice==6){
        //Declare Variables
        float mCst, yr, pInc=1.04, mFee=2500; //membership cost, year, fee increase,  member fee $2500
        float cnt=1; //start counting
    
        //Input Data
        cout<<" Membership Fees are rising, join now!"<<endl;
        cout<<"    Year      Amount of Membership   "<<endl;
            
        //Process the Data
            while (yr<6) {
            yr=cnt++;
            mCst=mFee*pInc*yr;
            cout<<fixed<<setprecision(2)<<showpoint; 
            cout<<"    "<<yr<<"   $"<<mCst<<"    "<<endl;
            }
    }
    
    //Program 7
    if (choice==7){
        //Set the random number generator seed
        //Declare Variables
        int rndm=rand()%99+1, guess, tries=0; //random number, guess, tries counter
        srand(static_cast<unsigned int>(time(0)));//set the time seed for random generator
        
        //Input Data
        cout<<"Let's play a game."<<endl;
           
        //Process the Data
               do {cout<<"Pick a number 1-100"<<endl;
               cin>>guess;  
                    if (guess<=0, guess>=101) {
                    cout<<"You did not pick a number between 1-100, pick again."<<endl;
                        } else if (rndm>guess) {
                        tries++;
                        cout<<"You need to guess higher"<<endl;
                            } else if (rndm<guess) {
                            tries++;
                            cout<<"You need to guess lower"<<endl;
                                } else if (rndm==guess) {
                                tries++;
                                cout<<"You guessed correctly!"<<endl;
                                cout<<"The number of tries is "<<tries<<endl;
                }       
        }
        while (guess !=rndm);    
    }
    
    //Program 8
    if (choice==8){
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
    }
    
    //Program 9
    if (choice==9){
           for(int bottles=99;bottles>=1;bottles--){
        //Calculate tens and ones
        int nTens=(bottles-bottles%10)/10;//Number of 10's
        int nOnes=bottles-nTens*10;//Number of 1's
        for(int times=1;times<=3;times++){
            if(times==3){
                int temp=bottles-1;
                nTens=(temp-temp%10)/10;//Number of 10's
                nOnes=temp-nTens*10;//Number of 1's
            }
            switch(nTens){
                case 9:cout<<"Ninety ";break;
                case 8:cout<<"Eighty ";break;
                case 7:cout<<"Seventy ";break;
                case 6:cout<<"Sixty ";break;
                case 5:cout<<"Fifty ";break;
                case 4:cout<<"Forty ";break;
                case 3:cout<<"Thirty ";break;
                case 2:cout<<"Twenty ";break;
                case 1:{
                    switch(nOnes){
                        case 0:cout<<"Ten ";break;
                        case 1:cout<<"Eleven ";break;
                        case 2:cout<<"Twelve ";break;
                        case 3:cout<<"Thirteen ";break;
                        case 4:cout<<"Fourteen ";break;
                        case 5:cout<<"Fifteen ";break;
                        case 6:cout<<"Sixteen ";break;
                        case 7:cout<<"Seventeen ";break;
                        case 8:cout<<"Eighteen ";break;
                        case 9:cout<<"Nineteen ";break;
                    }
                }
            }
            if(nTens!=1){
                switch(nOnes){
                    case 0:if(nTens==0)cout<<"Zero ";break;
                    case 1:cout<<"One ";break;
                    case 2:cout<<"Two ";break;
                    case 3:cout<<"Three ";break;
                    case 4:cout<<"Four ";break;
                    case 5:cout<<"Five ";break;
                    case 6:cout<<"Six ";break;
                    case 7:cout<<"Seven ";break;
                    case 8:cout<<"Eight ";break;
                    case 9:cout<<"Nine ";break;
                }
            }
            if(times==1||times==3)cout<<" bottles of beer on the wall "<<endl;
            else if(times==2){
                cout<<" bottles of beer."<<endl;
                cout<<" You take one down and pass it around "<<endl;
            }
        }   
        cout<<endl;
    }
    }
    
  
    
    }//End of my do loop
   
    while (choice != 1,2,3,4,5,6,7,8,9);
    
  
        
        
        
        
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

