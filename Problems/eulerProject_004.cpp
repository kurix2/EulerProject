// Euler Project 1 Copyright 2016
#include<iostream>
#include<cmath>

/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

bool checkPalindrome(int num);

int main() {
  int largest = 0;
  for (int i = 100; i <= 999; i++) {
    for (int j = 100; j <= 999; j++) {
      if (checkPalindrome(i*j)) {
        if ((i*j) > largest) {
          largest = (i*j);
        }
      }
    }
  }
  std::cout << largest << std::endl;
  return 0;
}

bool checkPalindrome(int num) {
  int n, digit, rev = 0;
  n = num;
  do {
    digit = num%10;
    rev = (rev*10) + digit;
    num = num/10;
  } while (num != 0);
  if (n == rev) {return true;
  } else {return false;}
}
