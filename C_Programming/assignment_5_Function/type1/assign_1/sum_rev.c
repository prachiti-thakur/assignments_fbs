////function without parameters without returntype
//accept 3 digit num ,sum the digits and reverse

#include<stdio.h>
//declaration
void sum();
void rev();


void main(){
	
	
		sum();
		rev();
	
}


//defination
void sum(){
	int num=123,sum,rev;
	int r1,r2,r3,q1,q2,q3;
	
	r1=num%10;
	q1=num/10;
	
	r2=q1%10;
	q2=q1/10;
	
	r3=q2%10;
	q3=q2/10;
	
	sum=r1+r2+r3;
	
	
	printf("\nThe sum of the digit is %d ",sum);
	
	
}

void  rev(){
		int num=123,sum,rev;
	int r1,r2,r3,q1,q2,q3;
	
	r1=num%10;
	q1=num/10;
	
	r2=q1%10;
	q2=q1/10;
	
	r3=q2%10;
	q3=q2/10;
	
	
	rev=(r1*100)+(r3*10)+(r3*1);
	
	
	printf("\nThe reverse of the number is %d",rev);
	
}