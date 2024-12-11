#include <stdio.h>
#include <string.h>

int main() {
    char chuoi[100];
    int dem = 0;
    int i;

    printf("Nhap vào chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    chuoi[strcspn(chuoi, "\n")] = 0;

   
    for (i = 0; i < strlen(chuoi); i++) {
        
        if (chuoi[i] != ' ' && (i == 0 || chuoi[i - 1] == ' ')) {
            dem++; 
        }
    }

    
    printf("S? t? trong chu?i: %d\n", dem);

    return 0;
}
		
