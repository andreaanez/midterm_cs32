#ifndef MYSTRUCTS_H
#define MYSTRUCTS_H

struct CreditCard1 {
  unsigned long long int cardNumber; //32 bytes 
  unsigned long long int linkedCheckingAccountNumber;
  unsigned int expirationDate; 
  char firstNameInitial;
  char lastNameInitial;
  char bankNameInitial;
  bool isActive;
  int cvv;
};

struct CreditCard2 { //40 bytes
  unsigned long long int cardNumber;
  char firstNameInitial; 
  unsigned long long int linkedCheckingAccountNumber;
  unsigned int expirationDate; 
  char lastNameInitial;
  char bankNameInitial;
  bool isActive;
  int cvv;

};

struct CreditCard3 { //48
  char firstNameInitial;
  unsigned long long int cardNumber; 
  char lastNameInitial;
  unsigned long long int linkedCheckingAccountNumber;
  unsigned int expirationDate; 
  char bankNameInitial;
  bool isActive;
  int cvv;

};

#endif
