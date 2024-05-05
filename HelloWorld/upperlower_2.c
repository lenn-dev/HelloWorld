
// �Էµ� ���ڿ� ���� strlen �Լ������ ���
//#include <stdio.h>
//int main()
//{
//	char string[32];
//
//	printf("��ҹ��ڷ� ������ ���ڿ� �Է� %d �� �̳�", 32);
//	scanf_s("%s", string, 32);
//
//
//	int str_len = strlen(string);
//	for (int i = 0; i < str_len; i++)
//	{
//		if (string[i] >= 'a' && string[i] <= 'z')
//			string[i] -= 32;
//	}
//
//	printf("\n�Էµ� ���ڿ�(�ҹ��ڴ� �빮�ڷ� ��ȯ):%s \n", string);
//	return 0;
//}



// NULL ���ڰ� �̿�, �迭�� ���ڿ� ����Ǹ�, ���ڿ� ���� NULL ����(0)���� �����
// �̴� ���ۿ� ���ڿ��� ���� �ǹ��ϴ� ������, ���ڿ� �����ϴ� �Լ����� 
// �� NULL ���ڸ� �̿��� ���̸� ����Ͽ� ���ڿ��� ó���Ѵ�.
#include <stdio.h>
int main_J()
{
	char string[32];

	printf("��ҹ��ڷ� ������ ���ڿ� �Է� %d �� �̳�", 32);
	scanf_s("%s", string, 32);


	for (int i = 0; string[i] != 0; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
			string[i] -= 32;
	}

	printf("\n�Էµ� ���ڿ�(�ҹ��ڴ� �빮�ڷ� ��ȯ):%s \n", string);
	return 0;
}

//while �� �̿��� ������ ���� p�� ����Ű�� �޸𸮰��� 0�� �ƴҶ����� �ݺ��ϵ���
// ���� ����, �� NULL���ڰ� ���ö����� ������ ���� p�� ����Ű�� string�迭��
// ��� �޸𸮿� �����Ͽ� ���� üũ�ϰڴٴ� �ǹ�
// ���������� �޸𸮿� �����Ϸ��� �ּ� ���굵 �ݵ�� �ʿ���
#include <stdio.h>
int main_s()
{
	char string[32];

	printf("��ҹ��ڷ� ������ ���ڿ� �Է� %d �� �̳�", 32);
	scanf_s("%s", string, 32);

	char* p = string;
	while (*p)
	{
		// ������ p ������ ����Ű�� string ���� ���ڰ� �ҹ������� üũ�ϱ� ����
		// ASCII�ڵ� ���� ���� �ش��ϴ��� üũ�Ѵ�.
		if (*p >= 'a' && *p <= 'z')
		{
			//���ڰ� �ҹ��ڶ�� 32�� �� �빮�ڷ� ��ȯ�Ѵ�.
			*p -= 32;
		}
		p++; //	���� ��ҷ� �̵�
			
	}
	printf("\n�Էµ� ���ڿ�(�ҹ��ڴ� �빮�ڷ� ��ȯ):%s \n", string);
	return 0;
}



void convertToUpperCase(char* sPtr)
{
	while (*sPtr != '\0')
	{
		if (islower(*sPtr))
			*sPtr = toupper(*sPtr);
	}
}