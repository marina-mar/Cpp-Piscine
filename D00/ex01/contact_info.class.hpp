/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_phonebook.class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcouto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:46:19 by mcouto            #+#    #+#             */
/*   Updated: 2020/01/13 18:46:22 by mcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_PHONEBOOK_CLASS_H
#define MY_PHONEBOOK_CLASS_H

class contact_info{
public:
	static int	how_many;
	char		first_name[40];
	char		last_name[40];
	char		nickname[40];
	char		login[40];
	char		postal[40];
	char		email[40];
	char		phone[40];
	char		birthday[40];
	char		meal[40];
	char		color[40];
	char		secret[40];
	contact_info(void);
	~contact_info(void);
};

#endif