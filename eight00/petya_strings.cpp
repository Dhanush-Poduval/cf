#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string a;
  string b;
  cin >> a;
  cin >> b;
  int count = 0;
  for (int i = 0; i < a.size(); i++) {
    if (tolower(a[i]) == tolower(b[i])) {
      count += 1;
      continue;
    } else if ((tolower(a[i]) - '0') < (tolower(b[i]) - '0')) {
      cout << "-1" << endl;
      break;
    } else {
      cout << "1" << endl;
      break;
    }
  }
  if (count == a.size()) {
    cout << "0" << endl;
  }
}
