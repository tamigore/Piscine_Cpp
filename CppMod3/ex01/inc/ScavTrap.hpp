/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:33:35 by user42            #+#    #+#             */
/*   Updated: 2022/03/15 11:16:06 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
# define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &data);
	~ScavTrap();

	ScavTrap	&operator=(const ScavTrap &data);

	void	guardGate(void) const;
	void	attack(const std::string &target);
	void	beRepaired(unsigned int amount);
	void	takeDamage(unsigned int amount);
};

#endif
