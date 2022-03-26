/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 17:13:20 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/24 14:52:14 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
	srand(time(0));
	Data		*data = new Data(rand() % 16);
	Data		data_ref(rand() % 16);
	Data		res;
	uintptr_t	nb = res.serialize(data);
	Data *d1 = res.deserialize(nb);
	Data *d2 = res.deserialize(res.serialize(data));

	std::cout << "serialize : " << nb << " | deserialize : " << d1 << " vs " << d2 << std::endl;
	nb = res.serialize(&data_ref);
	d1 = res.deserialize(nb);
	d2 = res.deserialize(res.serialize(&data_ref));
	std::cout << "serialize : " << nb << " | deserialize : " << d1 << " vs " << d2 << std::endl;
	delete data;
	return 0;
}