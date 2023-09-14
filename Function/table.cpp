//table.cpp
//demonstate simple function 
#include <iostream>
using namespace std;

void starline();


int main(){
    starline();     //call to function 
    cout<<"Data type Range" <<endl;
    starline();     //call to function
    cout<<"char           -128 to 127"<< endl
        <<"short          -32,786 to 32,767"<< endl
        <<"int            System dependent"<< endl
        <<"long           -2,147,483,648 to 2,147,483,647"<<endl;
    starline();
    return 0;
}

void starline(){
    for (int i = 0; i < 45; i++)
    {
        /* code */
        cout<<'*';
    }
    cout<<endl;
}