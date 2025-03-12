#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance;
    string accoutName;

public:
    BankAccount(double balance, string accoutName)
    {
        balance = balance;
        accoutName = accoutName;
    }
    void setDeposit(double depositMoney)
    {
        cout << "Done!" << endl;
    };
    void setwithdraw(double withdrawMoney)
    {
        if (balance >= 0)
        {
            balance -= withdrawMoney;
        }
        else
        {
            cout << "Done!" << endl;
        }
    }
};
int main(){
    BankAccount bank(125.3,"009");
    return 0;
}