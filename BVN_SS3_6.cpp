#include<stdio.h>
int main(){
	int year=2023,yearBirth;
	int even,odd;
	printf("Nhap nam sinh cua ban: ");
	scanf("%d",&yearBirth);
	int age=year-yearBirth;
	printf("Tuoi cua ban la: %d\n",age);
	even=(age%2=0)? 'chan':even;
	odd=(age%2!=0)? 'le':odd;
	print("Tuoi cua ban la %d",even,odd);
}
