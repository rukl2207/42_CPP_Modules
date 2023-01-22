#include "../inc/Replace.hpp"

Replace::Replace( void )
{
	this->_filename = "";
	this->_s1 = "";
	this->_s2 = "";
}

Replace::~Replace( void	)
{}

int Replace::replace( std::string file, std::string s1, std::string s2 )
{
	this->_filename = file;
	this->_s1 = s1;
	this->_s2 = s2;
	if (!checkParameters() || !setFileStream())
		return (EXIT_FAILURE);

	std::string	str_line;
	while (true)
	{
		std::getline(_infile, str_line);
		_outfile << getReplaceString(str_line);
		if (_infile.eof())
			break;
		_outfile << std::endl;
	}
	_infile.close();
	_outfile.close();
	return (EXIT_SUCCESS);
}

bool Replace::checkParameters( void )
{
	if (this->_filename[0] == '\0')
	{
		std::cout << "Error: filename is empty." << std::endl;
		return (false);
	}
	if (this->_s1[0] == '\0')
	{
		std::cout << "Error: search string is empty." << std::endl;
		return (false);
	}
	return (true);
}

bool Replace::setFileStream( void )
{
	_infile.open(this->_filename);
	if (!_infile.is_open())
	{
		std::cout << "Error: failed to open input file." << std::endl;
		return (false);
	}
	_outfile.open((this->_filename + ".replace"), std::ios::trunc);
	if (!_outfile.is_open())
	{
		std::cout << "Error: failed to open output file." << std::endl;
		return (false);
	}
	return (true);
}

std::string Replace::getReplaceString(std::string str)
{
	size_t	position;
	size_t	start = 0;

	while ((position = str.find(_s1, start)) != std::string::npos)
	{
		str.erase(position, _s1.length());
		str.insert(position, _s2);
		start = position + _s2.length();
	}
	return (str);
}
