#include <iostream>
#include <cstdio>
using namespace std;
int total;
int main() {
  cin >> total;
  if(total <= 150) {
    printf("%.1f\n", (double)total * 0.4463);
    return 0;
  }
  if(total <= 400) {
    printf("%.1f\n", (double)(total - 150) * 0.4663 + 66.945);
    return 0;
  }
  {
    printf("%.1f\n", (double)(total - 400) * 0.5663 + 66.945 + 116.575);
  }
  return 0;
}
