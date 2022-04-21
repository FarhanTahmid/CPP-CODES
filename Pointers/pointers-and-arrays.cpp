
#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[5]={5,4,3,2,1};
    int *p;
    p=A;
    for(int i=0;i<sizeof(A[i]);i++){
        cout<<*(p+i)<<endl;
        cout<<(p+i)<<endl;
    }

}


