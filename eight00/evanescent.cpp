#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int b;
    cin >> b;
    string s;
    string res_s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
      int j = i;
      while (j < s.size() && s[i] == s[j]) {
        j++;
      }
      if (j - i == 1) {
        count += 1;
      }

      i = j;
    }
    cout << count << endl;
  }
}
