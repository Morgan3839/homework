/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double d = 0.025;
  double g = 9.8;
  double Re = 4.1e4;
  double Ga, F, v;

  for (int variable = 0.0; variable < 6.0; variable++) {
    cout << "Enter the value of v: ";
    cin >> v;
      
    Ga = g * pow(d, 3.0) / pow(v * pow(10.0, -4.0), 2.0);
    if (Ga < 4.0 * pow(10.0, 4.0)) {
      F = 0.183 * pow(Re, 0.74) * pow(Ga, -0.256);
    } else {
      F = 3.0 * pow(Re, 0.74) * pow(Ga, -0.52);
    }
    cout << "F = " << F << "     " << "Ga = " << Ga << endl;
  }
  return 0;
}
