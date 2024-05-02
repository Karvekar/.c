#include <stdio.h>
int main()
 {
int arr[] = {1, 2, 4, 5, 6, 7, 9, 4};
int size = sizeof(arr) / sizeof(arr[0]);
printf("Original Array: ");
for (int i = 0; i < size; i++)
 {
printf("%d ", arr[i]);
}
arr[4] = 11;
printf("\nModified Array: ");
for (int i = 0; i < size; i++) 
{
printf("%d ", arr[i]);
}
return 0;
}

