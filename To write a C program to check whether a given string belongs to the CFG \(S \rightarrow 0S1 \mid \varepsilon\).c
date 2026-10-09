#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string (use 0 and 1): ");
    scanf("%99s", str);

    len = strlen(str);

    if (len == 0) {
        printf("Accpeted");
        return 0;
    }

    if (len % 2 != 0) {
        printf("Rejected");
        return 0;
    }

    for (i = 0; i < len / 2; i++) {
        if (str[i] != '0' || str[len - 1 - i] != '1') {
            printf("Rejected");
            return 0;
        }
    }

    printf("Accpeted");

    return 0;
}


Enter a string (use 0 and 1): 0011
Accpeted
