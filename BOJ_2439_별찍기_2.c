//  BOJ_2439_별찍기-2.c
//  문제 : https://www.acmicpc.net/problem/2439
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>
int main(void) {
    int i,j,k,N;

    scanf("%d", &N);

    for(i=1; i<=N; i++){
        for(j=i; j<N; j++){
            printf(" ");
        }

        for(k=0; k<i; k++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
