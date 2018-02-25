#include <iostream>
using namespace std;
int n, now, temp = 0;
unsigned long long m;
int ans = 1;
int main() {
    cin >> n >> m;
    for(int t = 0;t < n;t++) {
        cin >> now;
        if((temp += now) > m) {
            temp=0;
            ans++;
            temp  += now;
        }
    }
    cout << ans << endl;
}
