/*************************
 * Автор: Дорожко Ксения *
 * Вариант: 6            *
 * ***********************/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Person {
  string surname, name, city, street, phone;
  int day, month, year, house;
};

vector<Person> readPeopleFromFile() {
  vector<Person> people;
  ifstream file("people.txt");
  if (!file) {
    cout << "Cannot open file!" << endl;
    return people;
  }

  Person p;
  while (file >> p.surname >> p.name >> p.day >> p.month >> p.year 
        >> p.city >> p.street >> p.house >> p.phone) {
    people.push_back(p);
  }

  file.close();
  return people;
}

void printPeopleOnStreet(const vector<Person>& people, const string& queryStreet) {
  cout << "People living on the street " << queryStreet << ":" << endl;
  for (int index = 0; index < people.size(); index++) {
    if (people[index].street == queryStreet) {
      cout << people[index].surname << " " << people[index].name << endl;
    }
  }
}

int findYoungestIndex(const vector<Person>& people) {
  int youngestIndex = 0;
  for (int index = 1; index < people.size(); index++) {
    if (people[index].year > people[youngestIndex].year ||
        (people[index].year == people[youngestIndex].year &&
         people[index].month > people[youngestIndex].month) ||
        (people[index].year == people[youngestIndex].year &&
         people[index].month == people[youngestIndex].month &&
         people[index].day > people[youngestIndex].day)) {
      youngestIndex = index;
    }
  }
  return youngestIndex;
}

int findOldestIndex(const vector<Person>& people) {
  int oldestIndex = 0;
  for (int index = 1; index < people.size(); index++) {
    if (people[index].year < people[oldestIndex].year ||
      (people[index].year == people[oldestIndex].year &&
      people[index].month < people[oldestIndex].month) ||
        (people[index].year == people[oldestIndex].year &&
         people[index].month == people[oldestIndex].month &&
         people[index].day < people[oldestIndex].day)) {
      oldestIndex = index;
    }
  }
  return oldestIndex;
}

int main() {
  vector<Person> people = readPeopleFromFile();
  
  if (people.empty()) {
    return 1;
  }

  string queryStreet;
  cout << "Enter street: ";
  cin >> queryStreet;
  
  printPeopleOnStreet(people, queryStreet);
  
  int youngestIndex = findYoungestIndex(people);
  cout << "The youngest person: " << people[youngestIndex].surname 
      << " " << people[youngestIndex].name << endl;
  
  int oldestIndex = findOldestIndex(people);
  cout << "The oldest person: " << people[oldestIndex].surname 
       << " " << people[oldestIndex].name << endl;

  return 0;
}
