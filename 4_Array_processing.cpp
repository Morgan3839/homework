/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
using namespace std;

int main() {
  int matrixSize;
  cout << "Enter matrix size: ";
  cin >> matrixSize;

  int G[1000][1000];

  cout << "Enter matrix elements:" << endl;
  for (int rowIndex = 0; rowIndex < matrixSize; ++rowIndex) {
      for (int columnIndex = 0; columnIndex < matrixSize; ++columnIndex) {
        cin >> G[rowIndex][columnIndex];
      }
  }

  cout << "Original matrix:" << endl;
  for (int rowIndex = 0; rowIndex < matrixSize; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < matrixSize; ++columnIndex) {
      cout << G[rowIndex][columnIndex] << " ";
    }
    cout << endl;
  }

  for (int rowIndex = 0; rowIndex < matrixSize; ++rowIndex) {
    int maxIndex = 0;
      for (int columnIndex = 1; columnIndex < matrixSize; ++columnIndex) {
        if (G[rowIndex][columnIndex] > G[rowIndex][maxIndex]) {
          maxIndex = columnIndex;
        }
      }

      if (maxIndex != rowIndex) { 
        G[rowIndex][rowIndex] = G[rowIndex][rowIndex] + G[rowIndex][maxIndex];
        G[rowIndex][maxIndex] = G[rowIndex][rowIndex] - G[rowIndex][maxIndex];
        G[rowIndex][rowIndex] = G[rowIndex][rowIndex] - G[rowIndex][maxIndex];
      }
    }

  cout << "New matrix:" << endl;
  for (int rowIndex = 0; rowIndex < matrixSize; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < matrixSize; ++columnIndex) {
      cout << G[rowIndex][columnIndex] << " ";
    }
    cout << endl;
  }

  return 0;
}
