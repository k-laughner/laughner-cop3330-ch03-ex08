/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Kaylee Laughner
 */
#include "main.h"

class oddOrEven{
  // method to determine if number is even
  public: bool evenDeclaration( const int num ) {
    // if remainder is 0, return true to indicate even
    if (num %2 ==0) {
      return true;
    }
    // else return false
    else {
      return false;
    }
  }
  // method to print message based on a boolean value
  public: void print(const bool b) {
    // if boolean is true, then print even
    if (b == true) {
      printf("The integer is even.");
    }
    // if boolean is false, then print false
    else {
      printf("The integer is odd.");
    }
  }
};
int main() {
  // message to insert an int
  printf("Insert an integer: ");
  int integer;
  // get input
  scanf("%d", &integer);
  // call class 
  oddOrEven o;
  // determine even or odd
  bool evenOrOdd = o.evenDeclaration(integer);
  // print result
  o.print(evenOrOdd);
}
