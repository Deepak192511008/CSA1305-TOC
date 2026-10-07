#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int state = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        switch (state)
        {
            case 0:
                if (str[i] == 'a')
                    state = 1;
                else
                    state = 2;
                break;

            case 1:
                if (str[i] == 'a')
                    state = 1;
                else
                    state = 3;
                break;

            case 2:
                state = 2;
                break;

            case 3:
                if (str[i] == 'a')
                    state = 1;
                else
                    state = 3;
                break;
        }
    }

    if (state == 1)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
