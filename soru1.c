/*

Aşağıdaki kodun algoritması ve sözdizimi benim tarafımdan yazılmıştır. Kodun çalışmadığı kısımlarda yapay zekadan yardım isteyerek denilen yerleri düzelttirdim. Nerelerde yapay zeka kullanıldığını
yazdım. Onun dışındaki her şey benim tarafımdan yazılmıştır ve mantığı kurulmuştur. Ayrıca ek açıklamalar da koydum.

*/


#include <stdio.h>
#include <math.h>
#include <stdlib.h> //exe dosyasının kullanılması için. Dev-C++'dan öğrendim.

double kok_bulma1(int a1, int b1, int c1);
double kok_bulma2(int a2, int b2, int c2);

int main() {

    int a = 0;
    int b = 0;
    int c = 0;


    printf("a, b ve c'nin degerlerini sirasiyla giriniz(aralarina bosluk birakiniz): ");
    scanf("%d%d%d", &a, &b, &c);

    //eğer negatif sayı girilirse artı işareti kalmasın diye if-else ifadesi kullandım.

    if (b < 0 && c >= 0){

         printf("Denkleminiz: %dx^2 %dx + %d\n\n", a, b, c);

    }
    else if (b >= 0 && c < 0){
    
        printf("Denkleminiz: %dx^2 + %dx %d\n\n", a, b, c);
    

    }
    else if (b < 0 && c < 0){

        printf("Denkleminiz: %dx^2 %dx %d\n\n", a, b, c);

    }
    else{

        printf("Denkleminiz: %dx^2 + %dx + %d\n\n", a, b, c);

    }

    if (isfinite(kok_bulma1(a, b, c)) && isfinite(kok_bulma2(a,b,c))) { //isfinite fikrini yapay zekadan aldım.

        printf("Denkleminizin kokleri: ");
        printf("%lf, %lf", kok_bulma1(a, b, c), kok_bulma2(a, b, c));
        printf("\n\n");

    }
    else {
        printf("Denkleminizin reel koku yoktur.\n\n");

    }
    system("PAUSE");
    return 0; 


}

double kok_bulma1(int a1, int b1, int c1) {
    
    double kok1 = (-b1 + pow(pow(b1,2) - 4*a1*c1, 1.0/2.0))/(2*a1); //burada tam sayı bölmesi yapamadığını yapay zekadan öğrendim. o yüzden 1.0/2.0 yaptım.
    double kok2 = (-b1 - pow(pow(b1,2) - 4*a1*c1, 1.0/2.0))/(2*a1);

    return kok1; //returnun sadece bir değer döndürebildiğini yapay zekadan öğrendim.

}

double kok_bulma2(int a2, int b2, int c2) {

    double kok2 = (-b2 - pow(pow(b2,2) - 4*a2*c2, 1.0/2.0))/(2*a2);
}

