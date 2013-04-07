#include <string>
#include <opencv2\opencv.hpp>
 
using namespace cv;
using namespace std;
 
int mainbbb()
{
	//读入图像
	Mat img = imread("lena.jpg");
	
	//如果读入图像失败
	if(!img.data)
	{
		cerr << "Could not open or find the image" << std::endl ;
		string i;
		cin >> i;
		return -1;
	}
	
 
	//创建窗口
	namedWindow("image",1);
 
	//显示图像
	imshow("image", img);
 
	//等待按键，按键盘任意键返回
	waitKey();
 
	return 0;
}