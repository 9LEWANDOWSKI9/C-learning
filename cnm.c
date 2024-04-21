#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
// 文件操作
// 文件的打开和关闭
//int main()
//{
//	FILE* fin;
//	fin = fopen("text.txt", "r");
//	if (fin == NULL)       // 打开文件失败
//	{
//		return 0;
//	}
//	fclose(fin);  // 关闭文件
//	return 0;
//}

// 文件的顺序读写
//int main()
//{
//	FILE* fout = fopen("text.txt", "w");
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)
//	{
//		printf("空");
//		return 0;
//	}
//	// 写文件
//	fputc('G', pf);
//	fputc('E', pf);
//	fputc('O', pf);
//	fputc('R', pf);
//	fputc('G', pf);
//	fputc('E', pf);   // fputc函数，将单个字符放到某个文件中
//
//	return 0;
//}


//int main()
//{
//	FILE* fout = fopen("text.txt", "r");
//	// 读文件
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
//	fgets(arr, 1024, fin);    // 读取一行
//	printf("%s", arr);
//
//	fgets(arr, 1024, fin);
//	printf("%s", arr);
//
//    fclose(fin);
//	return 0;
//}


