#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//! WAP to find out product of two numbers using pointers 
int main(){
    int n1,n2;

    cout<<"Enter the first variable:\n";
    cin>>n1;
    cout<<"Enter the second variable:\n";
    cin>>n2;

    int *p1=&n1;
    int *p2=&n2;

    cout<<(*p1)*(*p2)<<endl;
    return 0;
}