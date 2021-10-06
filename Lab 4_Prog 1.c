#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n;
int binarySearch(int arr[], int l, int h, int key)
{
  int mid;
  while (l <= h)
  {
    mid = (l + h) / 2;
    if (key == arr[mid])
    {
      return 1;
    }
    else if (key < arr[mid])
    {
      h = mid - 1;
    }
    else
    {
      l = mid + 1;
    }
  }
  return -1;
}

int main()
{
  printf("\nEnter the size of the array : ");
  scanf("%d", &n);
  int arr[n], i;
  for (i = 0; i < n; i++)
    arr[i] = rand() % 100;
  printf("\nThe array is : \n");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  mergeSort(arr, 0, n - 1);
  int key;
  printf("\nThe sorted array is : \n");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  double total = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("\nEnter the key to be searched : \n");
    scanf("%d", &key);
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    sleep(1);
    if (binarySearch(arr, 0, n - 1, key) == 1)
      printf("Key Found");
    else
      printf("Key not found");
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    total += cpu_time_used;
    printf("\nTime taken : %0.6f", cpu_time_used);
  }
  printf("\nAverage case time complexity is %0.6f\n", total / 5.000000);
  return 0;
}