/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:28:25 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/09 17:44:59 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
	private:

		std::string _name;
		
	
	public:

		HumanA();
		~HumanA();

		void		announce( void );
		std::string	getName( void );
		void		setName( std::string name );
};

#endif