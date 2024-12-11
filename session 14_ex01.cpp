#include<stdio.h>
#include<string.h>
int main(){
	 char chuoi[100];
	printf(" nhap vao mot chuoi bat ki");
	fgets(chuoi,sizeof(chuoi),stdin);
	chuoi[strcspn(chuoi, "\n")] = 0;
	printf(" chuoi vua nhap:%s\n",chuoi);
	printf(" do dai chuoi%lu\n",strlen(chuoi));
	return 0;
	}
