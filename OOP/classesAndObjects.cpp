#include<iostream>
using namespace std;

class Employee{
public:
        string name;
        string company;
        int age;  
        void introductuceYourself(){
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee Company Name: "<<company<<endl;
            cout<<"Employee age: "<<age<<endl;
        }
};

int main(){

Employee employee1;
employee1.name="Farhan";
employee1.company="Code Pari Na";
employee1.age=21;
employee1.introductuceYourself();
cout<<endl;

Employee employee2;
employee2.name="Fiza";
employee2.company="BCS";
employee2.age=20;
employee2.introductuceYourself();
    
}