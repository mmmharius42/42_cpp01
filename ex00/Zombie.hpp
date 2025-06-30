/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 04:11:02 by mpapin            #+#    #+#             */
/*   Updated: 2025/06/30 04:57:32 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
    private:

	    std::string name;

    public:

        Zombie(std::string name);
	    ~Zombie(void);
    
	    void announce(void);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif