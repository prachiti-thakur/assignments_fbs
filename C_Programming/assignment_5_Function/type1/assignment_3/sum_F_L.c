//sum of first and last digit of the number 
#include<stdio.h>
void sum_F_L();
void main(){
	
	sum_F_L();//call
	
}

void sum_F_L(){
	int num;
	
	printf("Enter the num");
	scanf("%d",&num);
	
	int O_num=num;
	int last_digit,first_digit,rem,sum=0;
	last_digit=num%10;
	printf("\nlast %d",last_digit);
	
	while(num>0){
		rem=num%10;
		num=num/10;
	}
	first_digit=rem;
	printf("\nfirst %d",first_digit);
	
	sum=first_digit+last_digit;
	
	printf("\nThe sum of last and first digit of the num %d is %d",O_num,sum);
}