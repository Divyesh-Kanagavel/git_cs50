#include <opencv2/opencv.hpp>
using namespace std;
void Gaussian(const cv::Mat& img){
    cv::namedWindow("Gaussian_in", 0);
    cv::namedWindow("Gaussian_out",0);

    cv::imshow("Gaussian_in",img);

    cv::Mat out;
    cv::GaussianBlur(img,out,cv::Size(5,5), 3,3);
    cv::GaussianBlur(out,out,cv::Size(5,5), 3,3);    // double gaussian blur

    cv::imshow("Gaussian_out",out);

    cv::waitKey();

}

int main(int argc, char** argv){
    

    string img_ = string(argv[1]);

    cv::Mat image = cv::imread(img_,cv::IMREAD_COLOR);
    Gaussian(image);
    return 0;
}