#include <stdio.h>

int main()
{
  /* 1.

  * * * * *
  * * * * *
  * * * * *

  */
  // int i,j;

  // for(i = 1; i <= 3; i++)
  // {
  //     for ( j = 1; j <= 5; j++)
  //     {
  //         printf(" * ");
  //     }
  //     printf("\n");

  // }

  /* 2.

  *
  * *
  * * *
  * * * *
  * * * * *

  */
  // int i;
  // int j;

  // for (i = 1; i <= 5; i++)
  // {
  //   for (j = 1; j <= 5; j++)
  //     if (j <= i)
  //     {
  //       {
  //         printf(" * ");
  //       }
  //     }
  //     else
  //     {
  //       printf(" ");
  //     }
  //   printf("\n");
  // }

  /* 2.
            *
          * *
        * * *
      * * * *
    * * * * *
   */
  int row;
  int col;

  for (col = 1; col <= 5; col++)
  {
    for (row = 1; row <= 5; row++)
      if (col >= row)
      {
        {
          printf(" * ");
        }
      }
      else
      {
        printf(" ");
      }
    printf("\n");
  }
  // NOT Solved
  return 0;
}