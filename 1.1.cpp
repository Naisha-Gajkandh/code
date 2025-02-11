#include<iostream>

using namespace std;

class bankacc{
private:
    string name;
    int number;
    double balance;
public:

    bankacc(string accname,int accnumber,double accbalance){
      name=accname;
     number=accnumber;
      balance=accbalance;
    }
    void deposite(int amount){


    if(amount>0){
        balance += amount;
        cout<<"your account balance :"<< balance<< endl;
    }
    else{
        cout<< "please enter some valid amount"<<endl;

    }
    }
    void withdrawal(int amount){

    if(amount< balance && amount >0 ){
        balance -= amount;
        cout<<"your account balance :"<< balance<< endl;
        }
        else{
            cout<< "please enter some valid amount"<<endl;
            }
    }

    void display(){

    cout<<"your account balance :"<< balance<<endl;
    cout<<"your account holder name :"<< name<<endl;
    cout<<"your account number :"<< number<<endl;
     }
   };

int main(){
    int choice;
    int am;
     string accName;
     int accNumber;
    double accBalance;


    cout << "Enter account holder name: ";
    cin>>accName;
    cout << "Enter account number: ";
    cin >> accNumber;
    cout << "Enter initial balance: ";
    cin >> accBalance;

     bankacc myAccount(accName,accNumber, accBalance);

    cout<<"enter your choice:"<<endl<<"1.Deposite"<<endl<<"2.withdrawal"<<endl<<"3.account detail"<<endl;
    cin>> choice;

    switch(choice){
case 1:
    cout<<"enter your amount:"<<endl;
    cin>>am;
   myAccount.deposite(am);
    break;
case 2:
    cout<<"enter your amount:"<<endl;
    cin>>am;
    myAccount.withdrawal(am);
    break;
case 3:
    myAccount.display();
    break;
default:
    cout<<"please enter some valid choice"<<endl;

    }
return 0;


}
