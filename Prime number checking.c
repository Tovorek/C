#include<stdio.h>

int main() {
    int i=0,n,temp=0;
    printf("Enter the number to be checked == \n");
    scanf("%d",&n);
    printf("The entered number is==%d\n",n);
    for(i=2; i<=(n/2); i++){
        if(n%i == 0){
            temp = 1;
            break;
        }

    }
   if(temp==1)
        printf("The number is not a Prime number!!!");
   else
        printf("The number is a Prime number!!");
return 0;

}
