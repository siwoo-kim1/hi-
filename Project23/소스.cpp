#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int customer;
	int menu;
	int a, b;
	int c;
	int total;
	int total2 = 0;
	int d;
	int money = 30000;
	
	printf("���� ������ �ִ� �ݾ� : 30000��\n");
	printf("���������� ���� ���� ȯ���մϴ�.\n");
	printf("�� ���̼� �湮�ϼ̽��ϱ�? :");
	scanf("%d", &customer);
	printf("\n%d���̼� ���̱��� \n", customer);
	printf("�޴����� ���� �ֹ��Ͻ� �޴��� �������ּ���\n\n");
	printf("        menu           \n ");
	printf("1.¥��� : 3000��\n");
	printf("2.��¥�� : 4000��\n");
	printf("3.« �� : 5000��\n");
	printf("4.«¥�� : 5000��\n");
	printf("5.������ : 15000��\n");
	printf("6.���꽽 : 30000��\n");
	printf("7.����� : 2000��\n");
	 

	for (a = 1; a <= customer; a++) {
		total = 0;
		printf("%d�� �մ� �ֹ��ްڽ��ϴ�.\n", a);
		printf("��� �޴��� �ֹ��Ͻðڽ��ϱ�?");
		scanf("%d", &menu);
		printf("\n%d�� �մ� %d���� �޴� �ֹ��ްڽ��ϴ�.\n", a, menu);
		printf("���Ͻô� �޴��� ��ȣ�� �Է����ֽʽÿ�\n");
		printf("�ֹ� ��Ҹ� ���ϽŴٸ� �޴� �̿��� ��ȣ�� �Է��ؼ��ʽÿ�\n\n");

		for (b = 1; b <= menu; b++) {
			d = 0;
			printf("� �޴��� �ֹ��Ͻðڽ��ϱ�? :");
			scanf("%d", &c);

			if (c == 1) {
				printf("¥����� �ֹ��ϼ̽��ϴ�.\n\n");
				d = 3000;
			}
			else if (c == 2) {
				printf("��¥���� �ֹ��ϼ̽��ϴ�.\n\n");
				d = 4000;
			}
			else if (c == 3) {
				printf("« ���� �ֹ��ϼ̽��ϴ�.\n\n");
				d = 5000;
			}
			else if (c == 4) {
				printf("«¥���� �ֹ��ϼ̽��ϴ�.\n\n");
				d = 5000;
			}
			else if (c == 5) {
				printf("�������� �ֹ��ϼ̽��ϴ�.\n\n");
				d = 15000;
			}
			else if (c == 6) {
				printf("���꽽�� �ֹ��ϼ̽��ϴ�.\n\n");
				d = 30000;
			}
			else if (c == 7) {
				printf("������� �ֹ��ϼ̽��ϴ�.\n\n");
				d = 2000;
			}
			
			total += d;
		}

		printf("%d�� �մ� �ֹ��Ͻ� ������ ���� ������ %d���Դϴ�.\n\n", a, total);
		total2 += total;

	}
	printf("�ֹ����� ���İ��� ������ %d���Դϴ�.\n", total2);
	printf("��굵�͵帮�ڽ��ϴ�.");
	if (total2 <= money) {

		printf("������ �Ϸ�Ǿ����ϴ�. ���� ���� �ݾ��� %d�� ���ҽ��ϴ�. ", money - total2);
	}
	else {
		printf("%d�� ���� ���͵帮�ڽ��ϴ�.", total2);
		printf("�ݾ��� �����մϴ�.");
	}






}