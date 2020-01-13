#include <stdio.h>

int main(){
    double foot, inch;  // double marks the "Double-precision floating-point format"
    printf("请分别输入身高的英尺和英寸（用空格分割）：");
    scanf("%lf %lf", &foot, &inch); // when inputting into doubles, the format sign in "scanf()" should be "%lf",
                                    // moreover, the sign in "printf()" should be "%f"

    printf("身高为%f米。\n",
           ((foot+inch/12)*0.3048));    // In a simple calculate in C, if there's AT LEAST ONE float/double number,
                                        // the result will be expressed as float/double.

}