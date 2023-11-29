#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	int result;
	int alphabet = 0;
	int numbers = 0;
	int characters = 0;
	do{
		printf("**********MENU**********\n");
		printf("1. Nhap vao chuoi ky tu.\n");
		printf("2. In ra do dai chuoi va noi dung vua nhap.\n");
		printf("3. In ra chuoi dao nguoc.\n");
		printf("4. In ra so luong chu cai trong chu.\n");
		printf("5. In ra so luong chu so trong chuoi.\n");
		printf("6. In ra so luong ky tu dac biet trong chuoi.\n");
		printf("7. Thoat.\n");
		printf("Lua chon cua ban la: ");
		int choice;
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("Nhap mot chuoi ky tu bat ky:\n");
				fflush(stdin);
				gets(str);
				break;
			case 2:
				result = strlen(str);
				printf("Do dai cua chuoi vua nhap la: %d\n", result);
				printf("Noi dung cua chuoi vua nhap la: %s\n", str);
				break;
			case 3:
				printf("Chuoi dao nguoc la: %s\n", strrev(str));
				break;
			case 4:
				for(int i = 0; i < strlen(str); i++){
					if(isalpha(str[i])){
						alphabet++;
					}
				}
				printf("So luong chu cai trong chuoi la: %d\n", alphabet);
				break;
			case 5:
				for(int i = 0; i < strlen(str); i++){
					if(isdigit(str[i])){
						numbers++;
					}
				}
				printf("So luong chu so trong mang la: %d\n", numbers);
				break;
			case 6:
				for(int i = 0; i < strlen(str); i++){
					if(!isalnum(str[i])){
						characters++;
					}
				}
				printf("So luong ky tu dac biet trong chuoi la: %d\n", characters);
				break;
			case 7:
				exit(0);
			default:
				printf("Vui long chon tu 1-7.\n");					
		}
	}while(1 == 1);
	return 0;
}
