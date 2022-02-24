#include<stdio.h>

int main(){
	 int n, reverse = 0, temp;
	 printf("enter the number : \n");
	 scanf("%d",&n);
	 temp = n;
	 while(temp!=0){        
		reverse = reverse*10 + temp%10;        
		temp=temp/10;    
	    }
	 if(reverse == n){
		printf("the given number is a palindrome");
	 }
	 else{
		printf("the given number is not a palindrom");
	 }
  return 0;
 } 
