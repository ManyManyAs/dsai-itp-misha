#include <stdio.h>

void copy(char *ap, char *bp) {
    *ap = *bp;
}
int main() {
    char a[100] = "picun", *ap = a;
    char b[100] = "huy", *bp = b;
    copy(ap, bp);
    while(*ap != '\0') {
        copy(++ap, ++bp);
    }
    printf("%s", a);
    return 0;
}