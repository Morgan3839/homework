/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int index = 0;
  double T = 1873.0;
  double Si[] = {0.025, 0.05, 0.075, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7};
  double O;

  while (index < 10) {
    O = sqrt(pow(10.0, (-31000.0 / T) + 12.152) / Si[index]);
    cout << "Si = " << Si[index] << "      " << "O = " << O << endl;
    index++;
  }

  cout << "\n--- do-while ---\n\n";

  index = 0;

  do {
    O = sqrt(pow(10.0, (-31000.0 / T) + 12.152) / Si[index]);
    cout << "Si = " << Si[index] << "      " << "O = " << O << endl;
    index++;
  } while (index < 10);

  return 0;
}
