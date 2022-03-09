/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:28:25 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/09 17:16:07 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP_
# define _ZOMBIE_HPP_

# include <iostream>
# include <string>

class	Zombie
{
	private:

		std::string _name;
	
	public:

		Zombie();
		~Zombie();

		void		announce( void );
		std::string	getName( void );
		void		setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );
Zombie*	newZombie( std::string name );

#endif