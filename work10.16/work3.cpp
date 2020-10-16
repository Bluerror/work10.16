#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::Mat scrMat = imread("C:\\Users\\Lenovo\\source\\repos\\work10.16\\2.jpg", 0);
	cv::Mat resultt;
	cv::Mat labels;
	cv::Mat stats;
	cv::Mat centroids;
	threshold(scrMat, resultt, 100, 255, THRESH_OTSU);
	cv::Mat des = getStructuringElement(MORPH_ELLIPSE, Size(20,20));
	
	dilate(resultt, resultt,des,
		Point(-1, -1), 1
	);
	erode(resultt, resultt, des,
		Point(-1, -1), 1
	);

	imshow("final", resultt);

	int a = connectedComponentsWithStats(resultt, labels,
		stats, centroids,
		8, CV_32S);



	std::cout << "¸öÊý" << a - 1 << std::endl;


	waitKey(0);
	return 0;
}