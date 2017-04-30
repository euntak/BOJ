//  BOJ_1003_피보나치함수.c
//  문제 : https://www.acmicpc.net/problem/1003
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>

int zero = 0, one = 0;
int fibonacci(int n);

int main(void) {
    int N,i,j,k,temp;

    int input[41] = {0};

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &input[i]);

        fibonacci(input[i]);
        printf("%d %d\n", zero, one);
        zero = 0; one = 0;`
    }

    return 0;
}

int fibonacci(int n) {
    if (n==0) {
        zero++;
        return 0;
    } else if (n==1) {
        one++;
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

/*
해결

f(0) = (1,0)
f(1) = (0,1)
f(2) = f(1) + f(0) = (1,1)
f(3) = f(2) + f(1) = (1,1) + (0,1) = (1,2)
f(4) = f(3) + f(2) = (1,2) + (1,1) = (2,3)
f(5) = f(4) + f(3) = (2,3) + (1,2) = (3,5)
…
f(10) = f(9) + f(8)
f(40) = f(39) + f(38)

동적 프로그래밍 (DP), 동적 계획법에 대한 이해가 필요..
실행 시간이 1.2초 정도 나온다.. Memoization 하면, 덜 걸릴 수도 있다.
아래건 그냥.. 범위가 40밖에 되지 않아서, 모든 결과를 배열에 저장, 조합하는 과정을 그냥 해본것.

#include <stdio.h>

int main(void) {
    int N,i,j,k,temp;

    int input[41] = {0};
    int zero[41] = {0}; // 0
    int one[41] = {0}; // 1

    scanf("%d", &N);

    zero[0] = 1;
    one[1] = 1;

    for(j = 2; j <= 40; j++) {
        zero[j] = zero[j-1] + zero[j-2];
        one[j] = one[j-1] + one[j-2];
    }

    for(i = 0; i < N; i++) {
        scanf("%d", &input[i]);
    }

    for(k = 0; k < N; k++) {
        temp = input[k];
        printf("%d %d\n", zero[temp], one[temp]);
    }

    return 0;
}

*/
