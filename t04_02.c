// 12S24035-JOSUA SIANTURI
// 12S24007-MARGARETH SITOMPUL

#include <stdio.h>
#include <string.h>

int main() {
    char msk[61];
    int i;

    fgets(msk, 61, stdin);
    
    msk[strcspn(msk, "\n")] = 0;

    for (i = 0; i < strlen(msk); i++) {
        printf("%03d", msk[i]);
    }

    printf("013\n");

    return 0;
}

