/* 
 * File:   main.cpp
 * Author: Jennifer Felton
 * * Created on July 5, 8:41
 * Purpose: Geometry Calculator
 */

//system Libraries
#include <iostream>  //input/output Library
#include <iomanip> //formating library
#include <cmath> //math library
using namespace std;  //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!


int main(int argc, char** argv) {
    //Declare Variables
    float radius, //radius of circle
            lngth, //length for rectangle
            wdth, //width for rectangle
            tBase, //triangle base
            tHgh, // triangle hight
            cArea, //area of circle
            rArea, //rectangle area
            tArea, //area of triangle
            clc; //choice made
            
            
            
    //Input Data
    cout<<"Geometry Calculator- make your selection"<<endl;
    cout<<"Type 1 for area of a Circle"<<endl;
    cout<<"Type 2 for area of a rectangle"<<endl;
    cout<<"Type 3 for area of a rectangle"<<endl;
    cout<<"Type 4 to quit"<<endl;
    cin>>clc; 
    
    
    //Process the Data
    
    if (clc==1) {
        cout<<"What is the radius of the circle?"<<endl;
        cin>>radius;
            cArea=radius*radius*3.14159; //formula for area of circle A=pie(r^2)
        cout<<"The area of the circle is "<<cArea<<endl;   
            
    } else if (clc==2) {
        cout<<"What is the length of the rectangle?"<<endl;
        cin>>lngth;
        cout<<"What is the width of the rectangle?"<<endl;
        cin>>wdth;
            rArea=wdth*lngth;  //formula for area A=L*W
            cout<<"The area is "<<rArea<<endl;
                    
    } else if (clc==3) {
        cout<<"What is the base of the triangle?"<<endl;
        cin>>tBase;
        cout<<"What is the hight of the triangle?"<<endl;
        cin>>tHgh;
            tArea=(tBase*tHgh)/2;    //formula for area of triangle A = (HB)/2
        cout<<"The area of the triangle is "<<tArea<<endl;
            
    } else if (clc==4) {
        cout<<"Goodbye!"<<endl;
        
    } else {
        cout<<"That is an invalid choice, please try again"<<endl;
    }
    
    //Output the processed Data
    
    
    //Exit Stage Right
    return 0;
}

