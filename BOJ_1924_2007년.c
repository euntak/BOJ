//  BOJ_1924_2007년.c
//  문제 : https://www.acmicpc.net/problem/1924
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>
int main(void) {
    int y=0,m=0,i=0,j=0,dom=0,day_counter=0;

    char *day[7];

    day[0] = "SUN";
    day[1] = "MON";
    day[2] = "TUE";
    day[3] = "WED";
    day[4] = "THU";
    day[5] = "FRI";
    day[6] = "SAT";

    scanf("%d %d", &y, &m);

    for(i = 1; i < y; i++){

        if(i==2) {
            dom = 28;
        } else if(i==4 || i==6 || i==9 || i==11) {
            dom = 30;
        } else {
            dom = 31;
        }

        day_counter += dom;
    }

    day_counter += m;

    j = day_counter % 7;

    printf("%s", day[j]);

    return 0;
}
