//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace cv;
//int main()
//{
//	cv::Mat scrMat = imread("C:\\Users\\Lenovo\\source\\repos\\work10.16\\1.jpg", 0);
//	cv::Mat resultt;
//	cv::Mat labels;
//	cv::Mat stats;
//	cv::Mat centroids;
//	cv::Mat kernel;
//	cv::Mat des= getStructuringElement(0, Size (3,3), Point(-1, -1));
//	threshold(scrMat, resultt, 100, 255, THRESH_BINARY);
//	erode(resultt, resultt, kernel,
//		Point(-1, -1), 1
//	);
//	dilate(resultt, resultt, kernel,
//		Point(-1, -1), 1
//	);
//	imshow("final", resultt);
//    int a=connectedComponentsWithStats(resultt, labels,
//	 stats, centroids,
//		 8, CV_32S);
//    
//	std::cout << "Ó²±ÒµÄ¸öÊý"<< a-1<<std::endl; 
//	
//
//	for (int i=0;i<11;i++)
//	{
//		cv::Rect rect;
//		rect.x = stats.at<int>(i,0);
//		rect.y = stats.at<int>(i,1);
//		rect.width = stats.at<int>(i,2);
//		rect.height = stats.at<int>(i, 3);
//		rectangle(scrMat, rect, CV_RGB(255, 0, 0), 1, 8, 0);
//
//	}
//	imshow("final", scrMat);
//	waitKey(0);
//	return 0;
//}
