#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=4;
    int* ptr=&x;
    cout<<*ptr<<endl;
    *ptr--;
    cout<<*ptr<<endl;
    return 0;
}