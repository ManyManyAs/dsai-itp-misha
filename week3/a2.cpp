#include <stdio.h>

int main(){
    int dlina, picun;
    int spisok[1000] = {0};
    scanf("%d", &dlina);
    for(int o=0;o<dlina;o++){
        scanf("%d", &picun);
        if(spisok[picun] == 0){
            spisok[picun] = 1;
            printf("%d ", picun);
        }
    }
}