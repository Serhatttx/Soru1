#include <stdio.h>

int main() {
    int dizi[] = { 10, 20, 20, 10, 10, 20, 5, 20 };
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    int i, j, sayac, frekans;

    printf("Elemanlar\tFrekanslar\n");

    for (i = 0; i < boyut; i++) {
        sayac = 1;
        frekans = 0;
        for (j = i + 1; j < boyut; j++) {
            if (dizi[i] == dizi[j]) {
                sayac++;
            }
        }
        if (sayac > 0) {
            frekans = sayac;
            for (j = i + 1; j < boyut; j++) {
                if (dizi[i] == dizi[j]) {
                    dizi[j] = -1; 
                }
            }
            printf("%d\t\t%d\n", dizi[i], frekans);
        }
    }

    return 0;
}
