//  BOJ_11720_숫자의_합.c
//  문제 : https://www.acmicpc.net/problem/11720
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>
int main(void) {
    int i,n,m,a=0;

    scanf("%d %d", &n, &m);

    for(i = 0; i < n; i++) {
        a += m % 10;
        m /= 10;
    }

    printf("%d", a);

    return 0;
}
