#include<stdio.h>

int main(){

    // print the sum of first n natural numbers using for loop--->
    /*
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum;
    for(int i = 0; i <= n; i++){
        sum = sum + i;
    }
    printf("%d sum is ",sum);
    */

    // print the table of a number input by the user--->
    /*
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n",n*i);
    }
    */
    // keep taking numbers as input from user until user enters an odd number--->
    /*
    int n;
    do
    {
        printf("Enter the number: ");
        scanf("%d", &n);
        printf("%d \n", n);  
        if (n%2 != 0) {
            break;
        }
        
    } while (1);
    printf("Thank you... \n");
    */

    // print all numbers from 1 to exept for 6--->
    /*
    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            continue;
        }
        
        printf("%d \n",i);
    }
    */

    // print all the odd numbers from 5 to 50--->
    /*
    for (int i = 5; i <= 50; i++)
    {
        if (i%2 != 0)
        {
            printf("%d \n",i);
        }
    }
    */

    // print the factorial of a number--->
    
    /*
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    printf("%d \n",fact);
    */

    // print reverse of the table for a number n--->
    /*
    int number;
    printf("Enter number: \n");
    scanf("%d", &number);

    for(int i = 10; i >= 1; i--){
        printf("%d \n", number * i);
    }
    */

    // calculate the sum of all numbers between 5 and 50--->
    
    /*
    int sum;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("%d \n",sum);
    */

   /*
    int i = 1;
    do{
        printf("%d \n",i);
        i++;
    } while(i <= 4);
   */

    /*
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("%d \n", i);
    }
    */

    /*
    for(int i = 5; i; i--){
        printf("%d \n",i);
    }
    */

    // multiplication table--->
    /*
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i * n);
    }
    */

    // multiplication table in reverce order--->
    /*
    int number;
    printf("****multiplication table in reverce order**** \n \n");
    printf("Enter the number: ");
    scanf("%d", &number);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d \n", i * number);
    }
    */

    /*
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        // sum += i;
        sum = sum + i;
        
    }
    printf("The sum is: %d \n", sum);
    */
    // solved above question with do-while
    /*
    int i = 1, sum = 0;
    do{
        sum += i;
        i++;
    }while(i <= 10);

    printf("The sum is: %d \n",sum);
    */

    /*
    int i, sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum = sum + i;
        printf("%d \n", 8 * i);
    }
    */

    /*
    int i, fact = 1;
    printf("**** Factorial of 5 ****\n");
    for(i = 1; i <= 5; i++){
        fact = fact * i;   
    }
    printf("%d \n", fact);
    */

    /*
    int i = 1, n = 8;
    do{
        printf("Repeat the number %d \n", n);
        i++;
    }while(i <= n);
    */

    // number is prime or not using loop--->
    int number, i;
    printf("Enter the number to chack whether number is prime or not: \n");
    scanf("%d", &number);
    
    for(i=2; i<=number-1; i++)
        if (number%i==0)

            break;

    if(i==number){
        printf("Number is Prime \n");
    }
    else
    {
        printf("Number is not Prime \n");
    }

    // implement 10 using any loop--->

    /*
    int i = 1, n = 10;
    while (i <= n)
    {
        printf("%d \n", n);
        i++;
    }
    */
    
    return 0;
}