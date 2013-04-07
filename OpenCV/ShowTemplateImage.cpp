#include <fstream>
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int mainstc()
{
	
	//����ͼ��
	Mat img = imread("F:/developer/workspaces/vs2010/FaceAlign/FaceLocation/sketchMode/nose/nose3.jpg");

	//�������ͼ��ʧ��
	if(!img.data)
	{
		cerr << "Could not open or find the image" << std::endl ;
		string i;
		cin >> i;
		return -1;
	}

	std::vector<cv::Point> cmpnControlPts;
	int cmpnPtsNum;
	std::ifstream fin;
	fin.open("F:/developer/workspaces/vs2010/FaceAlign/FaceLocation/sketchMode/nose/nose3.pts");
	if(!fin)
	{
		cerr << "Could not open or find the pts" << std::endl ;
		string i;
		cin >> i;
		return -1;
	}
	fin >> cmpnPtsNum;
	cmpnControlPts.resize(cmpnPtsNum);
	for (int i = 0; i < cmpnPtsNum; i++)
	{
		double ptsX, ptsY;
		fin >> ptsX >> ptsY;
		Point p(ptsX, ptsY);
		stringstream ss;
		ss << i;
		printf("%d, %d, %d\n", i, p.x, p.y);
		putText(img, ss.str(), p, FONT_HERSHEY_SIMPLEX, 0.3, Scalar::all(0));
		
	}
	fin.close();
	Point p1;
	p1.x = 20;
	p1.y = 20;
	//��������
	namedWindow("image",1);

	//��ʾͼ��
	imshow("image", img);

	//�ȴ����������������������
	waitKey();

	return 0;
}