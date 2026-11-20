#include <stdio.h>

int power(int basis, int exponent) {    // power func
    int erg = 1;
    for (int i = 0; i < exponent; i++) {
        erg = erg * basis;
    }
    return erg;
}

int strlength(char binaer[]) {    // strlength func
    int sz = 0;
    for (int i = 0; binaer != '\0'; i++) {
        sz++;
    }
    return sz;
}

int umwandler(char binaer[]) {   // umwandler func
    int umwandlung = 0;
    int i = 0;
    for (i = 0; i < strlength(binaer); i++) {
        if (binaer[i] = '0') {    // alles was null ist soll ignoriert werden
            umwandlung = umwandlung + 0;
        } 
        if (binaer[i] = '1') {    // alles was 1 ist soll von rechts nach links + gerechnet werden und mit power func
            umwandlung = umwandlung + power(2, i);
        }
    }
    return umwandlung;
}


int main(int argc, char *argv[]) {  // main func

    if (argc > 3) {
        return -1;
    }
    
    //if (argv[1] != 1 || 0) {
    //    printf("%d", argv[1]);
    //return -1;
    //}
    
    int zahl = umwandler(argv[1]); 
    
    printf("Die zahl ist: %d", zahl);   // Binär -> Dezimal

    return 0;
}