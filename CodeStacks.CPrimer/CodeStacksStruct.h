#pragma once

/**
�������ڱ�׼ͷ�ļ���

**/

#include <string>

using namespace std;

class CodeStacksStruct
{
public://������
	CodeStacksStruct();
	CodeStacksStruct(int numbers);
	CodeStacksStruct(string s1, string s2, string s3);//ÿ��ͷ�ļ�������һ�����ء�����������������ڶ����ļ������Ӷ�Ӧ�����ء�����ʵ��

	~CodeStacksStruct();//�������ҽ���һ���ͺ�

	void InitContext();
	int GetSummation(int i1, int i2);
	string Printer(string context);

	int sum;

	//����д��û��̫��ı�Ҫ��д��������������ͺ�
public:
	CodeStacksStruct(std::string flag);
};
