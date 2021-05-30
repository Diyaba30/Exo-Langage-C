#include<stdio.h>
man(){

    int a;
    printf("entrer une valeur entiere\n");
    scanf("%d",&a);
    if(a%2==0)
        printf("%d est paire",a);
    if(a%2!=0)
        printf("%d est impaire",a);
}
