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

  //You can initialize the structure variable when the structure is defined
  part part2 = {5312, 551, 310.87};

   cout<<"=============Part1 Variables==========================" <<endl;
  cout<< "Model: " << part1.modelnumber <<endl;
  cout<< "Part: "  << part1.partNumber <<endl;
  cout<< "Cost: " << part1.cost << endl;
  cout<<"=============Part2 Variables==========================" <<endl;
  cout<< "Model: " << part2.modelnumber <<endl;
  cout<< "Part: "  << part2.partNumber <<endl;
  cout<< "Cost: " << part2.cost << endl;
}