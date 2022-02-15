#include <stdio.h>

int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float avg = 0.0f;
    
    printf("\nEnter the 10 grades= \n");
    
    
    int i;
    for(i=0; i<count; ++i){
        printf("%2u>", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    avg= (float)sum/count;
    
    printf("\nAverage of the ten grades entered == %.2f\n", avg);
    
    return 0;
    
}
