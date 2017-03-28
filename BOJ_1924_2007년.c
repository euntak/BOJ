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

/*
해결

2007년 1월 1일이 MON인 것을 감안,
2월은 28일, 4,6,9,11은 30일 나머지는 31일로

달에 따라서 1월 1일부터 지나온 날을 계산한다.

         1월 + 2월 + 3월 + 1일
4월 1일 =  31 + 28 + 31 + 1 = 91

이를 일주일(7)로 나누어 떨어진 나머지에 따라 요일을 지정한다.
91 % 7 = 0 (SUN)
*/
