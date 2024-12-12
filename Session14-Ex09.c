#include<stdio.h>
#include<string.h>
void DeleteText(char text[], int Length, int value){
	for (int i = 0;i < Length;i++){
    	if(value == text[i]){
    		for (int j = i;j < Length;j++){
    			text[j] = text[j + 1];
			}
		}
	}
	printf("%s\n",text);
}

int main(){
    char text[] = "hello world";
    int Length = strlen(text);
    char value;
    printf("Hay nhap ky tu can xoa: ");
    scanf("%c",&value);
    DeleteText(text, Length, value);
	
	return 0;
}

