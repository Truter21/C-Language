#include <stdio.h>
#include <time.h>

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

  // int age = 10;
  // if (age >= 8 && age <= 13)
  // {
  //   printf("�ʵ��л��Դϴ�.\n");
  // }
  // else if (age >= 14 && age <= 16)
  // {
  //   printf("���л��Դϴ�.\n");
  // }
  // else if (age >= 17 && age <= 19)
  // {
  //   printf("����л��Դϴ�.\n");
  // }
  // else
  // {
  //   printf("û�ҳ��� �ƴմϴ�.\n");
  // }

  // break & continue
  // 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
  // for (int i = 1; i <= 30; i++)
  // {
  //   if (i >= 6)
  //   {
  //     printf("������ �л��� ���� ���ư��� �����ϴ�.\n");
  //     break;
  //   }
  //   printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
  // }

  // 1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
  // 7���� �����ϰ� 6������ 10������ ���� ��ǥ�� �մϴ�.
  // for (int i = 1; i <= 30; i++)
  // {
  //   if (i >= 6 && i <= 10)
  //   {
  //     if (i == 7)
  //     {
  //       printf("%d�� �л��� �Ἦ�Դϴ�.\n", i);
  //       continue;
  //     }
  //     printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
  //   }
  // }

  // && ||
  // int a = 10;
  // int b = 10;
  // int c = 13;
  // int d = 14;
  // if (a == b || c == d)
  // {
  //   printf("a�� b, �Ǵ� c�� d�� ���� �����ϴ�.\n");
  // }
  // else
  // {
  //   printf("���� ���� �ٸ��ϴ�.\n");
  // }

  // ���� ���� �� 1
  // srand(time(NULL));
  // int i = rand() %  3;
  // if (i == 0)
  // {
  //   printf("����\n");
  // }
  // else if (i == 1)
  // {
  //   printf("����\n");
  // }
  // else if (i == 2)
  // {
  //   printf("��\n");
  // }
  // else
  // {
  //   printf("�����.\n");
  // }

  // ���� ���� �� 2
  // srand(time(NULL));
  // int i = rand() %  3;
  // switch (i)
  // {
  // case 0 : printf("����\n");
  // break;
  // case 1 : printf("����\n");
  // break;
  // case 2 : printf("��\n");
  // break;
  // default: printf("�����\n");
  // break;
  // }
  
  // �л� ���� �Ǻ�
  // int age = 10;
  // switch (age)
  // {
  // case 8 : 
  // case 9 : 
  // case 10 : 
  // case 11 : 
  // case 12 : 
  // case 13 : printf("�ʵ��л��Դϴ�.\n"); break;
  // case 14 : 
  // case 15 : 
  // case 16 : printf("���л��Դϴ�.\n"); break;
  // case 17 : 
  // case 18 : 
  // case 19 : printf("����л��Դϴ�.\n"); break;
  // default  : printf("�л��� �ƴѰ�����.\n"); break;
  // }
  // return 0;
}