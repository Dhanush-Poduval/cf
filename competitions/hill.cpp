#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  for (int g = 0; g < tc; g++) {
    int a;
    cin >> a;
    vector<int> arr(a);
    for (int i = 0; i < a; i++) {
      cin >> arr[i];
    }
    bool is = true;
    for (int i = 0; i < arr.size() - 2; i += 2) {
      if ((arr[i + 1] > arr[i] && arr[i + 1] > arr[i + 2]) ||
          (arr[i + 1] < arr[i] && arr[i + 1] < arr[i + 2])) {
        is = false;
        break;
      } else {
        is = true;
      }
    }
    if (!is) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}
