/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/
 
#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
  
  double T = 1873.0;
  double Si[] = {0.025, 0.05, 0.075, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7};
  double O;
  
  for (double koef : Si) {
    O = sqrt( pow(10.0, (-31000 / T) + 12.152) / koef );
    cout << "Si = " << koef << "      " << "O = " << O << endl;
  }
  return 0;
}
