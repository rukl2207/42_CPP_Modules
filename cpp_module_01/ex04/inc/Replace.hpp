#pragma once

# include <iostream>
# include <string>
# include <fstream>

class Replace
{
 public:
	Replace( void );
	~Replace( void );
	int			replace( std::string file, std::string s1, std::string s2 );
 private:
	std::string		_filename;
	std::string		_s1;
	std::string		_s2;
	std::ifstream	_infile;
	std::ofstream	_outfile;
	bool		checkParameters( void );
	bool		setFileStream( void );
	std::string	getReplaceString( std::string str );
};
