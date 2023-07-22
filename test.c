#include<stdio.h>
#include<string.h>

int main ()
{
    char s[100],s1[100];
    int d;
    
    scanf("%s",&s);
    printf("%s", s);

    strcpy(s1,s);
    strrev(s1);
    d=strcmp(s1,s);
    if(d==0)
        printf("YES\n");

    if(d==1)
    printf("NO\n");
    return 0;

}