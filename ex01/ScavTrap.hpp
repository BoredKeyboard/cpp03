/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 16:58:16 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/28 17:11:38 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#pragma once
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class ScavTrap: public ClapTrap {
	private:

	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & src);
};

#endif
