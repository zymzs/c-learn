#include <stdio.h>

int main(){
    int hour1, minute1;
    int hour2, minute2;
    printf("请输入第一个时间（时与分用空格隔开）：");
    scanf("%d %d", &hour1, &minute1);
    printf("请输入第二个时间（时与分用空格隔开）：");
    scanf("%d %d", &hour2, &minute2);

    int minute1All, minute2All;
    minute1All = hour1 * 60 + minute1;
    minute2All = hour2 * 60 + minute2;
    int resultSumMin, resultHour, resultMinute;
    if(minute1All > minute2All){
        resultSumMin = minute1All - minute2All;
    }else{
        resultSumMin = minute2All - minute1All;
    };

    printf("时间差为%d小时%d分钟。\n", resultSumMin / 60, resultSumMin % 60);
    return 0;
}