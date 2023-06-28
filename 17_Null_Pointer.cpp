#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){

    // int * ptr=&x; // reserved address 
    //! when we want to store an address in a *ptr pointer variable which we have not created yet
    int* ptr1=NULL;
    int* ptr2=0; 
    int* ptr3='\0'; 
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3;

    /* 
    In C++, a NULL pointer does not store the address of a variable that doesn't exist. Instead, a NULL pointer is a special value that represents a pointer that does not point to any valid object or memory location
    */
   //! Use to represent the end of the linked list 
   
   return 0;
}