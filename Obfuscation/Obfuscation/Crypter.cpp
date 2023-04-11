#include <stdio.h>
#include <iostream>
//Made by Fin
//The license is free, but subscribe My channel XD
//https://www.youtube.com/@fin_1221

int main()
{
	int keyuser = 0;
	char obf[30] = {};
	int key = 77; //메인 복호화 키
	char str[30]; 
	printf("문자열 입력(29자 미만) : "); //Hello
	scanf("%s", &str);
	//난독화 루프
	for (int i = 0; i < 30; i++) //i < 30 i == 29될때 까지 i에 1씩 더한다.
	{
		obf[i] = str[i] ^ key;
	}
	system("cls");
	printf("난독화 : %s\n", obf);
	printf("키를 입력 : "); scanf("%d", &keyuser);
	if (keyuser == 77)
	{
		for (int i = 0; i < 30; i++) //i < 30 i == 29될때 까지 i에 1씩 더한다.
		{
			str[i] = obf[i] ^ key;
			//printf("%d ", obf[i]);
		}
		printf("복호화 : %s", str);
		while (1)
		{

		}
	}
	else
	{
		printf("복화화 키가 틀렸습니다.");
		while (1)
		{

		}
	}
}