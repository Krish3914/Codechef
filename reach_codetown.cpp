#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int test;
  cin >> test;
  while (test > 0) {
    int i, j;
    string s;
    int n = 8;
    char c;
    for (i = 0; i < 8; i++) {
      cin >> c;
      s.push_back(c);
    }
    unordered_map<int, int> mp, mp1;
    string t = "CODETOWN";
    for (i = 0; i < 8; i++) {
      if (t[i] == 'A' || t[i] == 'E' || t[i] == 'I' || t[i] == 'O' ||
          t[i] == 'U') {
        mp[i] = 1;
      } else {
        mp[i] = 0;
      }
    }
    for (i = 0; i < 8; i++) {
      if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
          s[i] == 'U') {
        mp1[i] = 1;
      } else {
        mp1[i] = 0;
      }
    }
    if (mp == mp1) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
    test--;
  }
  return 0;
}
