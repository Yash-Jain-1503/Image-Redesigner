#include <opencv2/opencv.hpp>
#include <iostream>
#include<math.h>
using namespace cv;
using namespace std;
int main(int argc, char** argv )
{

Mat img(300,300,CV_8UC3,Scalar(0,0,0));
for(int i=0;i<img.rows;i++)
{
    for(int j=0;j<img.cols;j++)
    {
        if(sqrt(pow(i-150,2)+pow(j-150,2))<100)
        {
            img.at<Vec3b>(i,j)[2]=255;
        }

    }
}



imshow("rgb",img);
waitKey(0);

}