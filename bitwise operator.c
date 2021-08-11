#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
  int a1=0,b1=0,c1=0;
  for(int i=1;i<n;i++)
  {
      for(int j=i+1;j<=n;j++)
      {
          int a=i&j;
          int b=i|j;
          int c=i^j;
          if(a<k&&a>a1)
          {
              a1=a;
          }
          if(b<k&&b>b1)
          {
              b1=b;
          }
          if(c<k&&c>c1)
          {
              c1=c;
          }
          
      }
      
  }
  printf("%d\n%d\n%d",a1,b1,c1);
} 

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
