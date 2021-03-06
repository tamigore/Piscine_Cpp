/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:28:25 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/10 20:10:12 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP_
# define _WEAPON_HPP_

# include <iostream>
# include <string>

class	Weapon
{
	private:

		std::string _type;
	
	public:

		Weapon();
		Weapon(std::string type);
		~Weapon();

		std::string	getType( void );
		void		setType( std::string name );
};

#endif