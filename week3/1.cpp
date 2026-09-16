#include <stdio.h>

int main(){
    int a, b=1, c=1,y;
    scanf("%d", &a);
    y = a;
    for(int i=0; i<a;i++){
        y-=1;
        for(int o=0;o<y; o++){
            printf(" ");
        }
        for(int j=0;j<b; j++){
            printf("%d", c);
            c+=1;
        }
        printf("\n");
        b+=1;
    }
}

