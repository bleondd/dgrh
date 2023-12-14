#include<stdio.h>
int main() {
  int year;

  printf("Nhap nam: ");
  scanf("%d", &year);

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        printf("Nam %d la nam nhuan.\n", year);
      } else {
        printf("Nam %d khong phai là nam nhuan.\n", year);
      }
    } else {
      printf("Nam %d la nam nhuan.\n", year);
    }
  } else {
    printf("Nam %d khong phai la nam nhuan.\n", year);
  }
}
