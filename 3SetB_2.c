#include <stdio.h>
void display_next_chars(char ch, int n) {
    printf("The next %d characters after '%c' are: ", n, ch);
    
    for (int i = 1; i <= n; i++) {
        printf("%c ", ch + i);
    }
    printf("\n");
}

int main() {
    char start_char;
    int n;

    printf("Enter a starting character: ");
    scanf(" %c", &start_char);

    printf("Enter how many next characters to display (N): ");
    scanf("%d", &n);

    display_next_chars(start_char, n);

    return 0;
}