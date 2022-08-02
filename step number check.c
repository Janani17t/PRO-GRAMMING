/*Given a number N, the program must print whether N is a step number or not.
(A step number is a number which has a digit which is either 1 more or 1 less than the previous digit)
Input:
1212343
Output:
yes

Input:
342345
Output:
no
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
  int n,i;
  scanf("%d",&n);
  while(n>9)
  {
      int unit=n%10;
      int prev=n/10%10;
      if(abs(prev-unit)!=1)
      {
          printf("NO");
          return 0;
      }
      n/=10;
  }printf("YES");
}
