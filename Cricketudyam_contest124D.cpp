#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t > 0) {
    int n, m;
    cin >> n >> m;
    int count = 0;
    // while(n>1){
    //     count  = count + n/2;
    //     n/=2;
    // }
    count = n - 1;
    if (count >= m) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
    t--;
  }
  return 0;
}
