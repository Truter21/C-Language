#include <stdio.h>

int main(void)
{
  // ������
  // [ö��] : 101ȣ �� �޸� ������ �ּ�
  // [����] : 201ȣ
  // [�μ�] : 301ȣ
  // �� ������ '��ȣ'�� �ɷ� ����

  int chulsoo = 1; // ��ȣ
  int younghee = 2;
  int minsoo = 3;

  printf("ö���� �ּ� : %d, ��ȣ : %d\n", &chulsoo, chulsoo);
  printf("����� �ּ� : %d, ��ȣ : %d\n", &younghee, younghee);
  printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &minsoo, minsoo);

  // �̼Ǹ� ����!
  // ù ��° �̼� : ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��
  int * missionman; // ������ ����
  missionman = &chulsoo;
  printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", missionman, *missionman);

  missionman = &younghee;
  printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", missionman, *missionman);

  missionman = &minsoo;
  printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", missionman, *missionman);

  // �� ��° �̼� : �� ��ȣ�� 3�� ���ض�
  missionman = &chulsoo;
  *missionman *= 3; 
  printf("�̼Ǹ��� ��ȣ�� ������ �� �ּ� : %d, ��ȣ : %d\n", missionman, *missionman);

  missionman = &younghee;
  *missionman *= 3; 
  printf("�̼Ǹ��� ��ȣ�� ������ �� �ּ� : %d, ��ȣ : %d\n", missionman, *missionman);

  missionman = &minsoo;
  *missionman *= 3; 
  printf("�̼Ǹ��� ��ȣ�� ������ �� �ּ� : %d, ��ȣ : %d\n", missionman, *missionman);

  // ������ ����!
  // �̼Ǹ��� �ٲ� ��ȣ���� 2�� ����.
  int * spy = missionman;

  printf("\n ... �����̰� �̼��� �����ϴ� �� ... \n\n");
  spy = &chulsoo;
  * spy -= 2;
  printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", spy, *spy);

  spy = &younghee;
  * spy -= 2;
  printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", spy, *spy);

  spy = &minsoo;
  * spy -= 2;
  printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", spy, *spy);

  // ���� ���� ���
  printf("\n ... ö��, ����, �μ��� ���� �ͼ� �ٲ� ��ȣ�� ���� ���� �ȴ� ... \n\n");

  printf("ö���� �ּ� : %d, ��ȣ : %d\n", &chulsoo, chulsoo);
  printf("����� �ּ� : %d, ��ȣ : %d\n", &younghee, younghee);
  printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &minsoo, minsoo);

  // ���� : �̼Ǹ��� ��� ���� �ּҴ� &�̼Ǹ����� Ȯ��
  printf("�̼Ǹ��� �ּ� : %d\n", &missionman);
  printf("�������� �ּ� : %d\n", &spy);  
  return 0;
}