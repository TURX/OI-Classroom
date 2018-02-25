#include <iostream>
using namespace std;
int main() {
  int step = 0;
  double distance = 2, x;
  cin >> x;
  while(x >= 0) {
    x -= distance; // x = x - distance
    distance *= 0.98; // distance = distance * 0.98
    step++; // step = step + 1
  }
  cout << step << endl;
  return 0;
}
