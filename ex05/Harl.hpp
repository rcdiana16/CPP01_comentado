/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diana <diana@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:38:03 by diana             #+#    #+#             */
/*   Updated: 2025/10/25 22:29:49 by diana            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
	void complain(std::string level);

	private:
	void debug (void);
	void info(void);
	void warning (void);
	void error(void);
};

struct Level {
    std::string level;
    void (Harl::*func)();
};

#endif