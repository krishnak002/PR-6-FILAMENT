#include<stdio.h>
#include<string.h>

int main()
{
    int frequency[122] = {0};
    char str[20];

    printf("Enter Your String: ");
    scanf("%s",str);

    for(int i = 0;str[i] != '\0'; i++)
    {
        frequency[str[i]]++;
    }

    for (int i = 0; i < 122; i++)
    {
       if (frequency[i] > 0)
       {
            printf("\n%c => %d",i,frequency[i]);
       }
       
    }

    return 0;
}