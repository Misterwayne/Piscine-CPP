/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:45:30 by mwane             #+#    #+#             */
/*   Updated: 2022/05/11 16:00:04 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef BUREAU_HPP
# define BUREAU_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
	public :
		
		class GradetooHighExcep : public std::exception
		{
			public :

			GradetooHighExcep() throw();
			virtual const char* what() const throw();
		};

		class GradetooLowExcep : public std::exception
		{
			public :

			GradetooLowExcep() throw();
			virtual const char* what() const throw();
		};

		Bureaucrat(const std::string & name = "bob", int grade = 150);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const & copy);

		Bureaucrat&         operator=(Bureaucrat & copy);
		int                 get_grade() const;
		const std::string&  get_name() const;
		void                UpGrade();
		void                DownGrade();
		void				signForm(Form &paper);
	private :
		const std::string 	_name;
		int                 _grade;
};

std::ostream& operator<<(std::ostream& output, Bureaucrat& bureau);

#endif
