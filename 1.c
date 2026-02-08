
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void reverse(char *bin, int left, int right) {
    while (left < right) {
        char temp = bin[left];
        bin[left] = bin[right];
        bin[right] = temp;
        left++;
        right--;
    }
}
char* decToBinary(int n) {
    int index = 0;
    char* bin = (char*) malloc(32 * sizeof(char));

    while (n > 0) {
        int bit = n % 2;
        bin[index++] = '0' + bit;
        n /= 2;
    }
    bin[index] = '\0';

    // Reverse the binary string
    reverse(bin, 0, index-1);
      return bin;
}
 DECtoDisplay(int n){
     struct displays
     int a, b, c, d, e, f;

    a = n / 100000;
    b = (n / 10000) % 10;
    c = (n / 1000) % 10;
    d = (n / 100) % 10;
    e = (n / 10) % 10;
    f = n % 10;
    displays.displayA=DECtoDisplayBOOL(a);
    displays.displayB=DECtoDisplayBOOL(b);
    displays.displayC=DECtoDisplayBOOL(c);
    displays.displayD=DECtoDisplayBOOL(d);
    displays.displayE=DECtoDisplayBOOL(e);
    displays.displayF=DECtoDisplayBOOL(f);

    return displays;

 }
 DECtoDisplayBOOL(int a){
     bool A, B, C, D, E, F, G;
     struct result;
   switch(a){
         case 1:
            A=false;
            B=true;
            C=true;
            D=false;
            E=false;
            F=false;
            G=false;
         break;
         case 2:
            A=true;
            B=true;
            C=false;
            D=true;
            E=true;
            F=false;
            G=true;
         break;
         case 3:
            A=true;
            B=true;
            C=true;
            D=true;
            E=false;
            F=false;
            G=true;
         break;
         case 4:
            A=false;
            B=true;
            C=true;
            D=false;
            E=false;
            F=true;
            G=true;
         break;
         case 5:
            A=true;
            B=false;
            C=true;
            D=true;
            E=false;
            F=true;
            G=true;
         break;
         case 6:
            A=true;
            B=false;
            C=true;
            D=true;
            E=true;
            F=true;
            G=true;
         break;
         case 7:
            A=true;
            B=true;
            C=true;
            D=false;
            E=false;
            F=false;
            G=false;
         break;
         case 8:
            A=true;
            B=true;
            C=true;
            D=true;
            E=true;
            F=true;
            G=true;
         break;
         case 9:
            A=true;
            B=true;
            C=true;
            D=true;
            E=false;
            F=true;
            G=true;
         case 0:
            A=true;
            B=true;
            C=true;
            D=true;
            E=true;
            F=true;
            G=false;
         break;
         default:
            A=false;
            B=false;
            C=false;
            D=false;
            E=false;
            F=false;
            G=false;
     }
    result.A=A;
    result.B=B;
    result.C=C;
    result.D=D;
    result.E=E;
    result.F=F;
    result.G=G;
    return result;
 }
int main() {
    int n = 10;
    char* bin = decToBinary(n);

    printf("%s", bin);
    return 0;
}