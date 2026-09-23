#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans = n;

    // split means:
    // [0 ... split-1] should all be 0
    // [split ... n-1] should all be 1
    for (int split = 0; split <= n; split++) {

      int count = 0;

      // Left side should contain only 0s
      for (int i = 0; i < split; i++) {
        if (s[i] == '1') {
          count++;
        }
      }

      // Right side should contain only 1s
      for (int i = split; i < n; i++) {
        if (s[i] == '0') {
          count++;
        }
      }

      ans = min(ans, count);
    }

    cout << ans << '\n';
  }

  return 0;
}
