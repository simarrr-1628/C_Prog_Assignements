#include <stdio.h>
int main() {
    char ch = 'A';

    for (int i = 4; i >= 1; i--) 
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        
        printf("\n");
    }
        

        return 0;
}
    
