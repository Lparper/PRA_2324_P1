
#ifndef POINT2D_H
#define POINT2D_H

#include <ostream>
#include <cmath>

class Point2D{
	public:
		double x;
		double y;

		//Métodos
		
		Point2D();

		Point2D(double x, double y);

		static double distance(const Point2D &a, const Point2D &b);

		friend bool operator==(const Point2D &a, const Point2D &b);

		friend bool operator!=(const Point2D &a, const Point2D &b);

		friend std::ostream& operator<<( std::ostream &out, const Point2D &p);

};
	    
#endif
