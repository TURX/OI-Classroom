#include <iostream>
#include <algorithm>
using namespace std;
int N, r[103], o[103], o_ptr = 0;

int main() {
  cin >> N;
  // countR = N;
  for(int t = 0; t < N; t++) {
    cin >> r[t];
  }
  sort(r, r + N);
  for(int t = 0; t < N; t++) {
    if(t > 0) if(r[t] == r[t - 1]) {
      continue;
    }
    o[o_ptr++] = r[t];
  }
  cout << o_ptr << endl;
  for(int t = 0; t < o_ptr; t++) {
    cout << o[t] << ' ';
  }
  cout << endl;
  return 0;
}
