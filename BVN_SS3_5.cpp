#include<stdio.h>
int main(){
	int number,a,b,c,d;
	printf("Nhap so co 4 chu so: ");
	scanf("%d",&number);
	a=number/1000;
	b=(number%1000)/100;
	c=(number%100)/10;
	d=number%10;
	int sum=a+b+c+d; 
	printf("Tong cac so la: %d\n ",sum);
	printf("So dao nguoc la: %d%d%d%d",d,c,b,a);
}
