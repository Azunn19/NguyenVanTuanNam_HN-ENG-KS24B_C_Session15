#include<stdio.h>
#include<string.h>
int check(char n, char text[]){
	int Length = strlen(text);
	for (int i = 0;i < Length;i++){
		if(text[i] == n){
			return 0;
		}
	}
	return 1;
}
int main(){
    char text[] = "Hello world";
    char checked[50];
    int index = 0;
    int Length = strlen(text);
    for (int i = 0;i < Length;i++){
    	int count = 0;
    	if(check(text[i], checked)){
    		for (int j = i;j < Length;j++){
    			if(text[i] == text[j]){
    				count++;
				}
			}
			printf("%c xuat hien %d lan\n",text[i],count);
			checked[index] = text[i];
			index++;
		}
	}
	
	return 0;
}

