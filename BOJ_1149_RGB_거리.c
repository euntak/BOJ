//  BOJ_1149_RGB_거리.c
//  문제 : https://www.acmicpc.net/problem/1149
//  Created by 21panic on 17-04-04.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int N;
int dist[1000][3];
int arr[1000][3];

int full(int house, int color);

int main(void) {
    int i;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
    }

    printf("%d", full(-1,-1));

    return 0;
}


int full(int house, int color) {
    int min = dist[house][color];

    if (house > N-1)
        return 0;

    if (min > 0)
        return min;

    min = 2147483647;
    for (int i = 0; i < 3; i++) {
        if (color != i) {
            min = dist[house][color] = MIN(min, full(house + 1, i)+arr[house][i]);
        }
    }

    return min;
}


/*
해결
다이나믹 프로그래밍 (DP) , 그리드 알고리즘 (탐욕 알고리즘)

[경우의 수만 따졌을 때]

문제 : 모든 집을 다 칠했을 경우 가장 최소 비용

한 행을 칠했을 때 그 다음행에 칠할 수 있는 경우의 수는 2가지 이다.
(이미 칠한 집과 인접한 집은 같은 색으로 칠할 수 없기 때문에)

따라서 다음과 같이 볼 수 있다.

				                        (-1,-1)

        (0,0)			               (0,1)	           		   (0,2)
   (1,1)     (1,2)         (1,0)	     (1,2)	     (1,0)      (1,1)
(2,0)(2,2) (2,0)(2,1) 	(2,1)(2,2)  (2,0)(2,1) 	(2,1)(2,2)  (2,0)(2,2)
			                   ( house > 2 )return 0;


			                   ......메모이제이션 적용


                                (-1,-1)

        (0,0)			                (0,1)		                 	   (0,2)
   (1,1)     (1,2)          (1,0)	      (memo)      	 (memo)        (memo)
(2,0)(2,2) (memo)(2,1) 	(memo)(memo) (memo)(memo)   (memo)(memo)  (memo)(memo)
			                   ( house > 2 )return 0;

*/
