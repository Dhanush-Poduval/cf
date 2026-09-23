#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
    if (s[i].size() - 1 < 10) {
      cout << s[i] << endl;
      continue;
    }
    string formed_string;
    formed_string += s[i][0];
    formed_string += to_string(s[i].size() - 2);
    int si = s[i].size() - 1;
    formed_string += s[i][si];
    cout << formed_string << endl;
  }
  // for (int i = 0; i < s.size(); i++) {
  //   if (i == 0 || i == s.size() - 1) {
  //     formed_string[i] = s[i];
  //   }
  // }
}
