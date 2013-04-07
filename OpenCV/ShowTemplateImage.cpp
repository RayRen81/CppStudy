#include <fstream>
#include <opencv2\opencv.hpp>

using namespace cv;
using namespace std;

int mainstc()
{
	
	//读入图像
	Mat img = imread("F:/developer/workspaces/vs2010/FaceAlign/FaceLocation/sketchMode/nose/nose3.jpg");

	//如果读入图像失败
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
	//创建窗口
	namedWindow("image",1);

	//显示图像
	imshow("image", img);

	//等待按键，按键盘任意键返回
	waitKey();

	return 0;
}