/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fluchten <fluchten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:35:15 by fluchten          #+#    #+#             */
/*   Updated: 2023/04/04 09:34:03 by fluchten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(const Cat& rhs);
		Cat& operator=(const Cat& rhs);
		~Cat(void);

		void	makeSound(void) const;
};

#endif
