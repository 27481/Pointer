#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // Pointer Arithmetic i.e incrementing and decrementing the value of pointer by 1 

    int x=7;
    int *p=&x;
    p=p+1;
    cout<<p<<endl; // 0x7ffc86e5b2d0  
    p=p+1;
    cout<<p<<endl; // 0x7ffc86e5b2d4
    bool flag =true;
    bool *ptr=&flag;
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    return 0;
}