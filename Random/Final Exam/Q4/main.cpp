#include <iostream>
#include<stdio.h>
using namespace std;

class bankAccount{
    private:
        int accountNumber;
        char accountType;
        double balance;
    public:
        bankAccount(int,char,double);
        int getAccountNumber();
        char getAccountType();
        double getBalance();
        void setAccountType(char);
        void setBalance(double);
        void setAccountNumber(int);
        void credit(double);
        void debit(double);
        void print();
};

bankAccount::bankAccount(int accountNumber,char accountType,double balance){
    setAccountNumber(accountNumber);
    setAccountType(accountType);
    setBalance(balance);
}
void::bankAccount::setAccountNumber(int accountNumber){
    this->accountNumber=accountNumber;
}
void::bankAccount::setAccountType(char accountType){
    this->accountType=accountType;
}
void::bankAccount::setBalance(double balance){
    this->balance=balance;
}
int::bankAccount::getAccountNumber(){
    return this->accountNumber;
}
char::bankAccount::getAccountType(){
    return this->accountType;
}
double::bankAccount::getBalance(){
    return this->balance;
}
void::bankAccount::print(){
    cout<<"A/C no: "<< getAccountNumber()<< " Account Type=" <<getAccountType()<< " Balance= "<<getBalance();
}
void::bankAccount::credit(double amount){
    this->balance=this->balance+amount;
    cout<<amount<<" was credited to the account";
    cout<<"Current balance: "<<getBalance();
}
void::bankAccount::debit(double amount){
    if(this->balance<amount){
        cout<<"Amount withdrawn exceeds the current balance!";
    }
    else{
        this->balance=this->balance-amount;
        cout<<amount<<" was debited to the account";
        cout<<"Current balance: "<<getBalance();
    }
}


int main(){
    int menuChoice;
    char again;

    int acNo;
    cout << "Enter A/C no: ";
    cin >> acNo;
    char accType;
    cout << "Enter Account Type:";
    cin >> accType;
    cin.clear();
    cin.ignore(1000, '\n');
    double balance;
    cout << "Enter Balance:";
    cin >> balance;

    bankAccount account = bankAccount(acNo, accType, balance);
    do
    {
        
        cout<<endl;
        cout << "1. Print()" << endl;
        cout << "2. Credit()" << endl;
        cout << "3. Debit()" << endl;

        cout<< endl;

        while (!(cin >> menuChoice)){
            cout << "Please Enter a number between 1-3! Try again: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        switch (menuChoice)
        {
        case 1:
            account.print();
            break;
        case 2:
            cout<<endl;
            cout<<"Enter amount to credit:";
            double cred;
            cin>>cred;
            account.credit(cred);
            break;
        case 3:
            cout<<endl;
            cout<<"Enter amount to debit:";
            double deb;
            cin>>deb;
            account.debit(deb);
            break;
            default:
            cout << "\nInvalid input! Try again: ";
        }
        cout << "\nAgain (y/n)";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    return 0;
}
