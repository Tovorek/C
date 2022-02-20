#include <stdio.h>
int main() {
    int n, reverse=0;
    printf("Enter the input=\n");
    scanf("%d", &n);
    printf("Entered input is==%d\n",n);
    while(n!=0){
        reverse = reverse*10 + n%10;
        n=n/10;
    }
    printf(" Output = %d",reverse);
    return 0;


}
