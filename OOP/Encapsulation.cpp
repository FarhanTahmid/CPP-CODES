#include<iostream>
using namespace std;

class Employee{
private:
        string name;
        string company;
        int age;  

        
public: //setters and getters for the constructor

    void setName(string Name){
        name=Name;
    }
    string getName(){
        return name;
    }
    void setCompany(string Company){
        company=Company;
    }
    string getCompany(){
        return company;
    }
    void setAge(int Age){
        age=Age;
    }
    int getAge(){
        return age;
    }
    
        void introductuceYourself(){
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee Company Name: "<<company<<endl;
            cout<<"Employee age: "<<age<<endl;
        }
    
    //default constructor
    // Employee(){
    
    // }
    //Parameterized Constructor
    Employee(string name,string company,int age){
        name=name;
        age=age;
        company=company;
    }

};

int main(){

Employee employee1=Employee("Farhan","Code parina",21);
employee1.setName("Farhan");
employee1.introductuceYourself();
cout<<endl;

    
}