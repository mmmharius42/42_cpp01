/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 00:07:08 by mpapin            #+#    #+#             */
/*   Updated: 2025/07/09 00:22:22 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *horde;
    int i;

    if (N <= 0)
        return(NULL);
    horde = new Zombie[N];
    i = -1;
    while(++i < N)
        horde[i] = Zombie[name];
    return(horde);            
}