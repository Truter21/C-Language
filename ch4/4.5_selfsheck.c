#include <stdio.h>

int main(void)
{
  int coffee_val = 4500;
  int sandwich_val = 6000;
  int coffee;
  int sandwich;

  printf("�����Ͻ� �޴��� ������ �����ּ���.\n");
  printf("Coffee : ");
  scanf("%d", &coffee);
  printf("Sandwich : ");
  scanf("%d", &sandwich);

  if (sandwich >= 1)
  {
    printf("\n������ġ ���� �� Ŀ�� ������ ���εǾ� �ܴ� 3500���Դϴ�.\n");
    int coffee_val = 3500;
    printf("�ֹ��Ͻ� �޴��� �� �ݾ��� %d���Դϴ�.\n", coffee * coffee_val + sandwich * sandwich_val);
  }
  else
  {
    printf("�ֹ��Ͻ� �޴��� �� �ݾ��� %d���Դϴ�.\n", coffee * coffee_val + sandwich * sandwich_val);
  }
  
  return 0;
}