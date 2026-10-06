#include <iostream>
using namespace std;

class Account {
  private:
  double balance;
  public:
  Account(double b) : balance(b) {}
  friend void showBalance(const Account& a);

};

void showBalance(const Account& a){
  cout << a.balance << endl;
}
int main() {
  Account SBI(3000);
  showBalance(SBI);
}