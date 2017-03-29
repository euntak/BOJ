//  BOJ_10817_세_수.c
//  문제 : https://www.acmicpc.net/problem/10817
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>

void swap(int* x, int *y);

int main(void) {
    int a,b,c,tmp;

    scanf("%d %d %d", &a, &b, &c);

    if(a > b) swap(&a, &b);
    if(b > c) swap(&b, &c);
    if(a > b) swap(&a, &b);

    printf("%d", b);

    return 0;
}

void swap(int* x, int* y) {
    int temp = *y;
    *y = *x;
    *x = temp;
}

/*
해결

오름차순 정렬

주어진 세 수 (a,b,c)

swap(x,y) 주어진 x y 값을 서로 맞바꾼다.

swap이 아니라, 단순 if문을 통해서도 해결 가능.
*/
