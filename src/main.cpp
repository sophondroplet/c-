#include "add.hpp"
#include "math.hpp"
#include <iostream>
#include <string> 
using namespace std;

int main() {
  math MathObj("I am a math object!");

  int x = add(4,5);
  
  cout << MathObj.version << "\n";
  cout << x;
  cout << "\n";
}