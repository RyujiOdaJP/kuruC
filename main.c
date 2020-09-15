#include <stdio.h>

int main(void) {
    printf("Hello\tWorld!\n");
    printf("kuruC\ttanoC\n");
    printf("%d+%d=%d円\n",200,100,200+100);
    printf("%f\n", 10.0/3.0);
    int a = 40; //変数宣言は本来先頭でないと動かないが、C99やC++では動く
    int b = 13;
    int division = a / b;
    //    四捨五入を行うと、商×割る数、の逆計算を行ったときに、
    //    その結果が、元の割られる数よりも大きいという矛盾が生じ、
    //    計算ミスの元となるため、切り捨てにしている。
    int quotient = a % b;
    printf("%d...%d",division,quotient);
    return 0;
}
