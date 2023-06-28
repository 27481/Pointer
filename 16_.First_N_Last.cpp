#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void find(int n, int* ptr1, int* ptr2){
    *ptr2=n%10; // Last digit 
    while(n>9){
        n/=10;
    }
    *ptr1=n;
    return;
}
int main(){
    //! Write a function to find out the first and last digit of a number without returning anything
    int n;
    cin>>n;

    int firstdigit, lastDigit;
    int *ptr1 = &firstdigit;
    int *ptr2 = &lastDigit;

    find(n, ptr1, ptr2);
    cout<<firstdigit<<" "<<lastDigit;

    return 0;
}