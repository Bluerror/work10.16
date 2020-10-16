#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main()
{
	cv::Mat scrMat = imread("C:\\Users\\Lenovo\\source\\repos\\work10.16\\2.jpg", 0);
	cv::Mat result;
	cv::Mat resultt;
	cv::Mat labels;
	cv::Mat stats;
	cv::Mat centroids;
	threshold(scrMat, result, 0, 255,THRESH_BINARY_INV);
	cv::Mat des = getStructuringElement(MORPH_ELLIPSE, Size(8,8));//形态学函数
	cv::Mat des1= getStructuringElement(MORPH_ELLIPSE, Size(4,4));
	
	//dilate(resultt, resultt,des,
	//	Point(-1, -1), 1
	//);
	//erode(resultt, resultt, des,
	//	Point(-1, -1), 1
	//);

	morphologyEx(result, resultt, MORPH_OPEN,des);
	morphologyEx(resultt, resultt, MORPH_CLOSE, des1);
	/*int height = resultt.rows;
	int width = resultt.cols;
	for (int j = 0; j < height; j++)
		{
			for (int i = 0; i < width; i++)
			{
				resultt.at<uchar>(i,j) =~ result.at<uchar>(i,j);

			}
		}*/

	imshow("final", resultt);

	int a = connectedComponentsWithStats(resultt, labels,
		stats, centroids,
		8, CV_32S);



	std::cout << "个数" << a - 2 << std::endl;


	waitKey(0);
	return 0;
}

