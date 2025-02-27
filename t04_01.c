// 12S24035-JOSUA SIANTURI
// 12S24007-MARGARETH SITOMPUL

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str[61];


    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    size_t len = strlen(str);

    
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; 
    }

   
    if (len < 3 || len % 3 != 0) {
        printf("Input tidak valid.\n");
        return 1;
    }

    
    for (size_t i = 0; i < len; i += 3) {
        char asciivalue[4];  
        strncpy(asciivalue, &str[i], 3);
        asciivalue[3] = '\0'; 

        int decimalasciivalue = atoi(asciivalue);
        printf("%c", decimalasciivalue);
    }

    printf("\n");
    return 0;
}
