#include <stdio.h>

int main()
{
  // �̸�
  char name[256];
  printf("�̸� : ");
  scanf("%s", name, sizeof(name));

  // ���̵�
  char ID[256];
  printf("ID : ");
  scanf("%s", ID, sizeof(ID));

  // ����
  int age;
  printf("���� : ");
  scanf("%d", &age);

  // ����
  char birth[256];
  printf("���� : ");
  scanf("%s", birth, sizeof(birth));

  // �Ź� ũ��
  int shoes_size;
  printf("�Ź� ũ�� : ");
  scanf("%d", &shoes_size);

  // ȸ�� ���� ���
  printf("\n\n--- ȸ�� ���� ---\n");
  printf("�̸�      : %s\n", name);
  printf("���̵�    : %s\n", ID);
  printf("����      : %d\n", age);
  printf("����      : %s\n", birth);
  printf("�Ź� ũ�� : %d\n", shoes_size);

  return 0;
}