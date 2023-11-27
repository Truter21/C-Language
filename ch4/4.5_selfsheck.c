#include <stdio.h>

int main(void)
{
  int coffee_val = 4500;
  int sandwich_val = 6000;
  int coffee;
  int sandwich;

  printf("구매하실 메뉴의 개수를 적어주세요.\n");
  printf("Coffee : ");
  scanf("%d", &coffee);
  printf("Sandwich : ");
  scanf("%d", &sandwich);

  if (sandwich >= 1)
  {
    printf("\n샌드위치 구매 시 커피 가격이 할인되어 잔당 3500원입니다.\n");
    int coffee_val = 3500;
    printf("주문하신 메뉴의 총 금액은 %d원입니다.\n", coffee * coffee_val + sandwich * sandwich_val);
  }
  else
  {
    printf("주문하신 메뉴의 총 금액은 %d원입니다.\n", coffee * coffee_val + sandwich * sandwich_val);
  }
  
  return 0;
}