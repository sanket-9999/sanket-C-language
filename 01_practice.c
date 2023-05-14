#include<stdio.h>

int main(){
    // 1.0
    // area calculation of rectangle--->
    
    int lenght = 3, breadth = 8;
    int area = lenght * breadth;
    printf("The area of thid rectangle is: %d \n",area); 

    //tacking input from user to area calculation for rectangle--->
    /*
    int N_lenght, N_breadth;
    
    printf("Enter Lenght of the rectangle: %d \n");
    scanf("%d", &N_lenght);
    printf("Enter Breadth of the rectangle: %d \n");
    scanf("%d", &N_breadth);
    int N_area = N_lenght * N_breadth;
    printf("The Area of Your Rectangle Is: %d \n",N_area);
    */

    // calculation for circle area and modifiy cylinder--->
    
    int radius = 3;
    float pi = 3.14;
    printf("The Area of Circle Is: %f \n",pi*radius*radius);
    int height = 3;
    printf("The volume of Cylinder Is: %f \n",pi*radius*radius*height);
    
    // convert celsius degree temprature to foremheit--->
    float celsius = 37;
    float far = (celsius * 9 / 5) + 32;  // This is a formula for this convertion
    printf("The value of this celsius temprature in Fahrenheit Is: %f \n", far);

    // calculation for simple interest rate--->
    int principal = 100, rate = 4, years = 1;
    int simple_interest = (principal * rate * years) / 100;

    printf("The value of simple interest Is: %d \n",simple_interest);

    // 2.0

    int v = 3^3;
    printf("power Is: %d \n", v);

    // write a program to determine whether a number is divisible by 97 or not
    /*
    int num;
    printf("Enter the number: %d \n");
    scanf("%d", &num);

    printf("Divisiblity test returns: %d \n",num%97);
    */

    // step by step evaluation of 3*x/y-z+k
    /*
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // 6/3 - 3 + 1
    // 2 - 3 + 1
    // 2 - 3 + 1
    // 0
    printf("The value of result Is: %d \n",result);
   */ 

    // Conditional statement Question--->
    // 2.0.1
    /*
    int physics, chemestry, maths;
    float total;
    
    printf("Enter physics marks: \n");
    scanf("%d", &physics);

    printf("Enter chemestry marks: \n");
    scanf("%d", &chemestry);

    printf("Enter maths mark: \n");
    scanf("%d", &maths);

    total = (physics + chemestry + maths) / 3;

    if ((total<40) || (physics<33) || (chemestry<33) || (maths<33))
    {
        printf("You are fail, and your percantage is: %f \n", total);
    }
    else
    {
        printf("You are pass, and your percantage is: %f \n", total);
    }
    */

    //2.0.2
    // income tax calculation---> if income is less then 250000 = payable tex is 0
                             //   if income is between 250000 to 500000 then payable tex is 5%
                             //   if income is between 500000 to 1000000 then payable tex is 20%
                             //   if income is between 1000000 and above then payable tex is 30%
    /*
    float income;
    float tax=0;

    printf("Enter Your income: \n");
    scanf("%f", &income);

    if(income>=250000 && income<=500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }

    if(income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }

    if(income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    
    printf("You payable tax is %f \n",tax);
    */

    // 2.0.3
    // chacking whether entered character is lower case or not--->
    /*
    char ch;    //97-122 is lower case from ASCCI table 
    printf("Enter the charater \n");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("it is lower case \n");
    }
    else
    {
        printf("it is not lower case \n");
    }
    */

    // leap year or not--->
    /*
    int year;
    printf("Enter the year \n");
    scanf("%d", &year);

    if(year % 400 == 0)
    {
        printf("This is leap year, it has 366 days \n");
    }
    else if (year % 100 == 0)
    {
        printf("This is leap year, it has 366 days \n");
    }
    else if (year % 4 == 0)
    {
        printf("This is leap year, it has 366 days \n");
    }
    else
    {
        printf("This is not leap year, it has 365 days \n");
    }
    */

    // find gratest of four numbers enterd--->
    /*
    int num_1, num_2, num_3, num_4;

    printf("Enter the first number: \n");
    scanf("%d", &num_1);

    printf("Enter the second number: \n");
    scanf("%d", &num_2);

    printf("Enter the third number: \n");
    scanf("%d", &num_3);

    printf("Enter the fourth number: \n");
    scanf("%d", &num_4);

    if (num_1 > num_2 && num_1 > num_3 && num_1 > num_4)
    {
        printf("%d gratest number \n",num_1);
    }
    else if (num_2 > num_1 && num_2 > num_3 && num_2 >num_4)
    {
        printf("%d gratest number \n",num_2);
    }
     else if (num_3 > num_1 && num_3 > num_2 && num_3 > num_1)
    {
        printf("%d gratest number \n",num_3);
    }
     else
    {
        printf("%d gratest number \n",num_4);
    }
    */
                                  
                                   // 3 nunber mate karvano chhe--->
    // solved
    
    int a, b, c;
    printf("Enter a number \n");
    scanf("%d", &a);

    printf("Enter b number \n");
    scanf("%d", &b);

    printf("Enter c number \n");
    scanf("%d", &c);

    if (a>b && a>c)
    {
        printf("a is gratest \n", a);
    }
    else if (b>a && b>c)
    {
        printf("b is gratest \n",b);
    }
    else
    {
        printf("c is gratest \n",c);
    }

    return 0;
}