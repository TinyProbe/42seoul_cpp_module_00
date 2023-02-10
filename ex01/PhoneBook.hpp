/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:22:58 by tkong             #+#    #+#             */
/*   Updated: 2023/02/11 02:23:05 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "convenient.hpp"
#include "Contact.hpp"

class PhoneBook {
	Contact ctt[8];
	int size;

	void printList();
	void printField(const std::string& str, int wid);
	void printContact(int i);
public:
	PhoneBook();
	~PhoneBook();
	void add();
	void search();

};

#endif
