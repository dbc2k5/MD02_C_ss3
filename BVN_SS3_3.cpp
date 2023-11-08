#include<stdio.h>
int main(){
	float math;
	float eng;
	float lit;
	printf("Nhap so diem toan van anh: ");
	scanf("%f %f %f",&math,&eng,&lit);
	float sum = math+eng+lit;
	float avg = (math+eng+lit)/3;
	printf("Tong diem toan van anh la:%.2f\nDiem trung binh toan van anh la:%.2f",sum,avg);
}
