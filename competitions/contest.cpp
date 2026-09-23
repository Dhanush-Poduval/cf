#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int a;
  cin >> a;
  vector<vector<int>> input(a, vector<int>(4));
  for (int i = 0; i < a; i++) {
    cin >> input[i][0];

    for (int j = 1; j < 4; j++) {
      cin >> input[i][j];
    }
  }
  int min = 0;
  for (int i = 0; i < a; i++) {
    min = input[i][0] - input[i][1];
    for (int j = 1; j < 4; j++) {
      if (input[i][0] - input[i][j] > min) {
        min = input[i][0] - input[i][j];
      }
    }
    cout << min << endl;
  }
}
