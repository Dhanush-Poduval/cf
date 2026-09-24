#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int b = 0;
    cin >> b;
    string s;
    cin >> s;

    vector<string> sub_arr;
    for (int k = 0; k < b; k++) {
      for (int q = k; q < b; q++) {
        string temp = "";
        for (int d = k; d <= q; d++) {
          temp += s[d];
        }
        sub_arr.push_back(temp);
      }
    }
    int count = 0;
    for (int i = 0; i < sub_arr.size(); i++) {
      int sum = 0;
      for (char c : sub_arr[i]) {
        sum += c - '0';
      }
      if (sum == sub_arr[i].size()) {
        count += 1;
      }
    }
    cout << count << endl;
  }
}
