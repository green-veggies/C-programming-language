#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "AbCd123";
    char chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int password_length = strlen(password);
    int chars_length = strlen(chars);
    char attempt[password_length + 1];
    int i, j, k, l;

    for (i = 0; i < chars_length; i++) {
        for (j = 0; j < chars_length; j++) {
            for (k = 0; k < chars_length; k++) {
                for (l = 0; l < chars_length; l++) {
                    attempt[0] = chars[i];
                    attempt[1] = chars[j];
                    attempt[2] = chars[k];
                    attempt[3] = chars[l];
                    attempt[4] = '\0';
                    if (strcmp(attempt, password) == 0) {
                        printf("Password found: %s\n", attempt);
                        return 0;
                    }
                }
            }
        }
    }

    printf("Password not found\n");
    return 0;
}
