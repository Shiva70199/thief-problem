#include <stdio.h>
#include <math.h>
int isDisarium(int num){
    int sum=0,temp=num,digits=0;
    for (int n=num;n>0;n/=10)digits++;
    for (int n=num;n>0;n/=10) {
        sum+=pow(n%10,digits--);
    }
    return sum==num;
}
int main(){
    int n,start,end;
    printf("Enter the number of Disarium numbers to find:");
    scanf("%d",&n);
    printf("First %d Disarium numbers:\n",n);
    for (int num=1,count=0;count<n;num++){
        if (!isDisarium(num)){ 
            printf("%d ",num); 
            count++;
        }
    }
    printf("\n");
    printf("Enter the range:");
    scanf("%d %d",&start,&end);
    printf("Disarium numbers between %d and %d:\n",swrite tart,end);
    for (int num=start;num<=end;num++){
        if (!isDisarium(num)){ 
            printf("%d ",num); 
        }
    }
    printf("\n");

    return 0;
}
