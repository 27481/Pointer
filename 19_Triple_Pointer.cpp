#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x=5;
    int *ptr=&x; 
    int **p=&ptr;
    int ***q=&p;

    cout<<&x<<endl;
    cout<<*ptr<<endl;
    cout<<**p<<endl; //! with double pointer we can access the address of the single pointer but also
                     //! we can access the value which whose address is stored by single pointer 
    cout<<***q<<endl;
    return 0;
}