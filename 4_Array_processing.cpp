/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int matrixSize;
  cout << "Enter matrix size: ";
  cin >> matrixSize;
  
  vector<vector<int>> G(matrixSize, vector<int>(matrixSize));

  cout << "Enter matrix elements:" << endl;
  for (int rowIndex = 0; rowIndex < matrixSize; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < matrixSize; ++columnIndex) {
      cin >> G[rowIndex][columnIndex];
    }
  }
  
  cout << "Original matrix:" << endl;
  for (const auto& row : G) {
    for (int element : row) {
      cout << element << " ";
    }
    cout << endl;
  }
  
  for (int rowIndex = 0; rowIndex < matrixSize; ++rowIndex) {
    auto maxIterator = max_element(G[rowIndex].begin(), G[rowIndex].end());
    int maxIndex = distance(G[rowIndex].begin(), maxIterator);
    swap(G[rowIndex][rowIndex], G[rowIndex][maxIndex]);
  }

  cout << "New matrix:" << endl;
  for (const auto& row : G) {
    for (int element : row) {
      cout << element << " ";
    }
    cout << endl;
  }

  return 0;
}
