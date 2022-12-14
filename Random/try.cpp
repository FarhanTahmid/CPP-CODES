#include<iostream>
using namespace std;
int main(){
    float weekHours;
    float costPerHour;
    float deduction;
    double annualSalary=0.0;
    annualSalary=((double(weekHours)*double(costPerHour))*52)-double(deduction);
    cin>>weekHours>>costPerHour>>deduction;
    cout<<weekHours<<costPerHour<<deduction;
    cout<<annualSalary;
}