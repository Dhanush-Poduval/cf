#include <bits/stdc++.h>
using namespace std;

int main() {
  int a;
  cin >> a;
  for (int g = 0; g < a; g++) {
    int b;
    cin >> b;
    vector<int> arr(b);
    for (int i = 0; i < b; i++) {
      cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    unordered_map<int, int> freq;
    int max = arr[0];
    vector<int> result;
    for (int x : arr) {
      if (x == max)
        result.push_back(x);
      else
        freq[x]++;
    }

    while (!freq.empty()) {
      int ans = -1, mn = INT_MAX;

      for (auto [x, f] : freq) {
        if (f < mn || (f == mn && x < ans)) {
          mn = f;
          ans = x;
        }
      }

      for (int i = 0; i < mn; i++)
        result.push_back(ans);

      freq.erase(ans);
    }
    for (int i = 0; i < result.size(); i++) {
      cout << result[i] << " ";
    }
    cout << endl;
  }
}
