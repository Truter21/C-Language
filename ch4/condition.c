#include <stdio.h>

int main(void)
{
  // int age = 27;
  // if (age >= 20)
  // {
  //   printf("�����Դϴ�.\n");
  // }
  // else
  // {
  //   printf("û�ҳ��Դϴ�.\n");
  // }
  // return 0;

  int age = 10;
  if (age >= 8 && age <= 13)
  {
    printf("�ʵ��л��Դϴ�.\n");
  }
  else if (age >= 14 && age <= 16)
  {
    printf("���л��Դϴ�.\n");
  }
  else if (age >= 17 && age <= 19)
  {
    printf("����л��Դϴ�.\n");
  }
  else
  {
    printf("û�ҳ��� �ƴմϴ�.\n");
  }
  return 0;
}