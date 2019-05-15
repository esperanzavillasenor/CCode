//pointers1.cpp ev
#include <iostream>
using namespace std;

int main(){
  int one, two;
  int * thePointer;
  thePointer = &one;
  *thePointer = 1111;
  thePointer = &two;
  *thePointer = 2222;
  cout<<"onr is "<<one<<" "<<&one<<" \n";
  cout<<"two is "<<two<<" "<<&two<<" \n";
  cout<<"thePointer "<<thePointer<<" "<<&thePointer<<"\n";
  return 0;
}
