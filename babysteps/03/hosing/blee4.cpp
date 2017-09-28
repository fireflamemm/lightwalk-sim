// blee4.cpp
// Particle.io EEPROM stub
// (c) 2017 Brent Neal Reeves
//
#include <iostream>
using namespace std;

int fget (int v1) { return 1; };
void fread (int v1, int v2) {  };

struct myEEPROM {
  int (*get)(int addr) = fget;
  void (*read)(int addr, int v2) = fread;
} EEPROM;

int main ( int argc, char * argv[] ) {
  cout << "calling EEPROM.read(1, 2)" << endl;
  EEPROM.read(1, 2);
  
  cout << "read " << EEPROM.get(1) << endl;
  cout << "read " << EEPROM.get(2) << endl;

  //  int result = pFunc1(11);
  //  cout << "result " << result << endl;
  return 0;
}