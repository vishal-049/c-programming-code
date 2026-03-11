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
        int sorted = 1;
        for (int j = 0; j < C - 1; j++) {
            if (mat[i][j] > mat[i][j+1]) {
                sorted = 0;
                break;
            }
        }
        if (sorted)
	{count++;
}
    }
    printf("%d\n", count);
    return 0;
}