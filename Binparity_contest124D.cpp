#include <bits/stdc++.h>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t > 0) {
    int n;
    cin >> n;
    vector<int> arr;
    while (n > 0) {
      int num = n % 2;
      arr.push_back(num);
      n /= 2;
    }
    reverse(arr.begin(), arr.end());
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
      sum += arr[i];
    }
    if (sum % 2 == 0) {
      cout << "EVEN" << endl;
    } else {
      cout << "ODD" << endl;
    }
    t--;
  }
  return 0;
}
