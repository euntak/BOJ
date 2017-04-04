//  BOJ_9095_1_2_3_더하기.c
//  문제 : https://www.acmicpc.net/problem/9095
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>

int arr[11];
int search(int n) {
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(arr[n] > 0) return arr[n];
    return arr[n] = search(n-1) + search(n-2) + search(n-3);
}

int main(void) {
    int n,k;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &k);
        printf("%d\n", search(k));
    }

    return 0;
}

/*
 해결

 동적 프로그래밍 (DP)

 점화식 구하기 경우의 수 따지기
 */
