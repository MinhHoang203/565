#include <stdio.h>

int main() {
  int n;
  printf("Nhap so phan trong mang: ");
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }
  
  int x;
  printf("Nhap so can tim: ");
  scanf("%d", &x);

  bool found = false;
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      found = true;
      break;
    }
  }
  if (found) {
    printf("Co so x trong mang.\n");
  } else {
    printf("Khong co x so trong mang.\n");
  }
  
}
