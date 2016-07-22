// Euler Project 5 Copyright 2016
#include<iostream>

/*
2520 is the smallest number that can be divided by each of
the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by
all of the numbers from 1 to 20?
*/

bool check(int num);

int main() {
  int n = 2;
  while (check(n) == false) {
    // The number is definitely going
    // to be even so I only checked those numbers.
    n = n+2;
  }
  std::cout <<  n << std::endl;
  return 0;
}

// Check if the number is compatible
bool check(int n) {
  bool check = true;
  for (int i = 1; i <= 20; i++) {
    if (n%i != 0) {check = false;}
  }
  return check;
}
