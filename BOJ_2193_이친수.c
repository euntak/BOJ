//  BOJ_2193_이친수.c
//  문제 : https://www.acmicpc.net/problem/2193
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>

unsigned long long int dp[91];

unsigned long long int f(int n) {
    if(n==0) return 0;
    if(n==1) return 1;
    if(dp[n] > 0) return dp[n];
    return dp[n] = f(n-1) + f(n-2);
}

int main(void) {
    int n;

    scanf("%d", &n);
    printf("%lld", f(n));

    return 0;
}


/*
해결

동적 프로그래밍 (DP)

점화식 구하기 경우의 수 따지기

범위 생각하기

*/
