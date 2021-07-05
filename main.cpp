#include <opencv2/opencv.hpp>
#include <iostream>
#include<math.h>
using namespace cv;
using namespace std;
int main(int argc, char** argv )
{

Mat img=imread("C:/Users/yashj/opencv_proj/eros.jpg",0);
int x=img.rows;
int y=img.cols;
Mat a(x,y,CV_8UC1,Scalar(0));
  for(int i=0;i<x;i++)
  {
      for(int j=0;j<y;j++)
      {
          a.at<uchar>(i,j)=img.at<uchar>(i,j);
      }
  }
  for(int i=5;i<x-5;i++)
  {
      for(int j=5;j<y-5;j++)
      {
          bool flag=1;
          for(int k=i-5;k<=i+5;k++)
          {
              for(int l=j-5;l<=j+5;l++)
              {
                  if(img.at<uchar>(k,l)==0)
                  {
                      flag=0;
                  }
              }
          }
          if(flag==0) a.at<uchar>(i,j)=0;
      }
  }


imshow("output",img);
imshow("ero",a);
waitKey(0);

}