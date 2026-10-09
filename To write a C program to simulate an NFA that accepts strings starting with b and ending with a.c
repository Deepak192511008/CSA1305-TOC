
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    if (len >= 2 && str[0] == 'b' && str[len - 1] == 'a') {
        printf("String is accepted by NFA");
    } else {
        printf("String is rejected by NFA");
    }

    return 0;
}
Enter a string: bba
String is accepted by NFA
