#include <opencv2/opencv.hpp>
#include <iostream>
#include<bits/stdc++.h>
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
  int arr[10];
  for(int i=1;i<x-1;i++)
{
	for(int j=1;j<y-1;j++)
	{
        int m=0;
        for(int k=i-1;k<=i+1;k++)
        {

        	for(int l=j-1;l<=j+1;l++)
        	{
             arr[m++]=img.at<uchar>(k,l); 
        	}
        }
         sort(arr,arr+9);
         a.at<uchar>(i,j)=arr[4];
         
	}

}
  

imshow("output",img);
imshow("ero",a);
waitKey(0);

}