/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:00:19 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/15 18:09:57 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

#include <string>
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain &data);
	~Brain();

	Brain	&operator=(const Brain &data);

    std::string ideas[100];
};

#endif