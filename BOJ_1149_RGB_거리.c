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
다이나믹 프로그래밍 (DP)

[숫자 제외 하고, 경우의 수만 따졌을 때]

문제 : 모든 집을 다 칠했을 경우 가장 최소 비용

한 행을 칠했을 때 그 다음행에 칠할 수 있는 경우의 수는 각 집마다 2가지이다.
(이미 칠한 집과 인접한 집은 같은 색으로 칠할 수 없기 때문에)

for example,

	R	G	B
       G B     R B     R G
	
위와 같이 각 색의 위치에 다음 칠할 수 있는 색의 값이 정해져 있고, 저 규칙을 반복 하게 된다.
따라서 모든 경우의 수는 다음과 같이 나타 낼 수 있다.

	                            (-1,-1)

        (0,0)			    (0,1)			(0,2)
   (1,1)     (1,2)	       (1,0)     (1,2)	     	   (1,0)     (1,1)
(2,0)(2,2) (2,0)(2,1) 	    (2,1)(2,2) (2,0)(2,1) 	(2,1)(2,2) (2,0)(2,2)
			       .... N-1 까지 반복			
			    ( house > N-1 ) return 0;


			     ......메모이제이션 적용 후

        (0,0)			    (0,1)			(0,2)
   (1,1)     (1,2)	       (1,0)     (mem)	     	   (mem)     (mem)
(2,0)(2,2) (mem)(2,1) 	    (mem)(mem) (mem)(mem) 	(mem)(mem) (mem)(mem)
			       .... N-1 까지 반복
			    ( house > 2 )return 0;

(mem) 부분은 배열에서 꺼내어 미리 계산한 값으로 대체 되기 때문에 훨씬 더 빠른 처리를 할 수 있다.
*/
