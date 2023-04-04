/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:37:45 by fluchten          #+#    #+#             */
/*   Updated: 2023/04/04 08:02:41 by fluchten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* ************************************************************************** */
/*                               Canonical form                               */
/* ************************************************************************** */

Cat::Cat(void) : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat& rhs)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = rhs._type;
	this->_brain = new Brain(*rhs._brain);
}

Cat&	Cat::operator=(const Cat& rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

/* ************************************************************************** */
/*                          Public Member functions                           */
/* ************************************************************************** */

void	Cat::makeSound(void) const
{
	std::cout << "Miaou Miaou!" << std::endl;
}
