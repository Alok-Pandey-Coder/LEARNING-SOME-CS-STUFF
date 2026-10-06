#include <bits/stdc++.h>
using namespace std;

class Engine {
  int horsePower = 2000;
  friend class Mechanic;
};

class Mechanic {
  public:
  void tune(Engine& a) {
    cout << a.horsePower << endl;
  }
};

// class SuperMechanic : public Mechanic {
//     void hack(Engine& e) { e.horsePower = 999; }  // ERROR
// }

int main() {
  Engine buggati;
  Mechanic mario;
  mario.tune(buggati);
}