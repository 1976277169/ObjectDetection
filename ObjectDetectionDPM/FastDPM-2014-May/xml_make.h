#ifndef _XML_MAKE_
#define _XML_MAKE_

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef struct SaveInfo
{
	//const char *mediaFile; /*��Ƶ�ļ���*/
	std::string mediaFile; /*��Ƶ�ļ���*/
	int type;		/*���������ͣ�0-������1-����2-����*/
	int frameSeq; 	/*ͼ��֡���*/
	int left;		/*Ŀ������x ����*/
	int top;		/*Ŀ������y ����*/
	int right;		/*Ŀ������X ����*/
	int bottom;		/*Ŀ������y ����*/
	int id;			/*����Ŀ��*/
	float score;

}SaveInfo;

void xml_DetectionResults(string directoryName, vector<SaveInfo> detection_results, string xml_name, int evaluateTyte);
bool cmp(SaveInfo a, SaveInfo b);
int xml_make(string directoryName, const char* fileName, string xml_name);



#endif

