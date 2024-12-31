#include <string>
#include <iostream>

using namespace std;

class BankAccount {
private:
  string accountNumber;
  double balance;

  BankAccount(string accountNumber, double balance): accountNumber("0"), balance(0.0);
public:
  string getAccountNumber();
  double getBalance();
};
