// Euler Project 1 Copyright 2016
#include<iostream>
#include<cmath>

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

void problem3(long long a);

int main() {
  problem3(600851475143);
  return 0;
}

void problem3(long long a) {
  // if the number is divisible by 2 then number divided by 2 equals the number
  // until it is not divisible by 2
  while (a%2 == 0) {
    std::cout << 2;
    a = a/2;
  }

  // the number has to be an odd number, so I started at 3 and iterated by 2
  // so that the i value is never an even number
  for (int i = 3; i <= sqrt(a); i = i+2) {
    // While the is divisible by a, print it and divide it by a
    while (a%i == 0) {
      std::cout << i << std::endl;
      a /= i;
    }
  }

  // If the number is a prime umber that is greater than 2 then print it
  if (a > 2) {std::cout << a << std::endl;}
}
