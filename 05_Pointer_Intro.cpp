#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// syntax = data_type * pointer_name;

int main(){
    int u=5;
    int* p=&u; //! here we are storing the address of x into p
               //! p also has its own address 

    float x=4.9;
    float* f=&x; 
    cout<<&u<<endl;
    cout<<p<<endl;
    cout<<&x<<" "<<f<<endl;
    return 0;
}