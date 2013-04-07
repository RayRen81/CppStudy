#include <string>
#include <opencv2\opencv.hpp>
#include <cstdlib>

using namespace cv;
using namespace std;

int mainbg()
{
	//读入图像
	Mat img = imread("photo/input10.bmp");

	//如果读入图像失败
	if(!img.data)
	{
		cerr << "Could not open or find the image" << std::endl ;
		string i;
		cin >> i;
		return -1;
	}


	//创建窗口
	namedWindow("orginal",1);

	//显示图像
	imshow("orginal", img);

	int startRow = 0;
	int endrow = img.rows*0.2;
	int startCol1 = 0;
	int endCol1 = img.cols*0.1;
	int startCol2 = img.cols*0.9;
	int endCol2 = img.cols;

	Mat upShoulder = img.rowRange(startRow, endrow);
	Mat leftBg = upShoulder.colRange(startCol1, endCol1);
	Mat rightBg = upShoulder.colRange(startCol2, endCol2);
	Scalar mean1 = cv::mean(leftBg);
	Scalar mean2 =cv::mean(rightBg);
	Scalar mean = Scalar((mean1[0] + mean2[0])/2, (mean1[1] + mean2[1])/2, (mean1[2] + mean2[2])/2);

	cout << mean << endl;

	Mat grayImg(img.rows, img.cols, CV_8UC1, Scalar::all(0));
	
	MatIterator_<Vec3b> itOfOrigin=img.begin<Vec3b>(), endOfOrigin=img.end<Vec3b>();
	MatIterator_<uchar> itOfGray=grayImg.begin<uchar>(), endOfGray=grayImg.end<uchar>();
	for(; itOfOrigin != endOfOrigin, itOfGray != endOfGray; itOfOrigin++, itOfGray ++){
		int distance = abs((*itOfOrigin)[0] - mean[0]) + abs((*itOfOrigin)[1] - mean[1]) + abs((*itOfOrigin)[2] - mean[2]);
		if(distance < 100) {
			*itOfGray = 255;
		} else {
			*itOfGray = 0;
		}
		
	}

	Mat element = getStructuringElement( MORPH_RECT,	Size( 2	*3 + 1, 2*3+1 ),Point( 3, 3 ) );
	//Mat temp;
	erode(grayImg, grayImg, element);
	dilate(grayImg, grayImg, element);

	Mat canny_output;
	vector<vector<Point> > contours;
	vector<Vec4i> hierarchy;
	/// Detect edges using canny
	Canny( grayImg, canny_output, 1, 1*2, 3 );
	/// Find contours
	findContours( canny_output, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, Point(0, 0) );
	for(int i = 0; i < contours.size(); i++){
		cout << "The " << i + 1 << " contours " << contours[i].size() << " points" << endl;
		for(int j = 0; j < contours[i].size(); j++) {
			//cout << contours[i][j].x << " " << contours[i][j].y << endl;
		}
	}

	imshow("gray", grayImg);

	
	
	//等待按键，按键盘任意键返回
	waitKey();

	return 0;
}