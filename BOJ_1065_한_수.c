//  BOJ_1065_한_수.c
//  문제 : https://www.acmicpc.net/problem/1065
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>

int main(void) {
    int i,N,a,b,c,count=0;

    scanf("%d", &N);

    for(i = 1; i <= N; i++) {

        if(i < 100) {count++;}

        if(i >= 100 && i < 1000) {
            a = i / 100;
            b = (i / 10) % 10;
            c = i % 10;

            if((a-b) == (b-c)) {count++;}
        }
    }

    printf("%d", count);

    return 0;
}

/*
해결
브루트 포스(https://namu.wiki/w/%EB%B8%8C%EB%A3%A8%ED%8A%B8%20%ED%8F%AC%EC%8A%A4)
모든 경우의수를 다 검색하는 방식.
*/
