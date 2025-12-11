#include <iostream>
using namespace std;

int main() {
  int choice;
  double value;

  cout << "Unit Converter\n";
  cout << "1. Kilometers to Miles\n";
  cout << "2. Miles to Kilometers\n";
  cout << "Choose an Option\n";
  cin >> choice;

  if (choice == 1) {
    cout << "Enter Kilometers: ";
    cin >> value;
    cout << "Miles: " << value * 0.621371 << end1;
  }
   else if (choice == 2) {
    cout << "Enter Miles: ";
    cin >> value;
    cout << "Kilometers: " << value / 0.621371 << end2;
  }
    else {
    cout << "pls pick a valid choice :( \n"; 
  }

  return 0;
}
