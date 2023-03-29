/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 16:58:16 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/29 13:45:38 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#pragma once
#ifndef SCAVTRAP__hpP
# define SCAVTRAP__hpP

class ScavTrap : public ClapTrap {
	private:
		bool	_guardmode;
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & src);
		~ScavTrap(void);
		ScavTrap & operator=(ScavTrap const & src);
		void attack(const std::string& target);
		void guardGate(void);
};

#endif
