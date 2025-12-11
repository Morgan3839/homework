/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int i = 0;
  double T = 1873.0;
  double Si[] = {0.025, 0.05, 0.075, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7};
  double O;

  while (i < 10) {
    O = sqrt(pow(10.0, (-31000.0 / T) + 12.152) / Si[i]);
    cout << "Si = " << Si[i] << "      " << "O = " << O << endl;
    i++;
  }

  cout << "\n--- do-while ---\n\n";

  i = 0;
  
  do {
    O = sqrt(pow(10.0, (-31000.0 / T) + 12.152) / Si[i]);
    cout << "Si = " << Si[i] << "      " << "O = " << O << endl;
    i++;
  } while (i < 10);

  return 0;
}
