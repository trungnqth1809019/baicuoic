#include <stdio.h>
#include <mem.h>

char coutput[60], s1[30], s2[30];

void concat(char s1[], char s2[]) {
    strcat(coutput, s1);
    coutput[strlen(coutput)] = ' ';
    strcat(coutput, s2);
}

int main() {
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);
    concat(s1, s2);
    printf("The concatenated string: %s", coutput);
    return 0;
}
