#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int x=4;
    int *ptr=&x;
    cout<<*ptr<<endl;  //! gives value of x 
    ptr=ptr+1;
    cout<<*ptr<<endl;  //! 
    return 0;
}