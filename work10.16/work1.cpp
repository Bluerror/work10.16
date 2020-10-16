//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace cv;
//int main()
//{
//	cv::Mat scrMat = imread("C:\\Users\\Lenovo\\source\\repos\\work10.16\\1.jpg", 0);
//	cv::Mat resultt;
//	cv::Mat kernel=getStructuringElement(0,Size (3,3), Point(-1, -1));
//	threshold(scrMat, resultt, 100, 255, THRESH_BINARY);
//	erode(resultt,resultt, kernel,
//		 Point(-1, -1),  1
//		);
//	dilate(resultt, resultt, kernel,
//		Point(-1, -1), 1
//	);
//
//	imshow("final", resultt);
//
//	waitKey(0);
//	return 0;
//}