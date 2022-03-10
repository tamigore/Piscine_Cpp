/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:28:25 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/10 20:18:15 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANB_HPP_
# define _HUMANB_HPP_

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
	private:

		std::string _name;
		Weapon		*_w;
	
	public:

		HumanB(std::string name);
		~HumanB();

		void	attack( void );
		void	setWeapon( Weapon &w );
};

#endif