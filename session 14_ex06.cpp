#include <stdio.h>
#include <ctype.h> 

int main() {
    
    char chuoi[] = "Hello, World! 123"; 
    int dem = 0; 
    int i;

   
    printf("Chu?i dã khai báo: %s\n", chuoi);

    for (i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) { 
            dem++; 
        }
    }

    
    printf("S? ký t? là ch? cái trong chu?i: %d\n", dem);

    return 0;
}
