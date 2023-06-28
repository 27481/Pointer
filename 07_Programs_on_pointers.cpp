#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // WAP to calculate sum of two numbers using pointers 
    int x,y;
    cin>>x>>y;

    int *p1=&x;
    int *p2=&y;

    cout<<*p1+*p2;
    
    return 0;
}