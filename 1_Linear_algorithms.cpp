/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/
 
 #include <iostream>
 using namespace std;
 
 int main() {
  
  double a = 3.847, b = 5.33, c = 7.167;
  
  double A = acos( (b * b + c * c - a * a) / (2.0 * b * c) );
  double B = asin( (b * sin(A)) / a);
  double C = M_PI - A - B;
  double p = (a + b + c) / 2.0;
  double C_check = 2.0 * atan( sqrt( (p - a) * (p - b) / (p * (p - c)) ) );

  if (abs(C_check-C) < 0.00001) {
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;
  } else {
    cout << "no solution" << endl;
  }
  return 0;
}