#include<stdio.h>
#include<math.h>

int main(){
    
    int Tom;
    int error_code;
    // double f = 111111111;
    // printf("The value of double is: %d \n",f);

    // variables
    /*
    int a = 10;
    float b = 99.9;
    char c = 's';
    int d = 20;
    int e = 20+15;

    printf("The value of a + d is: %d \n",a + d);
    printf("The sum of variable e is: %d \n",e);
    printf("The value of float b is: %f \n",b);
    printf("The value of character c is: %c \n",c);
    printf("The value of int a is: %d \n",a);
    */

    // question--> Create a program to add two numbers in C
    /*
    int num_1 = 25;
    int num_2 = 35;
    
    int sum = num_1 + num_2;
    printf("Value of Two numbers is: %d \n",sum);

    // other solution-->
    int Num1 = 25;
    int Num2 = 35;
    
    printf("Value of two number is: %d \n",(Num1+Num2));
    // solved
    */

    // Taking input from user--->
    /*
    int x, y;
    printf("Enter the first value: %d \n");
    scanf("%d", &x);
    printf("Enter the second value: %d \n");
    scanf("%d", &y);

    printf("The sum of first and second is: %d \n",(x + y));
    */

    // Instructions and Operators--->

    /*
    1. Type declartion instruction
    2. Arithmatic instruction
    3. Control instruction
    */
    // 1.

    /*
    float n1 = 10.14;
    float n3 = n1 + 4.86;
    printf("The value of n3 Is: %f \n", n3);
    */

    // 2.   
    /*   
    int a = 12;
    int b = 15;

    printf("The value of a + b Is: %d \n",a+b);
    printf("The value of a - b Is: %d \n",a-b);
    printf("The value of a * b Is: %d \n",a*b);
    printf("The value of a / b Is: %d \n",a/b);
    printf("4 to the power of 5 Is: %f \n",pow(4, 5));
    printf("The value of 5*5 Is: %d \n",5 * 5);
    printf("The value of 5*4.5 Is: %f \n",5 * 4.5);
    */
    
    /*
    float k = 3.0/9;
    printf("%f",k);
    */
    
    // Operator precedence--->
    // priority     operators
    /*
        1st         * / %
        2nd         + -
        3rd         =
    */

   // 3.

   /*
   1.sequence control instuction
   2.decision control instruction
   3.loop control instruction
   4.case control instruction
   */

    // conditional statment--->
    // 1. if-else
    // 2. switch case

    // odd or even program
    /*
    int a, b;
    printf("Input the number %d \n");
    scanf("%d", &a);

    if(a%2==0){
        printf("%d is even \n", a);
    }
    else{
        printf("%d is odd \n", a);
    }
    */

    // drive program

    /*
    int age;
    printf("Enter your age: %d \n");
    scanf("%d", &age);

    if(age <= 80 && age >= 18){
        printf("You are above 18 age and below 70 you can drive \n");
    }
    else{
        printf("You can not drive \n");
    }
    */

   /*
   int age, b = 0;
   printf("Enter Your age to chack that can you drive or not? %d \n");
   scanf("%d", &age);

   if((age <= 80) && (age >= 18) || (b == 1))
    {
        printf("You can drive... ");
    }
    else
    {
        printf("You can not drive... ");
    }
    */

    // else-if--->
    /*
    int number;

    printf("Enter the number %d \n");
    scanf("%d",&number);

    if (number == 1)
    {
        printf("The number is 1 \n");
    }
    else if (number == 2)
    {
        printf("The number is 2 \n");
    }
    else if(number == 3)
    {
        printf("The number is 3 \n");
    }
    else
    {
        printf("it's not 1, 2, or 3 number! \n");
    }
    */

    // switch-case statement--->
    /*
    int rating;

    printf("Enter your rating %d \n");
    scanf("%d", &rating);

    switch(rating){

        case 1:
             printf("Your rating is 1 \n");
        break;

        case 2:
             printf("Your rating is 2 \n");
        break;

        case 3:
            printf("Your rating is 3 \n");
        break;

        case 4:
            printf("Your rating is 4 \n");
        break;

        case 5:
            printf("Your rating is 5 \n");
        break;

        default:
            printf("Your rating is invalid! \n");
        break;
    }
    */
   
    // question:- write a program to find grade of a student given his marks based on below--->

    /*

    int marks;
    printf("Enter the marks to chack grade %d \n");
    scanf("%d", &marks);

    if (marks>100 || marks<0)
    {
        printf("Number is invalid \n");
    }
    else
    {
        switch(marks/10){

            case 10:
            case 9:
                printf("Grade is A \n");
            break;

            case 8:
                printf("Grade is B \n");
            break;

            case 7:
                printf("Grade is C \n");
            break;

            case 6:
                printf("Grade is D \n");
            break;

            case 5:
                printf("Grade is E \n");
            break;

            default:
                printf("Your Grade is F or Fail! \n");
            break;
            
        }
    }
    */
   
    return 0;
}