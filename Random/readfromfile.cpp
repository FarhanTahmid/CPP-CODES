#include<stdio.h>
#include <iostream>
#include<fstream>
#include<stdlib.h>
#include <math.h>
#include <string>
#include<bits/stdc++.h>
#define MAXLINES 1000
using namespace std;
void dataFields(string data[]){
    cout<<"first name : "<<data[0];
    cout<<"lastname : "<<data[1];
    cout<<"wh : "<<data[2];
    cout<<"cph : "<<data[3];
    cout<<"deduction : "<<data[4];
}
void setFields(string str){
    cout<<str<<endl;
    int n=str.length();
    cout<<"Length "<<n<<endl;
    string word="";
    string data[5];
    for(int i=0;i<n;i++){

        if (str[i] == ' ' or i == (n - 1))
        {
            cout<<word+str[i]<<endl;
            data[i]=word;
            dataFields(data);
            word="";
        }else{
            word+=str[i];
        }
        
    }
}
void getfields(string a[]){
    // for(int i=0;i<10;i++){
          
    // }
    setFields(a[1]);
}


void readFromFile(){
    ifstream file;
    string array[MAXLINES];
    string firstName;
    string lastName;
    float wh;
    float cph;
    float ded;
    file.open("employee.txt",ios::in);
    int lines=0;
    if(file.is_open()){
        
        while(file>>firstName>>lastName>>wh>>cph>>ded){
            cout<<"First Name "<<firstName<<endl;
            cout<<"Last Name "<<lastName<<endl;
            cout<<"Working Hour "<<wh<<endl;
            cout<<"Cost Per Hour "<<cph<<endl;
            cout<<"Deduction Value "<<ded<<endl;
            cout<<endl;
        }
    }
    file.close();







    
    //     string fulldata;
    //     for(int i=0;i<1;i++){
    //         getline(file,fulldata);
    //         cout<<fulldata;
            
    //     }    
            
    //     //     // string word;

    //     //     // stringstream iss(fulldata);
    //     //     // for(int j=0;j<5;j++){
    //     //     //     for(int k=0;k<5;k++){
    //     //     //         iss>>word;
    //     //     //         cout<<word[0]<<endl;
    //     //     //     }
    //     //     //     break;
    //     //     // }
    //     //     //while(iss>>word){
    //     //         //cout<<&word[1]<<endl;
    //     //     //}
    //     // }
        
    // }
    // // string fields;
    // // while (getline(file,fields))
    // // {
    // //     istringstream indField(fields);
    // //     string values;
    // //     //string *token=strtok(fields," ");
    // //     while(fields){
    // //         cout<<fields;
    // //         //employee.emp[i].set_employeeID(initialID);
    // //         //employee.emp[i].set_firstName(values);
    // //     }
    // //     initialID++;
    // //     i++;
    // //     employee.number++;
    // // }
    // // for(int i=0;i<employee.number;i++){
    // //     cout<<employee.emp[i].get_employeeID()<<endl;
    // //     employee.emp[i].get_fieldName();
    // // }

}

int main(){
    readFromFile();
}