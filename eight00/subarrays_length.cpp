#include <bits/stdc++.h>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int b = 0;
    cin >> b;
    string s;
    cin >> s;
    int count = 0;
    vector<int> prefix_sum;
    unordered_map<long, long> nice;
    nice[0] += 1;
    long pre = 0;
    long ans = 0;

    for (int k = 0; k < b; k++) {
      int z = (s[k] - '0') - 1;
      pre += z;
      ans += nice[pre];
      nice[pre]++;
      // int sum = 0;
      // for (int q = k; q < b; q++) {
      //   sum += s[q] - '0';
      //   if (sum == q - k + 1) {
      //     count += 1;
      //   }
      //   // string temp = "";
      // for (int d = k; d <= q; d++) {
      //   temp += s[d];
      // }
      // sub_arr.push_back(temp);
    }

    cout << ans << endl;
  }
  // int count = 0;
  // for (int i = 0; i < sub_arr.size(); i++) {
  //   int sum = 0;
  //   for (char c : sub_arr[i]) {
  //     sum += c - '0';
  //   }
  //   if (sum == sub_arr[i].size()) {
  //     count += 1;
  //   }
  // }
  // cout << count << endl;
}
