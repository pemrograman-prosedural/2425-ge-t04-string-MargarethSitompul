// NIM - Name
// NIM - Name

#include <stdio.h>
#include <string.h>

int main(int _argv, char **_argc) {
    char msk[61];
    int i;

    fgets(msk, 61, stdin);

    for (i = 0; i < strlen(msk) - 1; i++) {
        printf("%03d", msk[i]);
    }

    return 0;
}
