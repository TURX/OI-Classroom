#include <iostream>
#include <queue>
#include <functional>
using namespace std;

struct data {
  int A, B;
  int sum() {
    return A + B;
  }
  friend bool operator <(data l, data r) {
    return l.sum() < r.sum();
  }
};
priority_queue<data> pq;

data make_data(int A, int B) {
  data temp;
  temp.A = A;
  temp.B = B;
  return temp;
}
int main() {
  int a, b;
  while(cin >> a >> b) {
    pq.push(make_data(a, b));
  }
  while(!pq.empty()) {
    data temp = pq.top();
    cout << temp.sum() << endl;
    pq.pop();
  }
  return 0;
}
