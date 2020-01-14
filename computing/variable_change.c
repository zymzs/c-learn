#include <stdio.h>

int main(){
    int a = 1, b = 2;
    // a, b = b, a;  // Wrong!
/*  /Users/zymzs/Documents/GitHub/c-learn/computing/variable_change.c:5:5: warning: expression result unused [-Wunused-value]
    a, b = b, a;
    ^
    /Users/zymzs/Documents/GitHub/c-learn/computing/variable_change.c:5:15: warning: expression result unused [-Wunused-value]
    a, b = b, a;
              ^
    2 warnings generated.
*/
    int t = a;
    a = b, b = t;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}