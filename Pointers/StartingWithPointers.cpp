#include<iostream>
using namespace std;
int main(){

    int a=5;
    int *p;
    p=&a;
    printf("Getting address of A with the pointer variable P= %d\n",p);
    printf("The address of A by callin &a= %d\n",&a);
    printf("The address of the pointer p by calling &p= %d\n",&p);
    printf("The value of the pointer using *p= %d\n",*p);
    
    //changig the value with pointer
    *p=10;
    printf("Changed value of A with the help of pointer is %d\n",a);

    printf("\n");

    printf("Now changing the variable that the pointer is pointing. The pointer is now pointing to variable B\n");
    
    printf("\n");

    int b=2500;
    p=&b;

    printf("Getting address of B with the pointer variable P= %d\n",p);
    printf("The address of B by callin &a= %d\n",&b);
    printf("The address of the pointer p by calling &p= %d\n",&p);
    printf("The value of the pointer using *p= %d\n",*p);

    printf("\n");
    printf("Analysis with different kind of data types: \n");
    int a1 =1025;
    int *p1=&a1;
    printf("size of integer is %d\n",sizeof(int));
    printf("Address = %d, Value = %d\n",p1,*p1);

    printf("Type casting an integer pointer to character pointer!\n");
    char *characterPointer=(char*)p1;  //typecasting with character pointer
    printf("size of character is %d\n",sizeof(char));
    printf("Address = %d, Value = %d\n",characterPointer,*characterPointer);
    printf("Increment of the address of the character pointer= %d and also the increment of the value is %d\n",characterPointer+1,*(characterPointer+1));
    //the value of the char increased by 3 
    printf("\n");
    printf("Creating pointer to pointers\n");
    int var=5;
    int *pointer1=&var;
    int **pointer2=&pointer1;
    int ***pointer3=&pointer2;
    printf("The value of pointer1 that points to the var is : %d and the address is: %d\n",*pointer1,pointer1);
    printf("The value of pointer2 that points to the pointer1 is : %d and the address is: %d\n",**pointer2,pointer2);
    printf("The value of pointer2 that points to the pointer2 is : %d and the address is: %d\n",***pointer3,pointer3);

    printf("\n");

    printf("The value of pointer1 that points to the var is : %d and the address is: %d\n",*pointer1,pointer1);
    printf("The value of pointer2 that points to the pointer1 is : %d and the address is: %d\n",*(*pointer2),*(pointer2));
    printf("The value of pointer2 that points to the pointer2 is : %d and the address is: %d\n",*(*(*pointer3)),*(*pointer3));
    



    return 0;
}