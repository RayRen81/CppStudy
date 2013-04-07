#include <opencv2\opencv.hpp>
 
using namespace cv;
using namespace std;
 
int mainccc()
{
	//����ͼ��
	Mat img = imread("lena.jpg");

	Mat img2(800, 800, CV_8UC1);
	
	//�������ͼ��ʧ��
	if(!img.data)
	{
		cerr << "Could not open or find the image" << std::endl ;
		string i;
		cin >> i;
		return -1;
	}

	img.copyTo(img2);
	 
    //��������
	namedWindow("image",1);
 
	//��ʾͼ��
	imshow("image", img2);
 
	//�ȴ����������������������
	waitKey();

	return 0;
}