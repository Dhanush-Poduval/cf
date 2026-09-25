#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  cin >> a;
  for (int b = 0; b < a; b++) {
    int d;
    char c;
    cin >> d >> c;
    // cout << d << endl;
    // cout << c << endl;
    string s;
    cin >> s;
    int l = 0;
    int r = s.size() - 1;
    int count = 0;
    while (l < r) {
      // cout << s[r] << endl;
      // cout << s[l] << endl;
      if (s[l] != s[r] && s[l] != c && s[r] != c) {
        count += 2;
        // cout << "Founf 1 " << endl;
      } else if (s[l] != s[r]) {
        count += 1;
        // cout << "Fund 0" << endl;
      }
      l++;
      r--;
    }
    cout << count << endl;
  }
}
