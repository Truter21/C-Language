#include <stdio.h>

int main()
{
  // 이름
  char name[256];
  printf("이름 : ");
  scanf("%s", name, sizeof(name));

  // 아이디
  char ID[256];
  printf("ID : ");
  scanf("%s", ID, sizeof(ID));

  // 나이
  int age;
  printf("나이 : ");
  scanf("%d", &age);

  // 생일
  char birth[256];
  printf("생일 : ");
  scanf("%s", birth, sizeof(birth));

  // 신발 크기
  int shoes_size;
  printf("신발 크기 : ");
  scanf("%d", &shoes_size);

  // 회원 정보 출력
  printf("\n\n--- 회원 정보 ---\n");
  printf("이름      : %s\n", name);
  printf("아이디    : %s\n", ID);
  printf("나이      : %d\n", age);
  printf("생일      : %s\n", birth);
  printf("신발 크기 : %d\n", shoes_size);

  return 0;
}