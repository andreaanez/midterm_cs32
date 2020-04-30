#include "MyStructs.h"
#include "structFuncs.h"
#include "tddFuncs.h"
#include <iostream>
#include <sstream>
using namespace std;

int main() {

  // Sample
  CreditCard1 a;
  unsigned long sizeCreditCard1 = 32;
  unsigned long padding = 0;
  ASSERT_EQUALS(sizeof(a), sizeCreditCard1);
  ASSERT_EQUALS(getPadding(a), padding);

  CreditCard2 b;
  unsigned long sizeCreditCard2 = 40;
  ASSERT_EQUALS(sizeof(b), sizeCreditCard2);

  CreditCard3 c;
  unsigned long sizeCreditCard3 = 48;
  ASSERT_EQUALS(sizeof(c), sizeCreditCard3);


  return 0;
}
