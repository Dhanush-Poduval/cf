#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(3));
  for (int i = 0; i < n; i++) {
    cin >> arr[i][0];

    cin >> arr[i][1];

    cin >> arr[i][2];
  }
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i][0] == 1 && arr[i][1] == 1 || arr[i][0] == 1 && arr[i][2] == 1 ||
        arr[i][1] == 1 && arr[i][2] == 1) {
      count += 1;
    }
  }
  cout << count << endl;
}
