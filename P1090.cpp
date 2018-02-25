#include <iostream>
#include <vector>
#include <functional>
#include <queue>
using namespace std;
int n, out, strength=0;
priority_queue<int, vector<int>, greater<int> > pq;
int main() {
  cin >> n;
    for(int t = 0, in;t < n;t++) {
        cin >> in;
        pq.push(in);
    }
    while(!pq.empty()) {
        out = pq.top();
        pq.pop();
        if(pq.empty()) break;
        out += pq.top();
        strength += out;
        pq.pop();
        pq.push(out);
    }
    cout << strength << endl;
    return 0;
}
