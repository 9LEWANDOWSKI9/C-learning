#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// �ļ�����
// �ļ��Ĵ򿪺͹ر�
//int main()
//{
//	FILE* fin;
//	fin = fopen("text.txt", "r");
//	if (fin == NULL)       // ���ļ�ʧ��
//	{
//		return 0;
//	}
//	fclose(fin);  // �ر��ļ�
//	return 0;
//}

// �ļ���˳���д
//int main()
//{
//	FILE* fout = fopen("text.txt", "w");
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("��");
//		return 0;
//	}
//	// д�ļ�
//	fputc('G', pf);
//	fputc('E', pf);
//	fputc('O', pf);
//	fputc('R', pf);
//	fputc('G', pf);
//	fputc('E', pf);   // fputc�������������ַ��ŵ�ĳ���ļ���
//
//	return 0;
//}


//int main()
//{
//	FILE* fout = fopen("text.txt", "r");
//	// ���ļ�
//	printf("%c", fgetc(fout));
//	printf("%c", fgetc(fout));
//	printf("%c", fgetc(fout));
//	printf("%c", fgetc(fout));
//	printf("%c", fgetc(fout));
//	printf("%c", fgetc(fout));
//}


//int main()
//{
//	FILE* fin;
//	fin = fopen("text.txt", "r");
//	char arr[1024] = { 0 };
//	if (fin == NULL)
//	{
//		return 0;
//	}
//	fgets(arr, 1024, fin);    // ��ȡһ��
//	printf("%s", arr);
//
//	fgets(arr, 1024, fin);
//	printf("%s", arr);
//
//    fclose(fin);
//	return 0;
//}


