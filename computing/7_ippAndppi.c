#include <stdio.h>

int main(){
    int a = 1;

    printf("a++ = %d\n", a++);  // a++ = a+1-1 = a = 1;
                                // a = a+1 = 2
    // (a++) == a; 
    printf("a = %d\n", a);      // [after], a = 2;
    // [after], a = a + 1;

    printf("++a = %d\n", ++a);  // ++a = a+1 = a+1 = 2+1 = 3;
                                // a = a+1 = 3
    // (++a) = a + 1;
    printf("a = %d\n", a);      // [after], a = 3;
    // [after], a = a + 1;
    return 0;
}