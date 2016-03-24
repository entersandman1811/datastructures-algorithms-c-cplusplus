#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    char am_pm[2];
    char hr[3];
    scanf("%s",time);
    memcpy(am_pm, &time[8], 2);
    memcpy(hr, time, 2);
    int hr_int= atoi(hr);
    char time_o[9];
    
    if (strcmp(am_pm,"PM")== 0 && hr_int!=12 ) hr_int +=12;
    if (hr_int==12 && strcmp(am_pm,"AM")== 0) hr_int = 0;
    if (hr_int >=10){
        snprintf(hr,3,"%d", hr_int);

    }    
        
    else {
        hr[0] = '0';
        hr[1] = hr_int + '0';
        
    
    }
    
    memcpy(&time[0],&hr[0],1);
    memcpy(&time[1],&hr[1],1);    
    strncpy(time_o, time,8);
    printf("%s", time_o);   
    return 0;
}
