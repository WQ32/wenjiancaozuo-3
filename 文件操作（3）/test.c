#include <stdio.h>

////fgets - �Ǵ��ļ��ж�ȡһ������
////char * fgets(char * string,int n,FILE* stream) 
////���������ȡ����Ϣ����string����ȥ��n������ȡ����Ŀ
//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//	fgets(buf, 1024, pf);
//	puts(buf);
//	//�����Ļ��Զ�����
//	//���һ�����ʺ�û�л��з������Բ����Զ�����
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////fputs - дһ���ַ�����������ȥ
//// int fputs(const char* string,FILE* stream);
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

////�Ӽ��̣���Ļ�������
//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	fgets(buf,1024,stdin);  //�ӱ�׼��������ȡ
//	fputs(buf, stdout);     //�������׼�����
//	//�ȼ���
//	gets(buf);
//	puts(buf);
//	return 0;
//}
//
////fprintf���� - 
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
//	//���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�Ը�ʽ������ʽд�ļ�
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////fscanf ����
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

////��Ļ���������
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

//������
//scanf      fscanf     sscanf
//printf	 fprintf    sprintf
//scanf/printf����Ա�׼������ / ��׼������ĸ�ʽ������ / ������
//fscanf/fprintf��������е�������/����������ĸ�ʽ������/������  - ��������
//sscanf/sprintfǰ���Ǵ��ַ����ж�ȡ��ʽ�������ݣ������ǰѸ�ʽ�������������洢�����ַ���
//��һ���ַ����а�һ����ʽ�������������
//sprintf  - д��ʽ�������鵽һ���ַ�����

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

 
