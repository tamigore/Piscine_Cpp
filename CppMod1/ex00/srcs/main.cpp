/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 14:27:08 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/09 15:38:21 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string str;

    str = "Kiwi";
    randomChump("Gogolito");
    randomChump(str);
    randomChump(str = "Cacahuetas");
    return (0);
}