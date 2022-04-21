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

        //default constructor
        Employee(){

        }
        //Parameterized Constructor
        Employee(string name,string company,int age){
            name=name;
            company=company;
            age =age;
        }  
};

int main(){

Employee employee1=Employee("Anan","Hamid er shathe date",20);
employee1.introductuceYourself();
cout<<endl;

Employee employee3;
employee3.name="Farhan";
employee3.company="Code Pari Na";
employee3.age=21;
employee3.introductuceYourself();
cout<<endl;

Employee employee2;
employee2.name="Fiza";
employee2.company="BCS";
employee2.age=20;
employee2.introductuceYourself();
    
}