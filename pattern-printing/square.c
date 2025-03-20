#include <stdio.h>

void print_row(int n);

int main(void)
{
  int n;
  printf("Enter the number: ");
  scanf("%d",&n);
  for (int i=0; i < n; i++)
  {
    print_row(n);
  }
}

void print_row(int n)
{
  for (int i=0; i < n; i++)
  {
    printf("# ");
  }
  printf("\n");
}