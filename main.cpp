#include <iostream>
#include "opencv2/opencv.hpp"
using namespace std;
using namespace cv;
int main()
{
    Mat rimga,rimgb; // 640x480的图像
    Mat imga=imread("./../ImageA.jpg");
    if(imga.empty())
    {
        cout<<"Can not read ImageA.jpg!"<<endl;
        return 1;
    }
    resize(imga,rimga,Size(640,480));
    imshow("ImageA",rimga);
    imwrite("./../Resize_A.jpg",rimga);
    Mat imgb=imread("./../ImageB.jpg");
    if(imgb.empty())
    {
        cout<<"Can not read ImageB.jpg!"<<endl;
        return 1;
    }
    resize(imgb,rimgb,Size(640,480));
    imshow("ImageB",rimgb);
    imwrite("./../Resize_B.jpg",rimgb);

    //计算矩阵H
    vector<Point2f> pointa;
    vector<Point2f> pointb;

    pointa.push_back(Point2f(1697,1205));
    pointa.push_back(Point2f(1908,979));
    pointa.push_back(Point2f(2297,1326));
    pointa.push_back(Point2f(2020,2573));
    pointa.push_back(Point2f(1245,2139));
    pointa.push_back(Point2f(1089,1972));
    pointa.push_back(Point2f(1401,1597));

    pointb.push_back(Point2f(1251,906));
    pointb.push_back(Point2f(1398,633));
    pointb.push_back(Point2f(1866,865));
    pointb.push_back(Point2f(1927,2156));
    pointb.push_back(Point2f(1056,1929));
    pointb.push_back(Point2f(866,1826));
    pointb.push_back(Point2f(1076,1370));


    Mat H = findHomography(pointa, pointb, 0);// 计算矩阵H
    Mat img_b_match,rimg_b_match;
    warpPerspective(imgb,img_b_match,H,imgb.size());// 进行图像配准
    resize(img_b_match,rimg_b_match,Size(640,480));
    cout<<"变换矩阵H："<<endl<<H<<endl;
    imshow("Results",rimg_b_match);
    imwrite("./../result.jpg",rimg_b_match);
    waitKey(0);
    return 0;
}