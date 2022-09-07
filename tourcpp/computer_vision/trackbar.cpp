#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <fstream>


using namespace std;
 //global variables - used in main and call back functions
int g_slider_position = 0;
int g_run = 1, g_dontset = 0;
cv::VideoCapture g_cap;


void onTrackbarSlide(int pos, void * ){
    g_cap.set(cv::CAP_PROP_POS_FRAMES, pos);

    if(!g_dontset)
    g_run = 1;

    g_dontset = 0;
}

int main(int argc, char** argv){
    cv::namedWindow("Trackbar", 0);
    g_cap.open(string(argv[1]));
    int frames = static_cast<int>(g_cap.get(cv::CAP_PROP_POS_FRAME_COUNT));
    int tmpw = static_cast<int>(g_cap.get(cv::CAP_PROP_FRAME_WIDTH));
    int tmph = static_cast<int>(g_cap.get(cv::CAP_PROP_FRAME_HEIGHT));

    cout << "Video has " << frames << " frames of dimensions(" << tmpw << ", " << tmph << ")." << endl;

    
}


