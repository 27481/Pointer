#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//! Taking input i.e cin through pointer 
int main(){
    int x,y;
    int *p1=&x;
    int *p2=&y;

    cout<<"Enter first number :";
    cin>>*p1;
    cout<<"Enter second number :";
    cin>>*p2;

    cout<<x+y<<endl;

    return 0;
}