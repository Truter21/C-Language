#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// function declare
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int dive(int num1, int num2);
int get_Random_Number(int level);
void show_Qustion(int num1, int num2, int level);
void success();
void fail();


int main(void)
{
  srand(time(NULL));
  int count = 0;

  for (int i = 1; i <= 5; i++)
  {
    int num1 = get_Random_Number(i);
    int num2 = get_Random_Number(i);

    // printf("%d x %d = %d\n", num1, num2, mul(num1, num2));
    show_Qustion(num1, num2, i);
    int answer = -1;
    scanf("%d", &answer);

    if (answer == -1)
    {
      printf("\n ���α׷��� �����մϴ�. \n");
      // break;
      exit(0);
    }
    else if (answer == num1 * num2)
    {
      success();
      count++;
    }
    else
    {
      fail();
    }
  }
  
  printf("\n\n��й�ȣ %d���� �������ϴ�.\n", count);
  return 0;
}

// function define
int add(int num1, int num2)
{
  return num1 + num2;
}
int sub(int num1, int num2)
{
  return num1 = num2;
}
int mul(int num1, int num2)
{
  return num1 * num2;
}
int dive(int num1, int num2)
{
  return num1 / num2;
}
int get_Random_Number(int level)
{
  return rand() % (level * 9) + 1;
}
void show_Qustion(int num1, int num2, int level)
{
  printf("\n\n\n######## %d��° ��й�ȣ ########\n", level);
  printf("\n\t    %d x %d ? \n\n", num1, num2);
  printf("################################\n");
  printf("\n ��й�ȣ�� �Է��ϼ���. (���Ḧ ���ϸ� -1 �Է�) >> ");
}
void success()
{
  printf("\n >> Good! �����Դϴ�.\n");
}
void fail()
{
  printf("\n >> ��! Ʋ�Ƚ��ϴ�.\n");
}