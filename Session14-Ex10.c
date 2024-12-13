#include <stdio.h>
#include <string.h>
void countCharacters(char str, int Length) {
    printf("Ky tu va so lan xuat hien:\n");
    for (int i = 0; i < Length; i++) {
        if (str[i] > 0) {
            printf("%c: %d\n", i, frequency[i]);
        }
    }
}

int main() {
    char str[] = "Hello world";
    int Length = strlen(str);
    countCharacters(str,Length);

    return 0;
}
