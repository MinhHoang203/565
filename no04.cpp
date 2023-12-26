#include <stdio.h>

int main() {
  int n;
  printf("Nhap so phan cua mang la: ");
  scanf("%d", &n);

  
  int arr[n];
  for (int i = 0; i < n; i++) {
    printf("arr[%d] = ", i);
    scanf("%d", &arr[i]);
  }

  
  int index = -1;
  for (int i = n - 1; i >= 0; i--) {
    if (arr[i] % 2 != 0) {
      index = i;
      break;
    }
  }

  
  if (index >= 0) {
    printf("so le cua mang la: %d.\n", arr[index]);
  } else {
    printf("khong co so le cua mang la.\n");
  }


}
