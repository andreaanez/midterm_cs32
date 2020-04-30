#include "MySorting.h"
#include "tddFuncs.h"
using namespace std;

int main() {


  // Test case #1
  string a[] {"Often", "is", "his", "gold", "complexion", "dimmed"};
  size_t a_size = 6;
  string expected_1 = "is,his,gold,often,dimmed,complexion";
  ASSERT_EQUALS(expected_1, customSort(a, a_size));

  // Test case #2
  string b[] {"Shall", "I" ,"compare", "thee", "to" ,"a" ,"summers", "day"};
  size_t b_size = 8;
  string expected_2 = "a,i,to,day,thee,shall,compare,summers";
  ASSERT_EQUALS(expected_2, customSort(b, b_size));

  // Write your own test cases below


  return 0;
}
