#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    long long a, b, c;
    cin >> a >> b >> c;

    cout << llabs(a + c - b) << '\n';
  }
}
