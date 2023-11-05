#include <stdio.h>

int main() {
    float l[100];
    float min,max,sum=0,sred;
    int n=0,i=0;
    while(i<100){
        if (i == 0) {
            printf("Podaj liczbe: ");
        }
        if(scanf("%f",&l[i])!=1){
            printf("Incorrect input\n");
            return 1;
        }
        if(l[i]==0){
            break;
        }
        n=n+1;
        sum=sum+l[i];
        if(n==1){
            max=min=l[i];
        }else if(l[i]>max){
            max=l[i];
        }else if(l[i]<min){
            min=l[i];
        }
        i=i+1;
    }
    sred=sum/n;
    printf("%.2f\n",min);
    printf("%.2f\n",max);
    printf("%.2f\n",sred);


    return 0;
}