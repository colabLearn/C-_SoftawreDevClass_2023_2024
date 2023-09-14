//table.cpp
//demonstrate simple function 
#include <iostream>
using namespace std;

//void starline(); //function declaration 
//starline()
//function definition 
int addNum(int num1, int num2){

    return num1+num2;

}

int main(){
 int myNum1;
 int myNum2;   
    cout<< "Enter first number: "; cin>>myNum1;
    cout<<"\nEnter second number: "; cin>>myNum2; 

    cout<<"First number + Second number = " <<addNum(myNum1, myNum2)<<endl;
    return 0;
}

//-----------------------------------------------------------------------



