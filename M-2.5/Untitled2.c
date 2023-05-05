#include <iostream>

using namespace std;

void collatz(int n) {
  while (n != 1) {
    cout << n << " ";
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = n * 3 + 1;
    }
  }
  cout << n << endl;
}

int main() {
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  collatz(n);
  return 0;
}

