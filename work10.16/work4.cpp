#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace cv;
//int main()
//{
//	cv::Mat scrMat = imread("C:\\Users\\Lenovo\\source\\repos\\work10.16\\3.jpg", 0);
//	cv::Mat resultt;
//	cv::Mat labels;
//	cv::Mat stats;
//	cv::Mat centroids;
//	cv::Mat kernel= getStructuringElement(0, Size (9,9), Point(-1, -1));
//	threshold(scrMat, resultt,124, 255, THRESH_BINARY);
//	//erode(resultt, resultt, kernel,
//	//	Point(-1, -1), 1
//	//);
//	//dilate(resultt, resultt, kernel,
//	//	Point(-1, -1), 1
//	//);
//
//	morphologyEx(resultt, resultt, MORPH_OPEN, kernel);
//	morphologyEx(resultt, resultt, MORPH_CLOSE, kernel);
//	imshow("final", resultt);
//
//    int a=connectedComponentsWithStats(resultt, labels,
//	 stats, centroids,
//		 8, CV_32S);
//    
//	std::cout << "回形针的个数是"<< a-1<<std::endl; 
//		imshow("final", resultt);
//	waitKey(0);
//	return 0;
//}
