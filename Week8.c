
#include<stdio.h>

char str[100];
int cnt;

char *p;
int main()
{
    p = str;

    scanf("%s",str);

    while(*p != '\0')
    {
        p++;
        cnt++;
    }
    cnt--;
    for(int i=cnt;i>=0;i--)
    {
        if(str[i]=='a')
            printf("0");
        else if(str[i]=='e')
            printf("1");
        else if(str[i]=='i')
            printf("2");
        else if(str[i]=='o')
            printf("3");
        else if(str[i]=='u')
            printf("4");
        else
            printf("%c",str[i]);
    }
        printf("aca");

}
