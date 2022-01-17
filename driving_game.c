#include <stdio.h>

/*
    * 입력받은 두 변수의 값에 따라 아래 내용대로 출력합니다.
    * 시동이 걸리지 않은 상태(isStart가 0) 또는 기어가 'P'이면 "주차합니다" 출력
    * 시동이 걸린 상태(isStart가 1)에서 기어가 'D'이면 "전진합니다" 출력
    * 시동이 걸린 상태에서 기어가 'R'이면 "후진합니다" 출력
    * 그 외의 경우 "움직이지 않습니다" 출력
    */

int main()
{
    printf("자동차를 운전합니다.\n");
    int isStart;
    printf("시동을 거시겠습니까? [ 아니요 = 0 / 예 = 1 ]: ");
    scanf_s("%d", &isStart);
    fgetc(stdin);

    if (isStart == 0) // 시동을 걸지 않을 경우
    {
        printf("주차합니다.");
    }
    else if (isStart == 1) // 시동을 걸 경우
    {
        // 기어를 입력받습니다.
        char gear;
        printf("기어 위치를 선택하세요 [ D / R / P ]: ");
        gear = fgetc(stdin);

        if (gear == 'D' || gear == 'd') // gear가 D 혹은 d 일 경우
        {
            printf("전진합니다.");
        }
        else if (gear == 'R' || gear == 'r') // gear가 R 혹은 r 일 경우
        {
            printf("후진합니다.");
        }
        else if (gear == 'P' || gear == 'p') // gear가 P 혹은 p 일 경우
        {
            printf("주차합니다.");
        }
        else
        {
            printf("움직이지 않습니다.");
        }
    }
    else
    {
        printf("움직이지 않습니다.");
    }
}