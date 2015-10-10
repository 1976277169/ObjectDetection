#ifndef _RE_H_
#define _RE_H_

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>


#define THRESHOLD 0.1

using namespace std;

#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

struct data
{
	double x01;
	double y01;
	double x02;
	double y02;
	int flag; // ����ǩ
	string imgname;
};


/***************************************************
������3֡���жϵĽ����������
��������Ľ�����Բ�ֵ�õ�
����Ҫ��ӵĽ�����
����
FileName   ����txt�ļ���
OutputFile ���txt�ļ���
***************************************************/
int Result_Increasing( const char * FileName, const char * OutputFile );



/***************************************************
������5֡���������ȥ��
���������ıȽϺ��жϵõ�
����Ҫɾ���Ľ�����
����
FileName   ����txt�ļ���
OutputFile ���txt�ļ���
***************************************************/
int Result_Removing( const char * FileName, const char * OutputFile);



#endif