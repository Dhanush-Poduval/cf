#include <stdio.h>
#include <stdlib.h>

int main() {
  int a;
  int arr[100];
  scanf("%d", &a);
  if (a % 2 != 0) {
    printf("No");
  } else {
    int b = 0;
    int j = 0;
    for (int i = 1; i <= a; i++) {
      if (i == 1 || i == a) {
        continue;
      }
      if (a % i == 0) {
        arr[j++] = i;
      }
    }
    for (int i = 0; i < j; i++) {
      printf("%d\n", arr[i]);
    }
    int isTrue = 0;
    for (int i = 0; i < j; i++) {
      if (((a - arr[i]) % 2) == 0) {
        isTrue = 1;
        printf("Yes\n");
        break;
      }
    }
  }
  return 0;
}
