//  BOJ_11721_열개씩_끊어_출력하기.c
//  문제 : https://www.acmicpc.net/problem/11721
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>
#include <string.h>

int main(void) {
    int i;
    char string[100];

    scanf("%s", &string);

    for(i = 1; i <= strlen(string); i++) {
        printf("%c", string[i-1]);

        if(i%10==0) {
            printf("\n");
        }
    }
    return 0;
}

/*
해결

음. 10개마다 \n 찍기.

*/
