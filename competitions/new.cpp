#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    map<int, int> freq;

    for (int &x : a) {
      cin >> x;
      freq[x]++;
    }

    vector<int> ans;

    while (!freq.empty()) {
      int mn = INT_MAX, x = -1;

      for (auto [v, f] : freq) {
        if (f < mn || (f == mn && v > x)) {
          mn = f;
          x = v;
        }
      }

      for (int i = 0; i < mn; i++)
        ans.push_back(x);

      freq.erase(x);
    }

    for (int x : ans)
      cout << x << ' ';
    cout << '\n';
  }
}
