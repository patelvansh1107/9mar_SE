#include <stdio.h>
main() {

  int n;
  int i,j,k;
  
  printf("Enter the value of n : ");
  scanf("%d",&n);

  for (i = 1; i <= n; i++) {
    for (j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }
  
  for (i = 1; i <= n-1; i++) {
    for (j = 0; j < n-i; j++) {
      printf("*");
    }
    printf("\n");
  }
  
}
