#include <stdio.h>
#include <string.h> 

int main() {
    char chuoi[] = " hello world";
    for (int i = strlen(chuoi) - 1; i >= 0; i--) { 
        printf("%c", chuoi[i]); 
    }
    return 0;
}

