//  BOJ_2839_설탕배달.c
//  문제 : https://www.acmicpc.net/problem/2839
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

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

/*
해결

참고. 동적 계획법 (DP) https://namu.wiki/w/%EB%8F%99%EC%A0%81%20%EA%B3%84%ED%9A%8D%EB%B2%95
5kg의 주머니와 3kg의 주머니를 사용해서 최소한의 이동 횟수를 구해야 하는데,
5kg의 주머니를 최대 && 3kg의 주머니를 최소로 하는 것이 핵심이다.

N = 5a + 3b

97 = 5*17 + 3*4 = 21

a값이 크고, b값이 작아야 한다.

위의 식에서는 구할 수 있는 a값의 최대값을 구하고, a값을 줄이며 b값을 구한다.
이 때, 최초로 3kg으로 나누어 떨어지는 값이 있는 경우 그 값을 b로 지정하고,
a가 0이 될 때까지 반복한다.
*/
