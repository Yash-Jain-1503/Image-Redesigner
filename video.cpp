#include <opencv2/opencv.hpp>
#include <iostream>
#include<math.h>
using namespace cv;
using namespace std;




int main(int argc, char** argv )
{

VideoCapture cap("C:/Users/yashj/Videos/Captures/yashcapture.mp4");
namedWindow("output",0);


   while(1)
   { 
    Mat img(10000,10000,CV_8UC3,Scalar(0,0,0));
    cap >>img;  
  imshow("output",img);     
  if( waitKey(30)>=0 )
	    {
	      break;
	    }
}


waitKey(0);

}