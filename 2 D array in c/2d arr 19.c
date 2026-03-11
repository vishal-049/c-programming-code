#include <stdio.h>
int main() {
    int R, C;
    scanf("%d %d", &R, &C);
    int mat[R][C];
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &mat[i][j]);
    int count = 0;
    for (int i = 0; i < R; i++) {
        int allUnique = 1;
        for (int j = 0; j < C && allUnique; j++) {
            for (int k = j + 1; k < C && allUnique; k++) {
                if (mat[i][j] == mat[i][k])
                    allUnique = 0;
            }
        }
        if (allUnique) count++;
    }
    printf("%d\n", count);
    return 0;
}