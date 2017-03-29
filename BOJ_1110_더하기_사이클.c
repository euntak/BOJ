//  BOJ_1110_더하기_사이클.c
//  문제 : https://www.acmicpc.net/problem/1110
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>

int main(void) {
    int N,M,O,S,count=0;

    scanf("%d", &N);

    S = N;

    do {

        O = (N / 10) + (N % 10);
        M = (N % 10) * 10 + (O % 10);

        count++;

        N = M;

    } while(S != M);

    printf("%d",count);

    return 0;
}

/*
해결

N : 최초 입력 값
S : 최초 입력 값을 저장하는 값
O : 각 자리수를 더한 값
M : 앞 연산에서 새롭게 나온 수로 숫자 조합하여 저장
count : 사이클 수

*/
