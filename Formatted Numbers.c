#include<stdio.h>
#include<string.h>

char int_to_char (int x);
int main() {
    int num,i=0,j,k,count =0;
    char array[16];
    scanf("%d",&num);
    if(num ==0){
    printf("0\n");
    }
    else{
        while (num)
        {
            k=num%10;
            num =num /10;
            array[i]=int_to_char(k);
            i++;
            count++;
            if(count==3 && num>0){
                array[i]=',';
                count=0;
                i++;
            }
        
        }
        array[i]='\0';
        for(j=i-1;j>=0;j--){
            printf("%c",array[j]);
        }
        printf("\n");
        
    }

    return 0;
}
char int_to_char(int x){
    if(x==1)return'1';
    else if (x==2)return'2';
    else if (x==3)return'3';
    else if (x==4)return'4';
    else if (x==5)return'5';
    else if (x==6)return'6';
    else if (x==7)return'7';
    else if (x==8)return'8';
    else if (x==9)return'9';
    else return'0';
}