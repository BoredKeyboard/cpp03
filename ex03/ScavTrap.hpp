/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mforstho <mforstho@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/03/28 16:58:16 by mforstho      #+#    #+#                 */
/*   Updated: 2023/03/29 15:29:20 by mforstho      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef SCAVTRAP__hpP
# define SCAVTRAP__hpP

#include "ClapTrap.hpp"

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
