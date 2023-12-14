#include<stdio.h>
int main(){
	float a;
	printf("nhap so can nang(kg)");
	scanf("%f",&a);
	float b;
	printf("nhap chieu cao(m)");
	scanf("%f",&b);
	float bmi;
	bmi=a/(b*b);
	printf("chi so bmi cua ban la %f",bmi);
	
	if (bmi<18.5){
		printf("ban dang bi thieu can");
	}else if (bmi<25){
		printf("ban dang binh thuong");
	}else if(bmi <30){
		printf("ban dang thua can");
	}else {
		printf("ban dang bi beo phi");
	}
}
