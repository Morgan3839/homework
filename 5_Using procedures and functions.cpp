/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of elements: ";
  cin >> n;

  double* R = new double[n];

  for (int index = 0; index < n; index++) {
    cout << "R[" << index << "] = ";
    cin >> R[index];
  }

  double sum = 0.0;
  double sumRoots = 0.0;

  for (int index = 0; index < n; index++) {
    sum += R[index];
    if (R[index] >= 0)
      sumRoots += sqrt(R[index]);
  }

  cout << "Sum of elements: " << sum << endl;
  cout << "Sum of square roots: " << sumRoots << endl;

  delete[] R;
  return 0;
}
