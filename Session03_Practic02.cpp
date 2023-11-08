#include<stdio.h>
int main(){
	float lenght, height;
	printf("Nhap chieu dai hinh chu nhat");
	scanf("%f %f",&lenght,&height);
	float area = lenght*lenght;
	float perimeter = (lenght+lenght)*2;
	printf("Hinh chu nhat cho dien tich la:%.1f va chu vi la:%.1f",area, perimeter);
}
