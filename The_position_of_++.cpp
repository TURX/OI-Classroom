#include <iostream>
using namespace std;
int a = 0, b = 0;

int main() {
  for(int t = 0; t < 9; t++) {
    cout << "a[" << t << "]: " << ++a << endl;
    cout << "b[" << t << "]: " << b++ << endl;
  }
}
