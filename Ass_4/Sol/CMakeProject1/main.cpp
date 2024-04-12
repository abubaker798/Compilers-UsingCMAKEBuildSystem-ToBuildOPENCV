#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat image = cv::imread("C:\\Users\\quadcore\\Downloads\\CMakeProject1\\ImageFloder\\image.png", cv::IMREAD_COLOR);

    if (image.empty())
    {
        std::cout << "Failed to load image." << std::endl;
        return -1;
    }

    cv::Mat grayImage;
    cv::cvtColor(image, grayImage, cv::COLOR_BGR2GRAY);

    cv::imshow("Gray Image", grayImage);
    cv::waitKey(0);

    return 0;
}