/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:01:01 by user42            #+#    #+#             */
/*   Updated: 2022/03/16 20:06:24 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string _Name;
	int			_Maxhp;
	int         _Hp;
	int         _Ep;
	int         _Dp;

public:
	ClapTrap();
	ClapTrap(const ClapTrap &data);
	ClapTrap(const std::string name);
	~ClapTrap();

	ClapTrap	&operator=(const ClapTrap &data);

	void		attack(const std::string& target);
	void		takeDamage(const unsigned int amount);
	void		beRepaired(const unsigned int amount);
	std::string	getName(void) const;
	int			getData(const char c) const;
};

#endif