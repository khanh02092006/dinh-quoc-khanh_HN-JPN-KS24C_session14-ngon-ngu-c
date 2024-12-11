#include <stdio.h>
#include <string.h> 

int main() {
    char chuoi[] = " hello world";
    char kytu; 
    int dem = 0;

    printf("Chu?i dã khai báo: %s\n", chuoi);

    printf("Nh?p vào m?t ký t? b?t k?: ");
    scanf(" %c", &kytu);

    for (int i = 0; chuoi[i] != '\0'; i++) {
        if (chuoi[i] == kytu) { 
            dem++;
        }
    }

    printf("Ký t? '%c' xu?t hi?n %d l?n trong chu?i.\n", kytu, dem); 

    return 0;
}

    
