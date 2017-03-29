//  BOJ_4673_셀프_넘버.c
//  문제 : https://www.acmicpc.net/problem/4673
//  Created by 21panic on 17-03-28.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>

int d(int a);
int arr[10001];

int main(void) {
    int i;
    for(i = 1; i <= 10000; i++) {
        arr[d(i)] = 1;
        if(!arr[i]) printf("%d\n",i);
    }
}

int d(int a) {
    int save = a;
    int sum = 0;

    do {
        sum += a%10;
        a /= 10;
    } while(a != 0);

    return save+sum;
}

/*
해결
참고. 에라토스테네스의 체
https://ko.wikipedia.org/wiki/%EC%97%90%EB%9D%BC%ED%86%A0%EC%8A%A4%ED%85%8C%EB%84%A4%EC%8A%A4%EC%9D%98_%EC%B2%B4

직접 셀프넘버를 찾는 방식이 아닌 셀프넘버가 아닌 수(=생성자)를 찾아서
배열의 인덱스를 이용하여 값을 출력한다.

d(1) = 1 + 1 = 2  // 1은 2의 생성자이며, 2는 1이라는 생성자를 갖고 있으므로 셀프넘버가 아니다.
d(2) = 2 + 2 = 4  // 2는 4의 생성자이며, 4는 셀프넘버가 아니다.
...
d(33) = 33 + 3 + 3 = 39 // 33은 39의 생성자이며, 39는 셀프넘버가 아니다.
...
d(9999) = 9999 + 9 + 9 + 9 + 9 = 10035  // 9999는 10035의 생성자이며, 10035는 셀프넘버가 아니다.

길이가 10000이상의 배열인 경우 지역변수로 선언하면 런타임에러가 발생할 수도 있기 때문에 전역 변수로 선언한다.
(전역변수는 자동으로 디폴트값인 0으로 초기화 된다.)

*/
