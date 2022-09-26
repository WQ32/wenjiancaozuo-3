#include <stdio.h>

////fgets - 是从文件中读取一行内容
////char * fgets(char * string,int n,FILE* stream) 
////从流里面读取的信息放在string里面去，n是最多读取的数目
//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//天生的会自动换行
//	//最后一个单词后没有换行符，所以不会自动换行
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////fputs - 写一个字符串到流里面去
//// int fputs(const char* string,FILE* stream);
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////从键盘，屏幕输入输出
//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	fgets(buf,1024,stdin);  //从标准输入流读取
//	fputs(buf, stdout);     //输出到标准输出流
//	//等价于
//	gets(buf);
//	puts(buf);
//	return 0;
//}
//
////fprintf函数 - 
////int fprintf(FILE* stream,const char* format[,argument]...);
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"wangqi" };
//	//打开文件
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//以格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////fscanf 函数
////int fscanf(FILE* stream,const char* format,[,orgument]...);
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"wangqi" };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////屏幕上输入输出
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	fscanf(stdin,"%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %f %s", s.n, s.score, s.arr);
//	return 0;
//}

//面试题
//scanf      fscanf     sscanf
//printf	 fprintf    sprintf
//scanf/printf是针对标准输入流 / 标准输出流的格式化输入 / 输出语句
//fscanf/fprintf是针对所有的输入流/所有输出流的格式化输入/输出语句  - 包含上者
//sscanf/sprintf前者是从字符串中读取格式化的数据，后者是把格式化数据输出（或存储到）字符串
//从一个字符串中把一个格式化的数组读出来
//sprintf  - 写格式化的数组到一个字符串中

struct S
{
	int n;
	float score;
	char arr[10];
};
int main()
{
	struct S s = { 100,3.14,"abcdef" };
	struct S tmp = { 0 };
	char buf[1024] = { 0 };
	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	printf("%s\n", buf);
	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
	return 0;
}

 
