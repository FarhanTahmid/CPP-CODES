#include<bits/stdc++.h>
using namespace std;

void increment(int *p){
    *p=*p+1;
}

int main(){
    int a=8;
    increment(&a);
    cout<<a<<endl; //passing the address of a to the pointer in the function
    return 0;
}