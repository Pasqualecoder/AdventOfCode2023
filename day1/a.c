#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int concatDigits(char a, char b) {
    int n1 = a - '0';
    int n2 = b - '0';
    return 10 * n1 + n2;
}

int main() {
    char string[255];
    int sum = 0;

    while (scanf("%s", string) != EOF) {
        char firstN = -1, lastN = -1;
        char c = 'a';
        for (int i = 0; (c = string[i]) != '\0'; i++) {
            if (isdigit(c)) {
                if (firstN == -1) {
                    firstN = c;
                }
                else {
                    lastN = c;
                }
            }
        }
        if (lastN == -1) lastN = firstN;
        sum += concatDigits(firstN, lastN);
    }
    
    printf("%d\n", sum);
    return 0;
}