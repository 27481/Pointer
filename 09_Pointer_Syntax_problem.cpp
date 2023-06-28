// Pointer Syntax Problem 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    int y;

    // int x,y -> short hand propert 

    x=12, y=10;
    int *p1 = &x;
    int *p2 = &y;

    // int * p1=&x, p2=&y;
    //! Pointer can be declared in one line too like int x,y but syntax is slightly different 

    int p=1, q=2;
    int *t1=&p, o2=q;
    cout<<*p1<<" "<<*p2<<endl;

    return 0;
}