#include <stdio.h>

void insertion_sort(int numbers[], int n) {
  
  int i, j, temp;

  for(i = 1; i < n; i++) { // 1
   temp = numbers[i]; // 5

    for(j = i;(j >= 0) && (temp < numbers[j - 1]);) {
      numbers[j] = numbers[j-1]; // 
      j = j - 1;
    }

    numbers[j] = temp;
  }

  for(int h = 0; h < 10; h++) {
    printf("numbers is %d", numbers[h]);
  }
}

void main() {
  int numbers[] = {5, 10, 3, 35, 40, 1, 71, 8, 21, 3};
  
  size_t n = sizeof(numbers)/sizeof(numbers[0]);
  insertion_sort(numbers, n);
  
}