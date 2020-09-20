#include<stdio.h>
int main(){
    int watermelon,people,remain;
    scanf ("%d %d",&watermelon,&people);
    remain = watermelon % people;
    printf("%d",remain);
    return 0;
}
