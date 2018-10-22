#include <stdio.h>
#include <mem.h>

char chuoi[5] = {'a', 'e', 'i', 'o', 'u'};
char string[50];
int idai, idem[5] = {0, 0, 0, 0, 0};
float iphantram[5];

float tinh(int ia, int idai) {
    return (float) ia * 100 / idai;
}

void dem(int k) {
    for (int i = 0; i < idai; i++) {
        if (string[i] == chuoi[k]) {
            idem[k]++;
        }
    }
}

int main() {

    printf("Enter string:");
    gets(string);
    idai = strlen(string);


    idai = strlen(string);

    for (int j = 0; j < 5; ++j) {
        dem(j);
    }

    for (int i = 0; i < 5; i++) {
        iphantram[i] = tinh(idem[i], idai);
    }

    printf("number of characters:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c: %d; ", chuoi[i], idem[i]);
    }
    printf("\nPercentages of total:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c: %.2f%c; ", chuoi[i], iphantram[i],'%');
    }
    return 0;
}

