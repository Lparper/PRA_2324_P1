
#ifndef POINT2D_H
#define POINT2D_H

#include <ostream>
#include <cmath>

class Point2D{
	public:
		double x;
		double y;

		//Métodos
		
		Point2D(double x=0, double y=0);

		friend double distance(const Point2D &a, const Point2D &b){
			double d = sqrt(pow((a.x)-(b.x), 2) + pow((a.y)-(b.y), 2));
			return d;
		}

		friend bool operator==(const Point2D &a, const Point2D &b){
			if((a.x)==(b.x) && (a.y)==(b.y))
				return true;
			else
				return false;
		}

		friend bool operator!=(const Point2D &a, const Point2D &b){
			if((a.x)==(b.x) && (a.y)==(b.y))
				return false;
			else
				return true;
		}

		friend std::ostream& operator<<( std::ostream &out, const Point2D &p){
			
			return out << "(" << p.x << " , " << p.y << ")";
		
		}

};
	    
#endif
