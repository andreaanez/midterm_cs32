#include "MyHashTable.h"
#include "tddFuncs.h"
#include <iostream>
#include <sstream>
using namespace std;

int main() {

  // A sample test.
  MyHashTable ht;
  ht.insertItem("Hermione Granger", 27437);
  ht.insertItem("Ron Weasley", 49872);
  ht.insertItem("Harry Potter", 39857);
  ht.insertItem("Tom Riddle", 12984);
  string expected = "0:[(Hermione Granger,27437)(Ron Weasley,49872)]\n1:[]\n2:[(Tom Riddle,12984)]\n3:[(Harry Potter,39857)]\n4:[]\n";
  ASSERT_EQUALS(expected, ht.toString());

  MyHashTable love;
  love.insertItem("Hermione Granger", 27437);
  love.insertItem("Ron Weasley", 49872);
  love.insertItem("Harry Potter", 39857);
  love.deleteItem("Ron Weasley");
  string new_expected = "0:[(Hermione Granger,27437)]\n1:[]\n2:[]\n3:[(Harry Potter,39857)]\n4:[]\n";
  ASSERT_EQUALS(new_expected, love.toString());

  

  return 0;
}
