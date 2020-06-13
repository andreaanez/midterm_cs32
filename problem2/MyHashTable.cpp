//Andrea Anez 
//04/29/2020

#include <sstream>
#include "MyHashTable.h"

using namespace std;

// Default constructor. Do not modiify.
MyHashTable::MyHashTable() {
  for (size_t i = 0; i < CAPACITY; i++) {
    table[i] = new vector<pair<string, int>>;
  }
}

// Simple hash function. Do not modify.
size_t MyHashTable::hash(string name) const {
	size_t accumulator = 0;
	for (size_t i = 0; i < name.size(); i++) {
		accumulator += name.at(i);
	}
	return accumulator % CAPACITY;
}

void MyHashTable::insertItem(string name, int perm) {
	size_t index = hash(name);
	table[index] ->push_back(pair<string, int>(name, perm));
	
	}


//iterator is an abstraction for a position in a collection of objects 
//pointer to elements position although not a pointer 
void MyHashTable::deleteItem(string name) {

	int index = hash(name);	
    if (table[index]->size()==0){
            return;
    }
	vector<pair<string, int>>::const_iterator it; 
	for (it = table[index]->begin(); it != table[index]->end(); it++){
		if ( it->first == name) {
            table[index]->erase(it--);
       	 	}
		
		}

	}
	
	 
//"0:[(Hermione Granger,27437)(Ron Weasley,49872)]\n1:[]\n2:[(Tom Riddle,12984)]\n3:[(Harry Potter,39857)]\n4:[]\n"
string MyHashTable::toString() const {
	string result;
	vector<pair<string, int>>::const_iterator it;
	for (size_t i = 0; i < CAPACITY; i++){
			result += to_string(i) + ":";
		if (table[i]->size() == 0){
			result += "[]";
			result += "\n";
		}
		else if (table[i]->size()!= 0){
			result += "[" ;
		for (it = table[i]->begin(); it != table[i]->end(); it++){
			if (it != table[i]->end()){
				result += "(" + it->first +"," ; // printing name
				result += to_string(it->second) + ")"; //printing perm
				}

			}
			result += "]";
			result += "\n";
		}
	
		}
	
	return result;
	}
	 

MyHashTable::MyHashTable(const MyHashTable &orig) {
//cleaning out this table 
vector<pair<string, int>>::const_iterator it;
for (size_t i = 0; i < CAPACITY; i++){
	for (it = table[i]->begin(); it != table[i]->end(); it++){
		if (table[i]->size()==0){
			return;
		}
			table[i]->erase(it--);
			}
		}


	for (size_t i = 0; i < CAPACITY; i++){
		if (orig.table[i]->size()!=0)
		insertItem(orig.table[i]->front().first, orig.table[i]->front().second);
	}
}

MyHashTable::~MyHashTable() {
vector<pair<string, int>> *temp;
for (size_t i = 0; i < CAPACITY; i++){
	if (NULL != table[i]){
		temp = table[i];
		table[i] = NULL;	 
		delete temp;
		delete table[i];
		}
		// i did not delete the entire table array becuase only the pointers where allocated on the heap using new
	
	}	
}