#include <stdio.h>

// declare Function
int convert_time(int time);

int main(void)
{
  int time;
  printf("��ȭ �� �ð��� �Է����ּ���(�� ����)\n");
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

  printf("Play time : %d�ð� %d��\n", hour, minute);
}