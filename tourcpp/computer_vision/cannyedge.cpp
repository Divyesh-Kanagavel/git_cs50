#include <opencv2/opencv.hpp>

int main(int argc, char** argv){
    cv::Mat img_rgb, img_gray, img_canny;

    cv::namedWindow("Example Gray",0);
    cv::namedWindow("Example Canny", 0);

    img_rgb = cv::imread(argv[1]);

    cv::cvtColor(img_rgb, img_gray, cv::COLOR_BGR2GRAY);
    cv::imshow("Example Gray",img_gray);

    cv::Canny(img_gray, img_canny, 10, 100, 3);

    cv::imshow("Example Canny",img_canny);

    cv::waitKey(0);
}