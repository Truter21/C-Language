#include <stdio.h>
#include <time.h>

int main(void)
{

  // Up and Down
  srand(time(NULL));
  int num = rand() % 100 + 1; // 1~100사이의 숫자
  printf("숫자 : %d\n", num);
  int answer = 0; // 정답
  int chance = 5; // 기회
  while (chance > 0)
  {
    printf("남은 기회 %d번\n", chance--);
    printf("숫자를 맞춰보세요 (1~100) : \n");
    scanf("%d", &answer);

    if (answer > num)
    {
      printf("DOWN ↓\n\n");
    }
    else if (answer < num)
    {
      printf("UP ↑\n\n");
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
      printf("모든 기회를 사용하셨습니다.\n");
      break;
    }    
  }
  return 0;
}