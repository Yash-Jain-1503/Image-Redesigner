#include <opencv2/opencv.hpp>
#include <iostream>
#include<math.h>
using namespace cv;
using namespace std;
int main(int argc, char** argv )
{

Mat img(300,300,CV_8UC3,Scalar(0,0,0));
for(int i=100;i<200;i++)
{
    for(int j=0;j<img.cols;j++)
    {
        img.at<Vec3b>(i,j)[0]=0;
        img.at<Vec3b>(i,j)[1]=0;
        img.at<Vec3b>(i,j)[2]=255;

    }
}
for(int i=200;i<300;i++)
{
    for(int j=0;j<img.cols;j++)
    {
        img.at<Vec3b>(i,j)[0]=0;
        img.at<Vec3b>(i,j)[1]=255;
        img.at<Vec3b>(i,j)[2]=255;

    }
}


imshow("rgb",img);
waitKey(0);

}