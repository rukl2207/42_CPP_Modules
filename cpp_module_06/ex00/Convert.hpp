#pragma once

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
#include <cmath>
#include <cctype>
#include <climits>
#include <cstdlib>

class Convert
{
 public:
	Convert( char *argv );
	~Convert( void );

	int		toInt( void ) const;
	char	toChar( void ) const;
	float	toFloat( void ) const;
	double	toDouble( void ) const;

	void	printInt( void );
	void	printChar( void );
	void	printFloat( void );
	void	printDouble( void );
	void	printAll( void );

	class WrongInput: public std::exception
	{
	 public:
		virtual const char* what() const throw();
	};
 private:
	std::string _input;

	Convert( void );
	Convert( const Convert& other );
	Convert& operator= (const Convert& other );

	bool	checkType( std::string str );
};

#endif
