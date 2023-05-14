// #include<stdio.h>
// int factorial(int x);

// int main(){
//     int a = 5;
//     printf("Factorial is %d\n", factorial(a));

//     return 0;
// }
// int factorial(int x){
//     if (x==1 || x==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return x * factorial(x-1);
//     }

// }

#include<stdio.h>

int factorial(int x);

int main(){
    int a;
    printf("Enter the value for factorial: \n");
    scanf("%d", &a);

    printf("factorial is %d\n", factorial(a));

    return 0;
}

int factorial(int x){
    if (x==0 || x==1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x-1);
    }

}

























