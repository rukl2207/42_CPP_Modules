#pragma once

#ifndef POINT_HPP
# define POINT_HPP

# include "../inc/Fixed.hpp"

class Point {
public:
	// default constructor
	Point( void );

	// copy constructor
	Point( const Point &point );

	// float constructor
	Point( const float x, const float y );

	// copy assignment operator overload
	Point& operator= ( const Point &other );

	//destructor
	~Point();

	// Getter
	Fixed getX() const;
	Fixed getY() const;


private:
	Fixed const	_x;
	Fixed const	_y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
