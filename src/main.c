#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    typedef struct {
        int a;
        char b;
        char* str;
    } identity_t;

int main()
{
    identity_t cin ;
    cin.a = 3;

    printf("hello world !");
    return 0;
    int a , b ;
    printf("la valeur de a ");
    scanf("%d",&a);
    printf("la valeur de b ");
    scanf("%d",&b);
    int z = pow(a,b);
    printf("la puissance est:%d", z);
}



