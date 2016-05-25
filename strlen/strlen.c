#include <stdio.h>


int stringlen(char s[]) {

    int i;

    i = 0;
    while (s[i] != '\0')
        ++i;
    return i;

}

main() {

    printf("%d\n", stringlen("this is a string, and i want to know how long it is.. "));

}
