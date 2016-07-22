// Copyright 2016 Chris Lamb
#include <iostream>
/*
By considering the terms in the Fibonacci sequence whose values
do not exceed four million, find the sum of the even-valued terms.
*/

int fibionacciEven(int x, int y);

int main() {
  std::cout << fibionacciEven(0, 1) << std::endl;
  return 0;
}

int fibionacciEven(int first, int second) {
  int next;
  int sum = 0;

  do {
    next = first + second;
    first = second;
    second = next;
    if (next % 2 == 0) {sum += second;}
  }while(second < 4000000);

  return sum;
}
