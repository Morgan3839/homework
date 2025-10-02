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
  double Re = 4.1 * pow(10, 4);
  double v[] = {0.01, 0.05, 0.1, 0.5, 1.0, 2.0};
  double Ga, F;

  for (double koef : v) {
      Ga = g * pow(d,3) / pow(koef * pow(10, -4), 2);
      if (Ga < 4 * pow(10, 4)) {
        F = 0.183 * pow(Re, 0.74) * pow(Ga, -0.256);
      } else {
        F = 3.0 * pow(Re, 0.74) * pow(Ga, -0.52);
      }
      cout << "F = " << F << "     " << "Ga = " << Ga << endl;
  }
  return 0;
}
