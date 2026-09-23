#include <algorithm>
#include <cctype>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int b;
    cin >> b;
    int count = 0;
    bool ok = true;

    vector<int> arr(b);
    for (int j = 0; j < b; j++) {
      cin >> arr[j];
    }
    vector<int> sorted_arr(b);
    sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());
    vector<int> real_order;
    vector<int> nreal_order;
    for (int k = 0; k < b; k++) {
      if (sorted_arr[k] != arr[k]) {
        real_order.push_back(sorted_arr[k]);
        nreal_order.push_back(arr[k]);
      }
    }
    reverse(nreal_order.begin(), nreal_order.end());
    for (int l = 0; l < real_order.size(); l++) {
      if (nreal_order[l] == real_order[l]) {
        count += 1;
      } else {
        cout << "NO" << endl;
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "YES" << endl;
    }
  }
}
