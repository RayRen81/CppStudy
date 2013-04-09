#include <string>
#include <opencv2\opencv.hpp>
#include <cstdlib>

using namespace cv;
using namespace std;

int mained()
{
	//¶ÁÈëÍ¼Ïñ
	Mat img = imread("sketch.bmp");

	Mat dst;

	//Èç¹û¶ÁÈëÍ¼ÏñÊ§°Ü
	if(!img.data)
	{
		cerr << "Could not open or find the image" << std::endl ;
		string i;
		cin >> i;
		return -1;
	}

	int size = 1;

	Mat element = getStructuringElement( MORPH_RECT,	Size( 2*size+1, 2*size+1 ),Point( size, size ) );
	//Mat temp;
	//morphologyEx(img, dst, 3, element);
	erode(img, img, element);
	//erode(img, img, element);
	dilate(img, img, element);
	dilate(img, img, element);
	erode(img, img, element);
	
	

	imshow("processed",img);

	waitKey();
	return 0;
}