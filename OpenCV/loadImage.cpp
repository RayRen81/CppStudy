#include <string>
#include <opencv2\opencv.hpp>
 
using namespace cv;
using namespace std;
 
int mainbbb()
{
	//����ͼ��
	Mat img = imread("lena.jpg");
	
	//�������ͼ��ʧ��
	if(!img.data)
	{
		cerr << "Could not open or find the image" << std::endl ;
		string i;
		cin >> i;
		return -1;
	}
	
 
	//��������
	namedWindow("image",1);
 
	//��ʾͼ��
	imshow("image", img);
 
	//�ȴ����������������������
	waitKey();
 
	return 0;
}