//Andrea Anez 
//04/29/2020

#include <iostream>
#include <string.h>
#include "MySorting.h"


using namespace std;

//to lower case 
//sorts by size 
//sorts by alf 

void lower(string a[], size_t size ){
    int g = size;
     for (int i = 0; i<g; i++){
        string b = a[i];
        int j = 0;
        while (b[j]){
            char c = b[j];
            b[j] = tolower(c);
            cout<<b[j]<<endl;
            j++;
            
        }
        a[i] = b;
     }
}

string print_array(string a[],size_t size){
        string yes;
        int g = size;
        for (int i = 0; i<g; i++){
            yes += a[i];
            if (i!=(g-1))
            yes += "," ;
        }
    return yes;
}


int length(string a){
    int i = 0;
    int count =0; 
    while (a[i]){
        count ++;
        i++;
    }
    return count;
}

bool alph(string str3, string str4 ){
    
    if (str3 < str4){
        return true;
    }
    if (str3 > str4 )
        return false;

   else if (str4 == str3){
        return true;
   }
   return false;    
}

void sort_length(string b[], size_t size ){
    string temp;
    int g = size;
    for (int i = 0; i<g-1; i++){ // do minus 1 becuas we will adress in later array @j+1
        for (int j =0; j<g-i-1; j++){

            string str1 = b[j];
            string str2 = b[j+1];

            int k = length(str1);
            int l = length(str2);

            if ((k > l) ){
                temp = b[j+1];
                b[j+1]= b[j];
                b[j] = temp;
            }

            else if (k==l){
               if (!(alph(str1,str2))){
                temp = b[j+1];
                b[j+1]= b[j];
                b[j] = temp;
               }


            }
        }

    }  
}

string customSort(string a[], size_t size ){
    lower(a,size);
    sort_length(a, size );
    return print_array(a, size);
}
