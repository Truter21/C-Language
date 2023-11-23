#include <stdio.h>

int main(void)
{
  // int age = 27;
  // if (age >= 20)
  // {
  //   printf("성인입니다.\n");
  // }
  // else
  // {
  //   printf("청소년입니다.\n");
  // }
  // return 0;

  int age = 10;
  if (age >= 8 && age <= 13)
  {
    printf("초등학생입니다.\n");
  }
  else if (age >= 14 && age <= 16)
  {
    printf("중학생입니다.\n");
  }
  else if (age >= 17 && age <= 19)
  {
    printf("고등학생입니다.\n");
  }
  else
  {
    printf("청소년이 아닙니다.\n");
  }
  return 0;
}