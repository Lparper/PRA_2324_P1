#include"Point2D.h"
#include"Shape.h"

Point2D::Point2D(){
			x=0;
            y=0;
		}

double Point2D:: distance(const Point2D &a, const Point2D &b){
			double d = sqrt(pow((a.x)-(b.x), 2) + pow((a.y)-(b.y), 2));
			return d;
		}

bool operator==(const Point2D &a, const Point2D &b) {
    return (a.x == b.x) && (a.y == b.y);
}

bool operator!=(const Point2D &a, const Point2D &b){
			if((a.x)==(b.x) && (a.y)==(b.y))
				return false;
			else
				return true;
		}


std::ostream& operator<<( std::ostream &out, const Point2D &p){
			
			return out << "(" << p.x << " , " << p.y << ")";
		
		}