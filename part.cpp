#include <iostream>
using namespace std;

struct part{  //declar a structure

int modelnumber;  //ID numbrr of widget
int partNumber;   //ID number of widget part
float cost;      //cost of part

};

int main(){
  part part1;  //define a structure variable

  part1.modelnumber = 6244;
  part1.partNumber = 373;
  part1.cost = 217.55F;

  cout<< "Model: " << part1.modelnumber <<endl;
  cout<< "Part: "  << part1.partNumber <<endl;
  cout<< "Cost: " << part1.cost << endl;
}