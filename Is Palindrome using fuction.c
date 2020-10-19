#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[100];
    gets(a);
    strcpy(b,a);//copying input string
    strrev(b); //reversing the string
    if(strcmp(a,b)==0) //comparing input string with reverse string
        printf("yes\n");
    else
    {
        printf("No\n");
    }
    return 0;
    

}
