#include "io.h"
#include <iostream>
using namespace std;

int readNumber()
{
  int number{};
  cout << "Enter a single integer: ";
  cin >> number;
  return number;
}

void writeNumber(int x)
{
  cout << "the sum of the 2 integers is: " << x <<'\n';
}