/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter a number greater than zero: ";
  cin >> number;

  if(number < 1) {
    cout << "Incorrect input" << endl;
    return 0;
  }

  if (number >= 1000) {
    int thousands = number / 1000;
    for(int index = 0; index < thousands; index++) {
      cout << "M";
    }
    number = number % 1000;
  }

  if (number >= 900) {
    cout << "CM";
    number -= 900;
  }

  if (number >= 500) {
    cout << "D";
    number -= 500;
  }

  if (number >= 400) {
    cout << "CD";
    number -= 400;
  }

  if (number >= 100) {
    int hundreds = number / 100;
      for(int index = 0; index < hundreds; index++)
        cout << "C";
    number = number % 100;
  }

  if (number >= 90) {
    cout << "XC";
    number -= 90;
  }

  if (number >= 50) {
    cout << "L";
    number -= 50;
  }

  if (number >= 40) {
    cout << "XL";
    number -= 40;
  }

  if (number >= 10) {
    int tens = number / 10;
    for(int index = 0; index < tens; index++)
      cout << "X";
    number = number % 10;
  }

  if (number >= 9) {
    cout << "IX";
    number -= 9;
  }

  if (number >= 5) {
    cout << "V";
    number -= 5;
  }

  if (number == 4) {
    cout << "IV";
    number -= 4;
  }

  while(number > 0) {
    cout << "I";
    number = number - 1;
  }

  cout << endl;
  return 0;
}
