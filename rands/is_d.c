#include <stdio.h>
#include <ctype.h>

main() {

    int c, d;

    c = '5';
    d = c >= '0' && c <= '9';

    printf("%d\n%d\n", d, isdigit(c));

}
