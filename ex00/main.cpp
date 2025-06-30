/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 04:10:03 by mpapin            #+#    #+#             */
/*   Updated: 2025/06/30 04:57:28 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	std::cout << "=== Testing newZombie (heap allocation) ===" << std::endl;
	Zombie* heapZombie = newZombie("HeapWalker");
	heapZombie->announce();
	delete heapZombie;

	std::cout << std::endl;
	std::cout << "=== Testing randomChump (stack allocation) ===" << std::endl;
	randomChump("StackBiter");

	std::cout << std::endl;
	std::cout << "=== Testing multiple zombies ===" << std::endl;
	Zombie* zombie1 = newZombie("Alice");
	Zombie* zombie2 = newZombie("Bob");
	
	zombie1->announce();
	zombie2->announce();
	
	delete zombie1;
	delete zombie2;

	return 0;
}