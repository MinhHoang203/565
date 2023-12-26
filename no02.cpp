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

  int sum = 0;
  int count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0 && i % 2 == 0) {
      sum += arr[i];
      count++;
    }
  }

  double avg = (double)sum / count;

  printf("Trung binh cua cac so chan trong mang la: %.2lf\n", avg);

  
}
