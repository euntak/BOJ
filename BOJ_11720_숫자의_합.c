//  BOJ_11720_숫자의_합.c
//  문제 : https://www.acmicpc.net/problem/11720
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>
#include <string.h>

int main(void) {
    int i,n,a=0;

    char m[100];

    scanf("%d %s", &n, &m);

    for(i = 0; i < n; i++) {
       a += m[i]-'0';
    }

    printf("%d", a);

    return 0;
}

/*
해결
문제 자체가 약간.. 애매모호 한 부분이 있다. 애매모호 하다기 보다는 설명이 부족한 느낌이다.
문제를 자세히 보는것도 중요하다. 정확하게 이해하고 풀이를 시작하는 습관을 갖자.

일단 100자리 수의 숫자를 받기 위해선, 기본 정수형으로 받기에는 stackoverflow가 일어난다.
때문에 입력은 문자열로 받는다. 문자열로 받았을 경우, 이 값을 int형으로 다시 변경 할 수 있어야 하는데,
ASCII CODE 표를 보면, 숫자는 '0' 이 48 부터 시작하기 때문에 실직적인 int 값을 가져오려면 저장한 문자에
-48을 해주거나, -48값과 같은 -'0'을 해주면, int형으로 변환된다.
*/
