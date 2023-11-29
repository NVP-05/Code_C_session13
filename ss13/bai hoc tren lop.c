#include<stdio.h>
#include<string.h>
int main(){
//	char sentence[] = "Hello world !"; // mang ky tu
//	char sentence2[] = {'H', 'e', 'l', 'l', 'o', '\0' };
//	int size = sizeof(sentence) / sizeof(char);
//	for(int i = 0; i < size; i++){
//		printf("%d. %c \n", i, sentence[i]);
//	}

//	char str[11] = "Hello World";
//	printf("%s\n", str);
//	str[0] = 'Y';
//	printf("%s\n", str);
//	printf("%s\n",str);
//	printf("%s\n", &str[5]);
//	printf("%.4s\n", str);

//	char str[10];
//	printf("Nhap mot chuoi ky tu ngau nhien: \n");
//	scanf("%s", str);
//	printf("%s", str);
	
//	char str[10];
//	printf("Nhap vao 1 chuoi ky tu ngau nhien : \n");
//	gets(str);
//	puts(str);
	
	char str1[] = "abc";
	char str2[] = "nambucu";
//	strcat(str1, str2);
	strcpy(str1, str2);
	int result = strlen(str1);
	printf("%d", result);
	
	return 0;
}
