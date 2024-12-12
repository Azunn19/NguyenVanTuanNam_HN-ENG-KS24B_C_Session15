#include<stdio.h>
#include<string.h>
int main(){
    char text[] = "Hello my gmail is test123@gmail.com";
    int Length = strlen(text);
    int NumCount = 0;
    int TextCount = 0;
    int SpecialCount = 0;
    for (int i = 0;i < Length;i++){
    	if(text[i] >= 'a' && text[i] <= 'z' || text[i] >= 'A' && text[i] <= 'Z'){
    		TextCount++;
		}
		else if (text[i] >= '0' && text[i] <= '9'){
			NumCount++;
		}
		else{
			SpecialCount++;
		}
	}
	printf("So ky tu la chu: %d\n",TextCount);
	printf("So ky tu la so: %d\n",NumCount);
	printf("So ky tu dac biet: %d\n",SpecialCount);
    
	return 0;
}

