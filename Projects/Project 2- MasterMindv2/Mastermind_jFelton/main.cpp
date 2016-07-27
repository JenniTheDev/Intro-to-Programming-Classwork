/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 22, 2016 11:10 PM 
 * Purpose: Mastermind Game
 */

//system Libraries
#include <iostream>  //input/output Library
#include <ctime>//time for random number seed
#include <cstdlib> //random number seed
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void welcome ();
int tries (int);
char colors (char, char, char, char);

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    //int rndm1,rndm2,rndm3,rndm4;//random numbers to turn to colors
    int nGuess=0, nTries, play;//guesses made, tries needed, play y/n
    char g1, g2, g3, g4; //user choices of colors
    char m1,m2,m3,m4;//turn numbers into colors master colors
  
    
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Instructions and into
    
    welcome();
    
    tries (nTries); //function for number of tries- it isn't returning the value so it goes on guessing forever
    
    colors (m1,m2,m3,m4); //function for color convert from numbers to letters isn't returning the colors
       
     
    //THis is how the game is played. it can be a function
   
    do{
        cout<<"Pick 4 colors"<<endl; 
        cout<<"R,B,G,Y,O, or P"<<endl;
        cin>>g1>>g2>>g3>>g4;
     
        if (g1==m1&&g2==m2&&g3==m3&&g4==m4){
            cout<<"You won!"<<endl;break;
            } if (g1==m1){
                cout<<"O";
            } else if (g1!=m1){
                cout<<"X";
            } if (g2==m2){
                cout<<"O";
            } else if (g2!=m2){
                cout<<"X";
            }if (g3==m3){
                cout<<"O";
            } else if (g3!=m3){
                cout<<"X";
            }if (g4==m4){
                cout<<"O";
            } else if (g4!=m4){
                cout<<"X";
            }
      
        cout<<endl;
        nGuess++;
      
    }while (nGuess<nTries); 
    
    //write a for loop for black/white pegs # of black, # of white, ++ every time 
    
    
    //function here to record guesses and write them to an array? 
    
    
    
    //exiting the game can be a function
    
    
    cout<<"Game Over"<<endl;
    cout<<"You tried "<<nGuess<<" times"<<endl;
    cout<<"The code was "<<m1<<"-"<<m2<<"-"<<m3<<"-"<<m4<<endl;
    cout<<"Thanks for Playing Mastermind!"<<endl;
      
         
      //I left these here to show how I tested as I went along
      //cout<<g1<<"-"<<g2<<"-"<<g3<<"-"<<g4<<endl; //this is for testing delete when done
      //cout<<m1<<"--"<<m2<<"--"<<m3<<"--"<<m4<<endl;//this is for testing delete when done
      //cout<<nGuess<<"guesses should go up"<<endl; 
      
    
    //Exit Stage Right
    return 0;
}


void welcome (){
    int play;
    
    do {
        cout<<"Welcome to Mastermind!"<<endl;
        cout<<"To learn how to play, press 1."<<endl;
        cout<<"To play, press 2"<<endl;
        cin>>play;
    
        switch(play){
            case 1: 
                cout<<"The objective of the game is to guess the 4 colors,"<<endl<<
                "in the correct order, that the Codemaker has picked. The Codemaker"<<endl<<
                "will let you know if you are right with a 'O' or wrong with a 'X'."<<endl<<
                "Good Luck! and Have fun!"<<endl;
                cout<<endl; 
                break;
            case 2:   cout<<"Let's play!"<<endl;
                      break;  
            default: cout<<"Not a valid answer, please choose 1 for directions or 2 to play"<<endl;break; 
            } 
    } while (play !=2);     //If they type in a letter instead of a number, it makes an endless loop. How can I fix this? 
}





int tries (int nTries){
    
    do {          
        cout<<"How many tries do you need? Enter a number between 8 and 12"<<endl;
        cin>>nTries;    
        if (nTries<8||nTries>12) {
            cout<<"Try again with a number between 8 and 12"<<endl;
        } if (nTries>=8&&nTries<=12) {
            cout<<"You have chosen "<<nTries<<endl;
            cout<<"Good Luck!"<<endl;
        }
    } while (nTries<=7&&nTries<=12);  
    return nTries;
    //returns back to number of tries
    
}
    

char colors (char m1, char m2, char m3, char m4){
    int rndm1, rndm2, rndm3, rndm4;
    
    rndm1=rand()%6+1; //randomly generate numbers 
    rndm2=rand()%6+1; //then equal each number to a letter for a color
    rndm3=rand()%6+1;
    rndm4=rand()%6+1;
      
    
    if (rndm1==1){    //turns 1st number to color
        m1='R';               //red
    } else if (rndm1==2){
        m1='B';                //blue
    } else if (rndm1==3){
        m1='G';                    //green
    } else if (rndm1==4){
        m1='Y';                     //yellow
    } else if (rndm1==5){
        m1='O';                    //orange
    }else if (rndm1==6){
        m1='P';                   //purple
    } 
    
    
    if (rndm2==1){     //turns 2nd number to color
        m2='R';
    } else if (rndm2==2){
        m2='B';
    } else if (rndm2==3){
        m2='G';
    } else if (rndm2==4){
        m2='Y';        
    } else if (rndm2==5){
        m2='O';          
    }else if (rndm2==6){
        m2='P';
    } 
    
    
    if (rndm3==1){     //turns 3rd number to color
        m3='R';
    } else if (rndm3==2){
        m3='B';
    } else if (rndm3==3){
        m3='G';
    } else if (rndm3==4){
        m3='Y';        
    } else if (rndm3==5){
        m3='O';          
    }else if (rndm3==6){
        m3='P';
    } 
    
    
    if (rndm4==1){    //turns 4th number to color
        m4='R';
    } else if (rndm4==2){
        m4='B';
    } else if (rndm4==3){
        m4='G';
    } else if (rndm4==4){
        m4='Y';        
    } else if (rndm4==5){
        m4='O';          
    }else if (rndm4==6){
        m4='P';
    } 
    return m1,m2,m3,m4;
}
