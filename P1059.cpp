#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool used[1003];
int s[103], s_ptr = 0;
int N, tn, countR = 0;

int main() {
  cin >> N;
  for(int t = 0; t < N; t++) {
    cin >> tn;
    used[tn] = true;
  }
  for(int t = 0; t < N; t++) {
    if(used[t]) {
      countR++;
      s[s_ptr++] = t;
    }
  }
  cout << countR << endl;
  for(int t = 0; t < s_ptr; t++) {
    cout << s[t] << ' ';
  }
  cout << endl;
  return 0;
}
