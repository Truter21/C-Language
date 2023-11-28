#include <stdio.h>

// declare Function
int convert_time(int time);

int main(void)
{
  int time;
  printf("영화 상영 시간을 입력해주세요(분 단위)\n");
  printf("Input : ");
  scanf("%d", &time);
  convert_time(time);

  return 0;
}


// define Function
int convert_time(int time)
{
  int hour = time / 60;
  int minute = time % 60;

  printf("Play time : %d시간 %d분\n", hour, minute);
}