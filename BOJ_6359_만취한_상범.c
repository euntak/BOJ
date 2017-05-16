//  BOJ_6359_만취한_상범.c
//  문제 : https://www.acmicpc.net/problem/6359
//  Created by 21panic on 17-04-30.
//  Copyright © 2017년 21panic. All rights reserved.

#include <stdio.h>

int N;

int main(void) {
    int i,j,k;
    
    scanf("%d", &N);
    
    for (i=0; i<N; i++) {
        // 최대 방 갯수 0으로 초기화 0: 열림 1: 닫힘
        int ROOM[101] = {0,};
        int room = 0, count = 0;
        
        // 방 갯수 입력
        scanf("%d", &room);
        
        if(room >= 5 && room <= 100) {
            // 입력된 방 갯수 만큼 게임 실행
            // 첫번째 라운드에서는 모든 방을 열어야 한다.
            // 열려있는 상태로 초기화 했기 때문에 1라운드 진행을 건너뛴다.
            for(j=2; j<=room; j++) {
                // 2라운드에서는 2의 배수 3라운드에서는 3의 배수 문을 열고/닫는다.
                // 전체 배열을 검사 무조건 1번방은 열려있기 때문에 2번방부터 검사
                for(k=1; k<=room; k++) {
                    // 방 번호 % 라운드 번호 == 0
                    if(k % j == 0) {
                        if(ROOM[k]) ROOM[k] = 0;
                        else ROOM[k] = 1;
                    }
                }
            }
            
            // 출력
            for(j=1; j<=room; j++) {
                if(ROOM[j] == 0) count++;
            }
            printf("%d\n", count);
        }
    }
    
    return 0;
}
