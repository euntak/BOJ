//  BOJ_1152_단어의_개수.c
//  문제 : https://www.acmicpc.net/problem/1152
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int i=0,count=0;
    char str[1000000];

    //gets(str);
    scanf ( "%[^\n]s", &str);

    for(i = 0; i < strlen(str); i++) {
        if(str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0')) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}

/*
해결.

두 가지 방법으로 white space를 문자열로 인식하여 받는다.
1. gets(str);
2. scanf ( "%[^\n]s", &str);

문자뒤에 WS가 오거나 NULL이 오는 경우에만 단어의 개수를 증가시킨다.
*/
