/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdias-mo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:42:52 by jdias-mo          #+#    #+#             */
/*   Updated: 2023/01/05 01:33:56 by jdias-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

std::string	trunc(std::string s);
std::string	add_prompt(std::string s);
void		pause(void);
void		clear(void);

class Phonebook
{
public:

	Phonebook(void);
	~Phonebook(void);

	void	add(void);
	void	search(void) const;

private:

	int		_i;
	int		_max;
	Contact	_list[8];
};

#endif