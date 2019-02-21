#ifdef scanner3D_include_image_hpp
#define scanner3D_include_image_hpp

#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <opencv2/imgproc/imgproc.hpp>

class image
{
/*class to recover the image of the camera and change it to an opencv image*/
	public:
	//constructor and destructor
	image();
	~image();
	//fonction to take and convert the image 
	void imageconvertisseur(const sensor_msgs::ImageConstPtr&);
	
	private:
	ros::NodeHandle n;
	image_transport::ImageTransport imtrans;
	image_transport::Subscriber image_sub;
	cv_bridge::CvImagePtr image_depth;
}

#endif
