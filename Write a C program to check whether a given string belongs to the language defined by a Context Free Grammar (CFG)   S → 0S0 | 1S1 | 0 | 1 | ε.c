#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, j, flag = 1;

    printf("Enter string: ");
    scanf("%s", s);

    i = 0;
    j = strlen(s) - 1;

    while(i < j)
    {
        if(s[i] != s[j])
        {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if(flag)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}

Output
Enter string: 01101
Accepted
