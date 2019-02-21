#include "ros/ros.h"
#include <iostream>
#include <stdio.h>
#include "include/image.hpp"

using namespace std;


int main (int argc, char**argv)
{
	ros::init(argc, argv, "mesure");
	//instantiation of the image class
	image img;
	while(ros::ok())
	{
		
		ros::spinOnce();
	}
	return 0;

}
