#include <stdio.h>
int check_char(char ch) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        return 1;
    } else if (ch >= '0' && ch <= '9') {
        return 2;
    } else {
        return 3;
    }
}

int main() {
    char ch;
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter characters one by one. Enter '.' (dot) to stop:\n\n");

    while (1) {
        printf("Enter a character: ");
        scanf(" %c", &ch);

        if (ch == '.') {
            break;
        }

        int type = check_char(ch);

        if (type == 1) {
            alphabets++;
        } else if (type == 2) {
            digits++;
        } else if (type == 3) {
            special++;
        }
    }

    printf("Total Alphabets      : %d\n", alphabets);
    printf("Total Digits         : %d\n", digits);
    printf("Total Special Symbols: %d\n", special);

    return 0;
}