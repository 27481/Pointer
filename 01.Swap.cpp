// swap 2 numbers 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    // int temp=a;
    // a=b;
    // b=temp;
    a=a+b;
    b=a-b;
    a=a-b;

}


int main(){
    int a,b;
    cin>>a>>b;
    
    swap(a,b);
    cout<<a<<" "<<b;
    return 0;
}