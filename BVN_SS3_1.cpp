#include<stdio.h>
#include<math.h>
int main(){
	float r;
	const float PI = 3.14;
	printf("Nhap gia tri cua ban kinh: ");
	scanf("Gia tri cua ban kinh la:%d\n",&r);
	float perimeter = 2*PI*r;
	float area =PI*pow(r,2);
	printf("Chu vi hinh tron la: %.2f va dien tich la: %.2f",perimeter, area);
}
