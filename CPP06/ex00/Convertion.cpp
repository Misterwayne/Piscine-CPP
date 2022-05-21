/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convertion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truepath <truepath@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:12:55 by truepath          #+#    #+#             */
/*   Updated: 2022/05/20 19:57:49 by truepath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertion.hpp"

Convertion::Convertion(std::string &data)
{
    if (isChar(data))
        charCase(data);
    else if (isInt(data))
        intCase(data);
    else if (isFloat(data))
        floatCase(data);
    else if (isDouble(data))
        doubleCase(data);
    else
        throw WrongData();
}

Convertion::~Convertion()
{
    
}

bool    Convertion::isChar(std::string &data)
{
    int p;

    p = atoi(data.c_str());
    if (p == 0 && data[0] != 48)
        p = (int)data[0];
    if (data[1] == '\0' && (p >= 32 && p <= 126))
		return (1);
	return (0);
}

bool    Convertion::isInt(std::string& data)
{
	std::string nbr(data);
    int sign = 0;
	
    if (data[0] == '-' && data[1] != '\0')
    {
	    nbr = data.substr(1, std::string::npos);
        sign = 1;
    }
    if (nbr.size() > 10)
        return (0);
	if (atoi(data.c_str()) > 0 && sign)
		return (0);
    if (atoi(nbr.c_str()) < 0 && !sign)
		return (0);
    if (nbr.find_first_not_of("0123456789") != std::string::npos)
        return (0);
	return (1);
}

bool    Convertion::isFloat(std::string& data)
{
	std::string nbr(data);
	int i = 0;
	int point = 0;
    
	if (data == "nanf" || data == "+inff" || data == "-inff")
		return (1);
	if ((data[0] == '-' && !isdigit(data[1])) || (data[0] != '-' && !isdigit(data[0])))
		return (0);
	if (data[0] == '-')
		nbr = data.substr(1, std::string::npos);
	if (!isdigit(nbr[0]))
		return (0);
	while (nbr[++i])
	{
		if (nbr[i] == '.' && isdigit(nbr[i + 1]))
			point++;
		if (point > 1)
			return (0);
	}
    if (nbr[i - 1] == 'f')
        return (1);
	return (0);
}

bool    Convertion::isDouble(std::string &data)
{
	std::string nbr(data);
	int i = 0;
	int point = 0;
    
    if (data == "nan" || data == "+inf" || data == "-inf")
		return (1);
	if ((data[0] == '-' && !isdigit(data[1])) || (data[0] != '-' && !isdigit(data[0])))
		return (0);
	if (data[0] == '-')
		nbr = data.substr(1, std::string::npos);
	if (!isdigit(nbr[0]))
		return (0);
	while (nbr[++i] != 0)
	{
		if (nbr[i] == '.' && isdigit(nbr[i + 1]))
			point++;
        else if (!isdigit(nbr[i]))
            return (0);
	}
	if (point > 1 || nbr[i - 1] == '.' || nbr[i - 1] == 'f')
		return (0);
    return (1);
}

void Convertion::intCase(std::string &data)
{
	int nbr;

    nbr = atoi(data.c_str());
    std::cout<<"is int\n";
	_c = static_cast<char>(nbr);
	_d = static_cast<int>(nbr);
	_f = static_cast<float>(nbr);
	_ld = static_cast<double>(nbr);
}

void Convertion::charCase(std::string &data)
{
	char c;

    c = data[0];
    
    std::cout<<"is char\n";
	_c = static_cast<char>(c);
	_d = static_cast<int>(c);
	_f = static_cast<float>(c);
	_ld = static_cast<double>(c);
}

void Convertion::doubleCase(std::string &data)
{
	double nbr;

    std::cout<<"is double\n";
    nbr = strtod(data.c_str(),NULL);
    if (errno == ERANGE)
		return throw OutOfRange();
	_c = static_cast<char>(nbr);
	_d = static_cast<int>(nbr);
	_f = static_cast<float>(nbr);
	_ld = static_cast<double>(nbr);
}

void Convertion::floatCase(std::string &data)
{
	float nbr;

    std::cout<<"is float\n";
    nbr = strtof(data.c_str(), NULL);
    if (errno == ERANGE)
		return throw OutOfRange();
	_c = static_cast<char>(nbr);
	_d = static_cast<int>(nbr);
	_f = static_cast<float>(nbr);
	_ld = static_cast<double>(nbr);
}

std::ostream&    Convertion::printData(std::ostream &output)
{
    if ((_d >= 32 && _d <= 126))
		output << "Char: '" << _c << "'\n";
	else if (!isnan(_ld) && (_ld >= 0.0 && _ld < 128.0))
		output << "Char: non displayable\n";
	else
		output << "Char: impossible\n";
	if ((_ld < 0.0 && _ld < static_cast<double>(std::numeric_limits<int>::min())) ||
			(_ld > 0.0 && _ld > static_cast<double>(std::numeric_limits<int>::max()))
			|| isnan(_ld))
		output << "Int: impossible\n";
	else
		output << "Int: " << _d << "\n";
	output << std::fixed << std::setprecision(1);
	output << "Float: " << _f << "f\nDouble: " << _ld << "\n";
    return (output);
}

Convertion::WrongData::WrongData() throw(){};

const char    *Convertion::WrongData::what() const throw()
{
    return("Error : Wrong type of data (int, char, float, double accepted)\n");
}

Convertion::OutOfRange::OutOfRange() throw(){};

const char    *Convertion::OutOfRange::what() const throw()
{
    return("Error : Out of range\n");
}

std::ostream &operator<<(std::ostream &output, Convertion &obj)
{
    return (obj.printData(output));
}