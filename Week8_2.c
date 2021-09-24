#include<stdio.h>
#include<string.h>

char str[100];
char x[5]="aeiou";
int z;
int main()
{
    scanf("%s",str);
    for(int i = strlen(str)-1;i>=0;i--)
    {
        z=5;
        for(int j=0;j<5;j++ )
        {
            if(str[i]==x[j])
               z=j;
        }

        if(z>=5)
            printf("%c",str[i]);
        else
            printf("%d",z);

    }
    printf("aca");
}

