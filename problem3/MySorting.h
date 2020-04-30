#ifndef MYSORTING_H
#define MYSORTING_H

#include <iostream>
#include <sstream>
#include <string>

//functions 
std::string print_array(std::string a[],size_t size);

int length(std::string a);

void sort_length(std::string b[], size_t size);

bool alph(std::string str3, std::string str4); 

void lower(std::string a[], size_t size);

std::string customSort(std::string a[], size_t size );

#endif