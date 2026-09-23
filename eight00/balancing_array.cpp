#include <iostream>
#include <vector>
using namespace std;

int main() {
  int size;
  cin >> size;
  vector<int> input_elements(size);
  for (int i = 0; i < size; i++) {
    cin >> input_elements[i];
  }
  for (int i = 0; i < size; i++) {
    vector<int> res(input_elements[i]);
    int middle = input_elements[i] / 2;
    int even_count = 0;
    int odd_count = 0;
    int even = 2;
    int odd = 1;

    if (middle % 2 != 0) {
      cout << "NO" << endl;
      continue;
    }
    for (int k = 0; k < middle; k++) {

      res[k] = even;
      even_count += even;
      even += 2;
    }
    for (int j = middle; j < input_elements[i] - 1; j++) {
      res[j] = odd;
      odd_count += odd;
      odd += 2;
    }
    res[input_elements[i] - 1] = even_count - odd_count;
    cout << "YES" << endl;
    for (int d = 0; d < input_elements[i]; d++) {
      cout << res[d] << " ";
    }
    cout << "\n";
  }
  return 0;
}
