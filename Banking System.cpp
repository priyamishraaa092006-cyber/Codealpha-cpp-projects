#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accNo;
    double balance;
public:
    void createAccount() {
        cout<<"Enter Account Holder Name: ";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter Account Number: ";
        cin>>accNo;
        cout<<"Enter Initial Balance: ";
        cin>>balance;
    }
    void deposit() {
        double amt;
        cout<<"Enter Deposit Amount: ";
        cin>>amt;
        balance+=amt;
    }
    void withdraw() {
        double amt;
        cout<<"Enter Withdraw Amount: ";
        cin>>amt;
        if(amt<=balance) balance-=amt;
        else cout<<"Insufficient Balance!\n";
    }
    void display() {
        cout<<"\nName: "<<name<<"\nAccount No: "<<accNo<<"\nBalance: "<<balance<<endl;
    }
};

int main(){
    BankAccount acc;
    int ch;
    do{
        cout<<"\n=== Banking System ===\n";
        cout<<"1.Create Account\n2.Deposit\n3.Withdraw\n4.Display\n5.Exit\nChoice: ";
        cin>>ch;
        switch(ch){
            case 1: acc.createAccount(); break;
            case 2: acc.deposit(); break;
            case 3: acc.withdraw(); break;
            case 4: acc.display(); break;
            case 5: cout<<"Thank You!\n"; break;
            default: cout<<"Invalid Choice\n";
        }
    }while(ch!=5);
    return 0;
}
