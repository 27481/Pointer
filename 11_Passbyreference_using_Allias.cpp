#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int &x, int &y){  // pass by reference 
    int temp =x;
    x=y;
    y=temp;
}

int main(){
    int a,b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<endl;    
    return 0;
}