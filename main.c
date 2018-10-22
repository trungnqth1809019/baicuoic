#include <stdio.h>
#include <mem.h>

char cword[5] = {'a', 'e', 'i', 'o', 'u'};
char cword2[5] = {'A', 'E', 'I', 'O', 'U'};
int idem[5];
float iphantram[5];

void nOfcharacters(char s1[]) {
    for (int i = 0; i < 5; i++) {
        while (strchr(s1, cword[i]) == NULL || s1, cword2[i] == NULL) {
            idem[i]++;
        };
    }
}

void pOftotal(char s1[]) {
    int ia;
    ia = strlen(s1);
    for (int i = 0; i < 5; i++) {
        iphantram[i] = idem[i] / ia * 100;
    }
}


int main() {
    char s1[50];
    printf("Enter string:");
    gets(s1);
    nOfcharacters(s1);
    pOftotal(s1);
    printf("number of characters:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c: %d", cword[i], idem[i]);
    }
    printf("Percentages of total:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c: %d", cword[i], iphantram[i]);
    }

    return 0;
}