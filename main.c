#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void DateToString(struct tm* time,char*str)
{
    snprintf(str,20,"%d_%d_%d_%d-%d-%d",\
        time->tm_year+1900,time->tm_mon+1,time->tm_mday,\
            time->tm_hour,time->tm_min,time->tm_sec);
}

int main(int argc,char **argv)
{
    char timeStr[20];
    struct tm* nowTime;
    time_t nowTime_t;
    time(&nowTime_t);
    nowTime = localtime(&nowTime_t);
    DateToString(nowTime,timeStr);
    printf("NowTime:%s\n",timeStr);
    return 0;
}
