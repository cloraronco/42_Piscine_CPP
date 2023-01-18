/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 08:47:26 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 10:40:30 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H


class Sample {

public:

	int		publicFoo;

	Sample(void);
	~Sample(void);

	void	publicBar(void) const;


private:

	int		_privateFoo;

	void	_privateBar(void) const;
	
};



#endif