#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int aranan;
    int bulundu = 0; 

    printf("Aramak istediginiz sayiyi giriniz: ");
    scanf("%d", &aranan);

    for (int i = 0; i < 5; i++) {
        if (a[i] == aranan) {
            bulundu = 1;
            break;
        }
    }

    if (bulundu == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}