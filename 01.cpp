#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int w, h;
  cin >>w>>h;
  double len = sqrt(w * w + h * h);
  
  double rlen=w+h;
  double dif=rlen-len;

  cout.precision(6);
  cout <<fixed<<dif<< endl;

  return 0;
}