/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:01:01 by user42            #+#    #+#             */
/*   Updated: 2022/03/14 00:01:33 by user42           ###   ########.fr       */
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
	int         _Hp;
	int         _Ep;
	int         _Dp;

public:
	ClapTrap();
	~ClapTrap();

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName(void);
};

#endif