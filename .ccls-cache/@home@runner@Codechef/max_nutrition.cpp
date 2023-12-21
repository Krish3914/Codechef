#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  // 	int n;
  // 	vector<int>a,d,b;
  while (t > 0) {
    int i;
    int n;
    vector<int> a, d, b;
    cin >> n;
    int num;
    for (i = 0; i < n; i++) {
      cin >> num;
      a.push_back(num);
    }
    for (i = 0; i < n; i++) {
      cin >> num;
      b.push_back(num);
    }
    d = a;
    sort(d.begin(), d.end());
    int m = d.size();
    int sum = 0;
    unordered_map<int, int> mp;
    for (i = 0; i < m; i++) {
      if (i == 0) {
        continue;
      } else {
        if (d[i] == d[i - 1]) {
          d.erase(d.begin() + i);
          i--;
          m--;
        }
      }
    }
    // for(i=0; i<m; i++){
    //     cout<<d[i]<<"\t";
    // }
    for (i = 0; i < d.size(); i++) {
      mp[d[i]] = 0;
    }
    for (i = 0; i < b.size(); i++) {
      mp[a[i]] = max(mp[a[i]], b[i]);
    }
    for (i = 0; i < d.size(); i++) {
      if (mp[d[i]] > 0) {
        sum = sum + mp[d[i]];
      }
    }
    cout << sum << endl;
    t--;
  }
  return 0;
}
