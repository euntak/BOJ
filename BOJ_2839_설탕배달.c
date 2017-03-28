//  BOJ_2839_설탕배달.c
//  문제 : https://www.acmicpc.net/problem/2839
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.
//  풀이 해결 방법
//  동적 계획법 (DP) https://namu.wiki/w/%EB%8F%99%EC%A0%81%20%EA%B3%84%ED%9A%8D%EB%B2%95

#include <stdio.h>
int main(void) {
    int N=0,a=0,b=0;

    scanf("%d", &N);

    if(N < 3 || N > 5000) {
        printf("%d", -1);
    } else {
        a = N/5;

        while(a >= 0) {

            if((N-5*a)%3 == 0) {
                b = (N-5*a)/3;
                break;
            } else {
                a--;
            }

        }
    }

    printf("%d", a+b);

    return 0;
}
