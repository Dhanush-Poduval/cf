#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  int a;
  cin >> a;
  int x = 0;
  for (int i = 0; i < a; i++) {
    string s;
    cin >> s;

    for (int j = 0; j < s.size(); j++) {
      if (s[j] == '+') {
        x += 1;
        break;
      } else if (s[j] == 'X') {
        continue;
      } else {
        x -= 1;
        break;
      }
    }
  }
  cout << x << endl;
  return 0;
}
