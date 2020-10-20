#include<stdio.h>
int main(){
    int num,i ,count=0;
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if((num%i)==0){
             count++; 
        }
    }
     printf("%d",count);
    return 0;
}