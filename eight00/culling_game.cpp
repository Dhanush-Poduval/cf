#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  for (int i = 0; i < a; i++) {
    int b;
    cin >> b;
    vector<int> ranks(b);
    vector<int> permutations(b);
    vector<int> result;
    vector<bool> removed(b, false);
    int r = 0;
    for (int j = 0; j < b; j++) {
      cin >> ranks[j];
    }
    for (int per = 0; per < b; per++) {
      cin >> permutations[per];
    }

    for (int l = 0; l < b; l++) {
      int count = 0;
      long long champion = ranks[0];
      if (l == 0) {
        for (int k = 1; k < b; k++) {
          if (champion < ranks[k]) {
            count += 1;
            champion = ranks[k];
          } else {
            champion += ranks[k];
          }
        }

      } else {
        // ranks.erase(ranks.begin() + (permutations[r] - 1));
        removed[permutations[l - 1] - 1] = true;
        int size = ranks.size();
        int r = 0;
        for (int rem = 0; rem < size; rem++) {
          if (!removed[rem]) {
            champion = ranks[rem];
            r = rem;
            break;
          }
        }
        for (int k = r + 1; k < size; k++) {
          if (!removed[k]) {
            if (champion < ranks[k]) {
              count += 1;
              champion = ranks[k];
            } else {
              champion += ranks[k];
            }
          }
        }
      }
      result.push_back(count);
    }
    for (int i = 0; i < result.size(); i++) {
      cout << result[i] << " ";
    }
    cout << endl;
  }
}
