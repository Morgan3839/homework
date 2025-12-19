/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
using namespace std;

int getWeekDay(int day, int month, int year) {
  if (month < 3) {
    month += 12;
    year -= 1;
  }

  int yearPart = year % 100;
  int centuryPart = year / 100;

  int weekday = (day + (13 * (month + 1)) / 5 + yearPart + yearPart / 4 + centuryPart / 4 + 5 * centuryPart) % 7;
  return weekday;
}

int main() {
  int year;
  cout << "Enter the year: ";
  cin >> year;

  int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  string monthNames[12] = {"January", "February", "March", "April", "May", "June", 
                           "July", "August", "September", "October", "November", "December"};

  int leapYear = 0;
  if (year % 400 == 0) leapYear = 1;
  else if (year % 100 == 0) leapYear = 0;
  else if (year % 4 == 0) leapYear = 1;

  if (leapYear == 1) daysInMonth[1] = 29;

  for (int monthIndex = 1; monthIndex <= 12; monthIndex++) {
    cout << "\n--- " << monthNames[monthIndex-1] << " " << year << " ---\n" << "Mon Tue Wed Thu Fri Sat Sun\n";

    int firstWeekDay = getWeekDay(1, monthIndex, year);
    int startDay = (firstWeekDay + 6) % 7;
    if (startDay == 0) startDay = 7;

    for (int emptyDay = 1; emptyDay < startDay; emptyDay++) cout << "   ";

    for (int dayNumber = 1; dayNumber <= daysInMonth[monthIndex-1]; dayNumber++) {
      if (dayNumber < 10) cout << " " << dayNumber << " ";
      else cout << dayNumber << " ";

        if (startDay == 7) {
            cout << "\n";
            startDay = 1;
        } else {
            ++startDay;
    }
    cout << "\n";
  }
  return 0;
}
