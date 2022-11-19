#include <stdio.h>
#include <stdlib.h>
void printarray(int* a, int n) 
for (int i = 0; i < n; i++)
{
  printf(" %d", a[i]);
}
int temp;
void bubblesort(int* a, int n)
for (int i = 0; i < n-1; i++)    //for number of passes 
{
  for (int j = 0; j < n-1-i; j++)    //for comparison in each pass
  {
    if(a[j]>a[j+1])
    temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
  }
  
}
int main()
{
  int a[] = {5, 12, 74, 45, 97, 36, 6};
  int n = 7;
  printarray(a, n);     //printing the array before sort
  bubblesort(a, n);     //function to sort the array 
  printarray(a, n);     //printing the array after sort
  return 0;
}