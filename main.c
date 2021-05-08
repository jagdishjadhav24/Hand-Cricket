#include <stdio.h>
#include "main.h"

int main()
{
    int x;
    system("cls");
    system("color 0A");
    printf("1. Play Game \n2. How To PLay? \n3. About \nEnter Your Choice: \n");
    scanf("%d", &x);
    switch(x){
        case 1:
            toss();
            break;
        case 2:
            how();
            break;
        case 3:
            about();
            break;
    }
}