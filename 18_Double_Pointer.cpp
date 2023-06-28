#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    //! Double Pointer -> Used to store address of a single pointer
    //! Triple Pointer -> Used to store address of a Double pointer

    //* we can store the address of the single pointer into another single pointer it will work but show some kind of warning

    int x=5;
    int *ptr=&x;
    int**p=&ptr;

    cout<<&x<<endl;      // address of the x 
    cout<<ptr<<endl;     // ptr is storing the address of the x

    cout<<p<<endl;      //  p is a doubt pointer i.e **ptr which is storing the address of the *ptr and *ptr is storing the address of the x;
    cout<<**p<<endl;
    

    return 0;
}