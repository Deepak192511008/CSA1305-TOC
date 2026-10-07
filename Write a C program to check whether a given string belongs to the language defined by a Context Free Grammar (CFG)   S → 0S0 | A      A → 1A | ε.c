#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i = 0, j, n;

    printf("Enter string: ");
    scanf("%s", s);

    n = strlen(s);
    j = n - 1;

    while (i < j && s[i] == '0' && s[j] == '0')
    {
        i++;
        j--;
    }

    while (i <= j && s[i] == '1')
        i++;

    if (i > j)
        printf("Accepted");
    else
        printf("Rejected");

    return 0;
}


Output
Enter string: 0110
Accepted
