#include <stdio.h>

#define IN  1
#define OUT 0

main() {

    int c, state;

    state = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            state = OUT;
            putchar('\n');
        }
        else if (state = IN) {
            putchar(c);
        }            
    }     
}
