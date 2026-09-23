#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int students;
  int threshold;
  cin >> students >> threshold;
  vector<int> scores(students);
  for (int i = 0; i < students; i++) {
    cin >> scores[i];
  }
  int pass_marks = scores[threshold - 1];
  int count = 0;
  for (int k = 0; k < students; k++) {
    if (scores[k] <= 0) {
      continue;
    }
    if (scores[k] < pass_marks) {
      break;
    }
    count += 1;
  }
  cout << count << endl;
  return 0;
}
