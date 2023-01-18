/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 11:32:33 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/13 11:33:43 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H


class Sample {

public:

	Sample(void);
	~Sample(void);

	int		getFoo(void) const;
	void	setFoo(int v);

private:

	int		_foo;

};



#endif