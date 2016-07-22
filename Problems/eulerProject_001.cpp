// Euler Project 1 Copyright 2016
#include<iostream>

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

int problem1(int limit);

int main() {
  std::cout << problem1(1000) << std::endl;
  return 0;
}

int problem1(int limit) {
  int sum = 0;

  for (int i = 0; i < limit; i++) {
    if (i%3 == 0 || i%5 == 0) {
      sum += i;
    }
  }
  return sum;
}
