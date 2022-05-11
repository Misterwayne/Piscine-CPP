/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwane <mwane@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:19:47 by mwane             #+#    #+#             */
/*   Updated: 2022/05/11 17:24:39 by mwane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
	public :

		class GradetooHighExcep : public std::exception
		{
			public :

			GradetooHighExcep() throw();
			virtual const char* what() const throw();
		};

		class UnsignedExep : public std::exception
		{
			public :

			UnsignedExep() throw();
			virtual const char* what() const throw();
		};

		class GradetooLowExcep : public std::exception
		{
			public :

			GradetooLowExcep() throw();
			virtual const char* what() const throw();
		};
		Form(const std::string name, const int egrade, const int sgrade, bool isSigned = false);
		virtual ~Form();
		Form(Form const & copy);
		void				beSigned(Bureaucrat & bureau);
		int                 get_sgrade() const;
		int                 get_egrade() const;
		bool                get_status() const;
		std::string         get_name() const;
		void				sign();
		virtual void		execute(Bureaucrat const & executor) const;
		void				checkGrades(const Bureaucrat & bureau) const;

	private :
		const std::string 	_name;
		const int         	_egrade;
		const int         	_sgrade;
		bool				_isSigned;
};

std::ostream& operator<<(std::ostream& output, Form& paper);

#endif