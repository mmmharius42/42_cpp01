/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 04:23:35 by mpapin            #+#    #+#             */
/*   Updated: 2025/07/09 22:41:04 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
#define WEAPON_CPP

#include <string>

class Weapon {
    private :
    std::string type;
    
    public :
    Weapon(const std::string& type);
    ~Weapon();
    std::string& getType() const;
    void setType(std::string& newtype);
};

#endif 