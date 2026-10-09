
#include <stdio.h>

int main() {
    int n, e[10][10] = {0}, i, j, m, a, b;

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &m);

    for (i = 0; i < m; i++) {
        scanf("%d%d", &a, &b);
        e[a][b] = 1;
    }

    for (i = 0; i < n; i++) {
        printf("E-closure(q%d): { q%d ", i, i);
        for (j = 0; j < n; j++)
            if (e[i][j]) printf("q%d ", j);
        printf("}\n");
    }
    return 0;
}


Enter number of states: 3
Enter number of epsilon transitions: 2
0 1 1 2
E-closure(q0): { q0 q1 }
E-closure(q1): { q1 q2 }
E-closure(q2): { q2 }
