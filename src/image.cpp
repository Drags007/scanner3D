#include "image.h"

//constructor
image::image()
{
	//connection to the camera
	image_sub = imtrans.subscribe("/camera/depth/image",1, &image::imageconvertisseur, this);
	
}

//destructor
image::~image()
{

}

void image::imageconvertisseur(const sensor_msgs::ImageConstPtr&)
{
	try
	{
		//transform the ros image to an opencv image
		image_depth = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::mono16);
	}
	catch (cv_bridge::Exception& e)
	{
		ROS_ERROR("cv_bridge exception: %s", e.what());
	}
}
