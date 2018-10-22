#include <stdio.h>
#include <mem.h>
float tinh(int ia, int idai){
    return     (float) ia * 100 / idai;
    }
int main() {
    char string[50];
    int ia = 0, ie = 0, ii = 0, io = 0, iu = 0, idai;
    printf("Enter string:");
    gets(string);
    idai = strlen(string);
    for (int i = 0; i < idai; i++) {
        if (string[i] == 'a') {
            ia++;
        }
    }
    idai = strlen(string);
    for (int i = 0; i < idai; i++) {
        if (string[i] == 'e') {
            ie++;
        }
    }
    idai = strlen(string);
    for (int i = 0; i < idai; i++) {
        if (string[i] == 'i') {
            ii++;
        }
    }
    idai = strlen(string);
    for (int i = 0; i < idai; i++) {
        if (string[i] == 'o') {
            io++;
        }
    }
    idai = strlen(string);
    for (int i = 0; i < idai; i++) {
        if (string[i] == 'u') {
            iu++;
        }
    }



    printf("number of characters:\n");
    printf(" %c: %d; %c: %d; %c: %d; %c: %d; %c: %d;", 'a', ia, 'e', ie, 'i', ii, 'o', io, 'u', iu);
    printf("\nPercentages of total:\n");
    printf(" %c: %.2f; %c: %.2f; %c: %.2f; %c: %.2f; %c: %.2f ;",'a', tinh(ia,idai), 'e', tinh(ie,idai), 'i',tinh(ii,idai), 'o',tinh(io,idai), 'u', tinh(iu,idai));
    return 0;
}

//
//
