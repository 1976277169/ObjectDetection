#ifndef Defines_H
#define Defines_H


///@brief
///�������Ͷ���
enum EnumEvaluateType
{
	EnumEvaluateType_Null = 0,


	/*������ͷ�������������*/
	EnumEvaluateType_SingleObjects = 1,

	/*������ͷָ���������*/
	EnumEvaluateType_SingleObjectTrack = 2,

	/*������ͷָ�����˸���*/
	EnumEvaluateType_MultiPedestrian = 3,

	/*����ʶ��*/
	EnumEvaluateType_FaceRecog = 4,

	/*�쳣��Ϊʶ��*/
	EnumEvaluateType_AnomalyDetection = 5,

	/*������ͷָ����������*/
	EnumEvaluateType_MultiVehicle = 8,

	/*������ͷ��������*/
	EnumEvaluateType_SinglePedestrian = 9,

	/*�������*/
	EnumEvaluateType_FaceDetection = 10,


};


///@brief
///Ŀ�����Ͷ���
enum EnumObjectType
{
	/*����*/
	EnumObjectType_Face = 0,

	/*��*/
	EnumObjectType_Vehicle = 1,

	/*����*/
	EnumObjectType_Pedestrian = 2,

};


typedef struct ObjectStruct
{
	int objectType;
	int frameNum;
	int left;
	int top;
	int right;
	int bottom;
	float score;
	bool isOk;

}ObjectStruct;


typedef struct FaceRecogStruct
{
	int pic;
	int id;
	float score;
	bool isOk;

}FaceRecogStruct;

typedef struct __AnomalyDetectionStruct
{
	int abn;
	int startFrame;
	int endFrame;
	std::map<int, std::vector<int>> abnSegOfFrame;
} AnomalyDetStruct;

#endif


