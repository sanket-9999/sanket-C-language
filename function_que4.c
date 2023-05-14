#include<stdio.h>

void namaste();
void bonjour();

int main(){
    char ch;
    printf("Enter F for french or I for india: \n");
    scanf("%c", &ch);

    if(ch == 'i'){
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("Namaste \n");
}

void bonjour(){
    printf("Bonjour \n");
}