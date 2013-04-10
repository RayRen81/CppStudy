#include <string>
#include <opencv2\opencv.hpp>
#include <cstdlib>

using namespace cv;
using namespace std;

int mainErodeDilate()
{
	//∂¡»ÎÕºœÒ
	Mat img = imread("wholeSketch.jpg");

	Mat dst;

	//»Áπ˚∂¡»ÎÕºœÒ ß∞‹
	if(!img.data)
	{
		cerr << "Could not open or find the image" << std::endl ;
		string i;
		cin >> i;
		return -1;
	}

	int size = 1;

	Mat element = getStructuringElement( MORPH_ELLIPSE,	Size( 2*size+1, 2*size+1 ),Point( size, size ) );
	
	//Mat temp;
	morphologyEx(img, dst, 2, element);


	//erode(img, img, element);
	//dilate(img, img, element);

	//dilate(img, img, element);	
	//erode(img, img, element);	
	//dilate(img, img, element);
	

	imshow("processed",dst);

	waitKey();
	return 0;
}