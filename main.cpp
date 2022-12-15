#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char** argv) {

    if (argc != 2) {
        std::cout << "Usage: ./demo <image_path>";
        return -1;
    }

    cv::Mat image;
    image = cv::imread(argv[1], 1);

    if (!image.data) {
        std::cout << "No image data" << std::endl;
        return -1;
    }

    std::string window_name{"OpenCV Demo"};
    cv::namedWindow(window_name, cv::WINDOW_AUTOSIZE);
    cv::imshow(window_name, image);
    cv::waitKey(0);

    return 0;
}
