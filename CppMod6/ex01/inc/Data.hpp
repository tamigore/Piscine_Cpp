/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:52 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/19 15:29:55 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP_
# define _BUREAUCRAT_HPP_

#include <iostream>
#include <stdexcept>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

class Data
{
private:

	uintptr_t	_raw;

public:

	Data(void);
	Data(uintptr_t raw);
	Data(Data &data);
	~Data(void);

	Data	&operator=(Data &data);

	uintptr_t	getRaw(void);
	uintptr_t	serialize(Data* ptr);
	Data*		deserialize(uintptr_t raw);

};

#endif