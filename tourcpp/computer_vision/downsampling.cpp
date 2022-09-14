// code to downsample image - sample every other pixel- remove high frequency noise in the process using high-pass filter

#include <opencv2/opencv.hpp>

int main(int argc, char** argv){
    cv::Mat img1,img2;

    cv::namedWindow("Image1", 0);
    cv::namedWindow("Image2", 0);


    img1 = cv::imread(argv[1]);
    cv::imshow("Image1", img1);
    cv::pyrDown(img1,img2);
    cv::imshow("Image2",img2);
    cv::waitKey(0);
    return 0;
}