//  BOJ_1463_1로_만들기.c
//  문제 : https://www.acmicpc.net/problem/1463
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>

int dp[1000001];
int temp = 0;

int main(void) {
    int i,N;

    scanf("%d", &N);

    dp[1] = 0;


    // Bottom - Top (N)에 도달 할때까지 반복
    for(i = 2; i <= N; i++)
    {
        dp[i] = dp[i-1] + 1; // 이전 값의 +1 씩해서 N에 도달하는 값을 저장 (최대한 오래 걸리는 경우)

        // 2와 3으로 나누어 떨어지고 이미 계산 된 dp의 값이 최대값(+1씩하여 N에 도달하는 값)보다 작은 경우(현재 최소값)
        // (현재 최소값)을 현재 진행하는 값에 넣는다.
        // +1 ==> dp[1] = 0이기 때문에 마지막에 +1을 한다.

        if(i % 2 == 0 && dp[i/2]+1 < dp[i]) {
            dp[i] = dp[i/2] + 1;
        }

        if(i % 3 == 0 && dp[i/3]+1 < dp[i]) {
            dp[i] = dp[i/3] + 1;
        }

    }

    printf("%d", dp[N]);

    return 0;
}


/*
해결

동적 프로그래밍 (DP), 동적 계획법에 대한 이해가 필요..

*/
