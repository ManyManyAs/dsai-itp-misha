#include <stdio.h>

void input(int r, int c, int p[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", *(p + i) + j);
        }
    }
}

void print(int r, int c, int p[r][c]) {
    for (int i = 0; i<r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", *(*(p + i) + j));
        printf("\n");
    }
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];

    input(r, c, arr);
    print(r, c, arr);
    return 0;
}
