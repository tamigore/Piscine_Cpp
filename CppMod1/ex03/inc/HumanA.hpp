/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:28:25 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/15 12:22:28 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _HUMANA_HPP_
# define _HUMANA_HPP_

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
	private:

		std::string _name;
		Weapon		&_w;
	
	public:

		HumanA(std::string name, Weapon &w);
		~HumanA();

		void	attack( void );
		void	setWeapon( Weapon &w );
};

#endif