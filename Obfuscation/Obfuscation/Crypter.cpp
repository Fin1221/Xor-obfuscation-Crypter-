#include <stdio.h>
#include <iostream>
//Made by Fin
//The license is free, but subscribe My channel XD
//https://www.youtube.com/@fin_1221

int main()
{
	int keyuser = 0;
	char obf[30] = {};
	int key = 77; //���� ��ȣȭ Ű
	char str[30]; 
	printf("���ڿ� �Է�(29�� �̸�) : "); //Hello
	scanf("%s", &str);
	//����ȭ ����
	for (int i = 0; i < 30; i++) //i < 30 i == 29�ɶ� ���� i�� 1�� ���Ѵ�.
	{
		obf[i] = str[i] ^ key;
	}
	system("cls");
	printf("����ȭ : %s\n", obf);
	printf("Ű�� �Է� : "); scanf("%d", &keyuser);
	if (keyuser == 77)
	{
		for (int i = 0; i < 30; i++) //i < 30 i == 29�ɶ� ���� i�� 1�� ���Ѵ�.
		{
			str[i] = obf[i] ^ key;
			//printf("%d ", obf[i]);
		}
		printf("��ȣȭ : %s", str);
		while (1)
		{

		}
	}
	else
	{
		printf("��ȭȭ Ű�� Ʋ�Ƚ��ϴ�.");
		while (1)
		{

		}
	}
}