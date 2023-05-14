#include <stdio.h>

int main()
{

    // loop control instruction--->
    /*
    types of loops:-
    1. while loops
    2. do-while loops
    3. for loops
    */

    /*
    int a;
    scanf("%d", &a);
    while(a<10){
        printf("%d \n",a);
        a++;
    }
    */
    /*
     int i = 0;
     while (i<=20)
     {
         if (i>=10)
         {
         printf("The value of i is %d \n",i);
         }
         i++;
     }
     */

    // for loop--->
    // for loop for int value
    /*
    int i;
    for(i = 0; i <= 200; i++)
    {
        printf("%d \n", i);
    }
    */

    // for loop for float value
    /*
    for(float i = 1.0; i <= 5.0; i++){
        printf("%f \n",i);
    }
    */

    // for loop for char value
    /*
    for(char ch = 'a'; ch <= 'z'; ch++){
        printf("%c \n",ch);
    }
    */

    // while loop--->
    /*
    int i;
    while(i<=5){
        printf("%d \n", i);
        i++;
    }
    */

    // question input from user to print number:-

    // using while loop
    /*
    int n = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);

    int i = 1;
    while(i <= n){
        printf("%d \n",i);
        i++;

    }
    */

    // using for loop
    /*
    int n;
    printf("Enter the number: \n");
    scanf("%d", &n);
    for(int i = 0; i <= n; i++){
        printf("%d \n", i);
    }
    */
    // using do-while loop
    /*
   int i = 0;
   do
   {
        printf("%d \n",i);
        i++;
   } while (i <= 10);
   */
   

    return 0;
}