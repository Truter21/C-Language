#include <stdio.h>

int main(void)
{
  // 포인터
  // [철수] : 101호 → 메모리 공간의 주소
  // [영희] : 201호
  // [민수] : 301호
  // 각 집에는 '암호'가 걸려 있음

  int chulsoo = 1; // 암호
  int younghee = 2;
  int minsoo = 3;

  printf("철수네 주소 : %d, 암호 : %d\n", &chulsoo, chulsoo);
  printf("영희네 주소 : %d, 암호 : %d\n", &younghee, younghee);
  printf("민수네 주소 : %d, 암호 : %d\n", &minsoo, minsoo);

  // 미션맨 등장!
  // 첫 번째 미션 : 아파트의 각 집에 방문하여 문에 적힌 암호 확인
  int * missionman; // 포인터 변수
  missionman = &chulsoo;
  printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);

  missionman = &younghee;
  printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);

  missionman = &minsoo;
  printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);

  // 두 번째 미션 : 각 암호에 3을 곱해라
  missionman = &chulsoo;
  *missionman *= 3; 
  printf("미션맨이 암호를 변경한 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);

  missionman = &younghee;
  *missionman *= 3; 
  printf("미션맨이 암호를 변경한 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);

  missionman = &minsoo;
  *missionman *= 3; 
  printf("미션맨이 암호를 변경한 곳 주소 : %d, 암호 : %d\n", missionman, *missionman);

  // 스파이 등장!
  // 미션맨이 바꾼 암호에서 2를 빼라.
  int * spy = missionman;

  printf("\n ... 스파이가 미션을 수행하는 중 ... \n\n");
  spy = &chulsoo;
  * spy -= 2;
  printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

  spy = &younghee;
  * spy -= 2;
  printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

  spy = &minsoo;
  * spy -= 2;
  printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

  // 최종 작전 결과
  printf("\n ... 철수, 영희, 민수는 집에 와서 바뀐 암호를 보고 놀라게 된다 ... \n\n");

  printf("철수네 주소 : %d, 암호 : %d\n", &chulsoo, chulsoo);
  printf("영희네 주소 : %d, 암호 : %d\n", &younghee, younghee);
  printf("민수네 주소 : %d, 암호 : %d\n", &minsoo, minsoo);

  // 참고 : 미션맨이 사는 곳의 주소는 &미션맨으로 확인
  printf("미션맨의 주소 : %d\n", &missionman);
  printf("스파이의 주소 : %d\n", &spy);  
  return 0;
}