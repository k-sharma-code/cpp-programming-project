#include<iostream>
using namespace  std;
class ATM{
private:
    int pin;
    double balance;
public:
    ATM(int pin, double balance){
        this->pin=pin;
        this->balance=balance;
    }
    bool verifypin(int enterpin){
        if(pin==enterpin) {
            cout<<"access granted "<<endl;
            return true;
        }
        else {
            cout<<"wrong password"<<endl;
            return false;
        }

    }
    void withdraw(double amount,bool pinverified){
        if(!pinverified){
            cout<<"wrong PIN. cannot withdraw"<<endl;
        }
        else if(amount<=0){
            cout<<"invalid amount ."<<endl;
        }
        else if(balance<amount){
            cout<<"invalid balance"<<endl;
        }
        else{
            balance-=amount;
            cout<<"amount withddraw successfully"<<amount<<endl;
        }
            
    }
    void dispaly(){
        cout<<"current balance: "<<balance<<endl;    }
};
int main(){
    ATM a1(1478,250);
    ATM a2(5896,500);
    bool pinok=a1.verifypin(2589);
    a1.withdraw(300,pinok);
    a1.dispaly();
    cout<<endl;
    pinok=a2.verifypin(5896);
    a2.withdraw(250,pinok);
    a2.dispaly();

}
