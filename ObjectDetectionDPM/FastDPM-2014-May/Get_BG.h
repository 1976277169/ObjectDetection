#ifndef _GETBG_H_
#define _GETBG_H_

#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;
using namespace cv;

/***********************************************
���ɱ����йغ����Ͳ���
***********************************************/
/*
����Ŀ�Ⱥ͸߶���Ҫ��ǰ�趨����
*/





int Get_BG(string folder, char * outputbmp);
/*
��Ҫ��������opencv����
ʾ���÷���
Get_BG("H:\\ResearchCenter\\changshutuxiang\\left1\\","output.bmp");
���������
folder:    ����ͼ��������ļ��� �ļ��к���Ҫ˫б��
outputbmp: ���ͼ������� ����ļ�����ʽΪbmp
*/




/***********************************************
ȥ�������йغ����Ͳ���
***********************************************/
int Remove_BG(const char * inputfolder, char * BGimage, const char * outputfolder, double sample);
/*
��Ҫ��������opencv����
ʾ���÷���
Remove_BG("H:\\ResearchCenter\\changshutuxiang\\left1\\","output.bmp", "H:\\ResearchCenter\\changshutuxiang\\output\\", 2.0);
inputfolder:    ����ͼ��������ļ��� �ļ��к���Ҫ˫б��
BGimage:        ���ͼ������� ����ļ�����ʽΪbmp
outputfolder:   ���ͼ����ļ��� �ļ��к���Ҫ˫б��
sample:         ͼ���ϲ����ı�������
*/

Mat Remove_BG_OnePic(const char * inputfolder, IplImage* BGimage, double sample);
Mat Remove_BG_OnePic_mat(Mat imgNames, IplImage * backgroundorg, double sample);

#define BG_THR 200



#endif

