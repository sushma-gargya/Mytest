#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
using namespace cv;
using namespace std;
int main( int argc, char** argv )
{
    String imageName1,imageName2;
    if( argc > 1)
    {
        imageName1 = argv[1];
        imageName2 = argv[2];
    }
    Mat image1,image2;
    image1 = imread( imageName1, IMREAD_COLOR ); // Read the file
    image2 = imread( imageName2, IMREAD_COLOR );
    if( image1.empty()&& image2.empty() )                      // Check for invalid input
    {
        cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    if( image1.rows==image2.rows )
    {
        namedWindow( "Display window", WINDOW_AUTOSIZE ); // Create a window for display.
        imshow( "Display window", image1 );                // Show our image inside it.
    }
    else
    {
        /*imshow( "Display window", image1 ); // Create a window for display.
        imshow( "Display window", image1 );
        imshow( "Display window", image2 );
        imshow( "Display window", image2 );*/
        cout <<  "Images are different!!!!" << std::endl ;
    }
    waitKey(0); // Wait for a keystroke in the window
    return 0;
}