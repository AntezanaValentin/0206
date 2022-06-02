#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  int m = atoi(argv[2]);
  int min = INT_MAX;
  int max = INT_MIN;
  int array[n];
  double prom = 0.0;
  double sum = 0.0;
  for (int i = 0; i < n; i++){
    array[i] = rand() % m;
    prom += array[i];
      if (min > array[i]) {
        min = array[i];
  }
      if (max < array[i]) {
        max = array[i];
      }
    }
    for (int i = 0; i < n; i++) {
      printf("%d ", array[i]);
    }
    printf("\n");
    prom = sum / n;
    printf("promedio: %.2f\n", prom);
    printf("minimo: %d\n", min);
    printf("max: %d\n", max);
printf("\n");
  return 0;
}
