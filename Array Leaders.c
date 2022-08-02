/*An array of N numbers is passed as input. The program must print all the LEADERS in the array.A number is a LEADER if it is greater than all the numbers to it's right.
Note: The rightmost number is always a leader.
Input:
10 17 4 3 5 2
Output:
17 5 2
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,j;
  scanf("%d",&n);
  int arr[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
      int f=0;
      for(j=i+1;j<n;j++)
      {
          if(arr[j]>arr[i])
          {
              f=1;
              break;
          }
      }if(f==0){
          printf("%d ",arr[i]);
      }
  }

}
