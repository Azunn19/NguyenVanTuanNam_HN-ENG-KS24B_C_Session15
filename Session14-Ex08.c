#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char text[] = "hello world";
    int Length = strlen(text);
    for (int i = 0;i < Length;i++){
        if(isalpha(text[i])){
        	if(i == 0){
    		    text[i] = toupper(text[i]);
		    }
		    if(text[i - 1] == ' '){
		    	text[i] = toupper(text[i]);
			}
		}
	}
    printf("%s\n",text);
	return 0;
}

