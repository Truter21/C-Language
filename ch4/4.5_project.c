#include <stdio.h>
#include <time.h>

int main(void)
{

  // Up and Down
  srand(time(NULL));
  int num = rand() % 100 + 1; // 1~100������ ����
  printf("���� : %d\n", num);
  int answer = 0; // ����
  int chance = 5; // ��ȸ
  while (chance > 0)
  {
    printf("���� ��ȸ %d��\n", chance--);
    printf("���ڸ� ���纸���� (1~100) : \n");
    scanf("%d", &answer);

    if (answer > num)
    {
      printf("DOWN ��\n\n");
    }
    else if (answer < num)
    {
      printf("UP ��\n\n");
    }
    else if (answer == num)
    {
      printf("Great! Your answer is right!!\n\n");
      break;
    }
    else
    {
      printf("Error!!!!\n\n");
      break;
    }
    
    if (chance == 0)
    {
      printf("��� ��ȸ�� ����ϼ̽��ϴ�.\n");
      break;
    }    
  }
  return 0;
}