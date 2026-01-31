#include <stdio.h>
#include <stdlib.h>

int main() {

    int notlar[8] = {0};
    int toplam = 0;       
    float ortalama = 0.0;

    for (int i = 0; i < 8; i++) {
        printf("%d. Notu giriniz: ", i + 1);
        scanf("%d", &notlar[i]);
        toplam += notlar[i];
    }

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (notlar[i] > notlar[j]) {

                int temp = notlar[i]; //geçici değişkeni (temp) yapay zekadan öğrendim. 
                notlar[i] = notlar[j];
                notlar[j] = temp;
            }
        }
    }

    ortalama = (float)toplam / 8; //tür dönüştürme operatörünü yapay zekadan öğrendim. 8 sayısı da bu yüzden otomatik ve geçici olarak float değişkenine dönüşür. 

    printf("\nSiralanmis notlar:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", notlar[i]);
    }
    
    printf("\n\n");

    printf("Sinif Ortalamasi: %.2f\n", ortalama);
    
    system("PAUSE");
    return 0;
}

