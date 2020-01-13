#include <stdio.h>

int main(){
    const int AMOUNT = 100  // const before int means "mixed", it can't be changed after been init.ed.
                            // The name of the "const variable" can help you understand it easily.
                            // Usually, we make name of the "const variable" all-capital (to understand easily).
    int price = 0;

    printf("请输入金额（元）：");
    scanf("%d", &price);    // scanf => scan f(ormated); when using "%" in scanf(), you are required to add an "&" after,
                            // before the variable. (原因：指针)
                            // "%" is to format the string.

    int change = AMOUNT - price;
    printf("找您%d元。\n", change); // printf => print f(ormated)

    return 0;
}