#include<stdio.h>
int main(){
	int number1, number2, number3;
	int max, min;
	printf("Nhap 3 so nguyen: ");
	scanf("%d %d %d",&number1,&number2,&number3);
	number1=max=min;
	max=(number1<number2)? number2:max;
	max=(number2<number3)? number3:max;
	printf("So lon nhat la: %d\n",max);
	min=(number1>number2)? number2:min;
	min=(number2>number3)? number3:min;
    printf("So nho nhat la: %d\n",min);
}
