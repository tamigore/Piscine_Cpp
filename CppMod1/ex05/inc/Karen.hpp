/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamigore <tamigore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:01:39 by tamigore          #+#    #+#             */
/*   Updated: 2022/03/11 15:25:37 by tamigore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _KAREN_HPP_
# define _KAREN_HPP_

# include <iostream>

class	Karen
{
	private:
	
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		/* data */
	
	public:
	
		Karen(/* args */);
		~Karen();
		void complain( std::string level );
};

typedef  void	(Karen::*fptr)(void);

#endif