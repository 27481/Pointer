#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Playing with Pointers i.e Dereferencing (star operator)

int main(){ 
    int x=122;          //! here x is integer variable
    int *p=&x;          //! here p is pointer variable 

    cout<<*p<<endl;// * means p ke ander jo address rakha hai and waha ki value print karo

    *p=51; //! updating the value of the variable directly by using pointer 
    cout<<*p<<endl;
    return 0;
}