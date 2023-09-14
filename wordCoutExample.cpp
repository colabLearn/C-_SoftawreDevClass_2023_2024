//wordCountExample.cpp
//demonstrate enums, counts workds in phrase
#include <iostream>
using namespace std;
#include <conio.h>

enum itsaword {No, Yes};

int main(){
    itsaword isWord = No;

    char ch = 'a';   //character read from keyboard
    int wordcount = 0;  //number of words read

    cout<< "Enter a phrse:\n";

    do{
        ch = getch(); //get character
        cout<<ch;
        if(ch==' '||ch=='\r')  //if white space
        {
            if(isWord==Yes)  //and doing a word,
            {                //then it's the end of word
                wordcount++;  //count the word
                isWord=No;    //reset flag
            }
        }                    //Otherwise, it's
        else                 //normal character 
            if(isWord==No)    //if start of word,   
                isWord=Yes;   //then set flag
    } while(ch!='\r'); //quit on Enter key
    cout<< "\n----Word coutn is: "<< wordcount << "---\n";

    return 0;

}