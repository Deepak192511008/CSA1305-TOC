
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string (use 0 and 1): ");
    scanf("%99s", str);

    if (strstr(str, "101") != NULL)
        printf("Accpeted");
    else
        printf("Rejected");

    return 0;
}

Enter a string (use 0 and 1): 11010
Accpeted
