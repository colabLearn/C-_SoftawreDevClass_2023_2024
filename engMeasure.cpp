//engMeasure.cpp
//demonstrates structure using English measurements
#include <iostream>
using namespace std;


// -------------------------------------------------------
struct Distance{
    int feet;
    float inches;
};
//------------------------------------------------------

struct Room
{
    Distance length;
    Distance width;
};
//---------------------------------------------------
int main(){
    Room dining;   //define a room

    dining.length.feet = 13;
    dining.length.inches=6.5;
    dining.length.feet = 10;
    dining.width.inches = 0.0;
        //convert lenght & width
    
    float l = dining.length.feet+dining.length.inches/12;
    float w = dining.width.feet+dining.width.inches/12;
       //find area and display it
    cout<< "Dining room area is: " << l*w
    <<" Square feet \n";
    return 0;


    // Distance d1, d3; //define two Distances 
    // Distance d2 = {11, 6.25};

    //    //get length d1 fron user
    // cout<< "\nEnter feet: "; cin>> d1.feet;
    // cout<< "\nEnter inches: "; cin>> d1.inches;

    // //add length d1 and d2 to get d3
    // d3.inches=d1.inches+d2.inches;   //add the inches
    // d3.feet= 0;   //for possible carry
    // if(d3.inches>=12.0)    //if the total inches exceeds 12.0
    // {
    //     d3.inches-=12.0;   //then decrease inches by 12.0 (making 1 foot whole)
    //                       // and
    //     d3.feet++;        //increase feet by 1
    // }
    // d3.feet+=d1.feet+d2.feet;  //add the feet

    // cout<< d1.feet <<"\'-" <<d1.inches<<"\"+ ";
    // cout<<d2.feet <<"\'-" <<d2.inches<<"\" = ";
    // cout<<d3.feet<<"\'-" <<d3.inches<< "\"\n ";
}