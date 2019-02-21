#include "ros/ros.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main (int argc, char**argv)
{
	/**
	*ros::init() initialise le noeud dans ros**/
	ros::init(argc,argv,"mesure");

	/**NodeHandle est la commande pour construire le noeud**/
	ros::NodeHandle n;

	while(ros::ok())
	{
		ros::spinOnce();
	}
	return 0;

}
