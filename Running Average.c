#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    double avg,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum = sum +arr[i-1];
        avg = sum/i;
        printf("%.10lf\n",avg);
    }
    return 0;
}
