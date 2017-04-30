//  BOJ_2579_계단오르기.c
//  문제 : https://www.acmicpc.net/problem/2579
//  Created by 21panic on 17-04-30.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
int dp[301][2];
int step[301];
int N;

int main(void) {
    int i;
    
    scanf("%d", &N);
    
    for(i=1; i <= N; i++) {
        scanf("%d", &step[i]);
    }
    
    dp[1][1] = step[1];
    dp[1][2] = step[1];
    
    for(i=2; i <= N; i++) {
        dp[i][1] = dp[i-2][2] + step[i];
        dp[i][2] = MAX(dp[i-1][1], dp[i-2][2]) + step[i];
    }
    
    printf("%d", MAX(dp[N][1], dp[N][2]));
    
    return 0;
}
/*
해결 : DP
i =  현재 밟고 있는 계단 
dp[i][1] = 현재 밟고 있는 계단에서의 이전계단에서 1계단 올라왔을 때 값 저장 배열
dp[i][2] = 현재 밟고 있는 계단에서의 이전계단에서 2계단 올라왔을 때 값 저장 배열

step[i] = i번째 계단의 점수


이전 계단에서 1계단 올랐는지, 2계단 올랐는지 확인.
1계단 올랐으면 다음 계단을 오르면 연속 적으로 3계단을 오르기 때문에 무조건 2계단 올라야함.
2계단 올랐으면 1계단을 올라도 되고 2계단을 올라도된다. 그중 큰 값을 오른다.
dp[마지막계단수][1]과 dp[마지막계단수][2] 중 큰 값을 출력

*/