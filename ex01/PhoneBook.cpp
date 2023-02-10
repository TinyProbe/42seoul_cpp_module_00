/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:22:59 by tkong             #+#    #+#             */
/*   Updated: 2023/02/11 02:44:59 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : size() {}
PhoneBook::~PhoneBook() {}

void PhoneBook::printList() {
	printField("No.", 10);
	std::cout << '|';
	printField("First name", 10);
	std::cout << '|';
	printField("Last name", 10);
	std::cout << '|';
	printField("Nick name", 10);
	std::cout << '\n';
	for (int i = 0; i < std::min(8, size); ++i) {
		printField(std::to_string(i + 1), 10);
		std::cout << '|';
		printField(ctt[i].getFirstName(), 10);
		std::cout << '|';
		printField(ctt[i].getLastName(), 10);
		std::cout << '|';
		printField(ctt[i].getNickName(), 10);
		std::cout << '\n';
	}
}

void PhoneBook::printField(const std::string& str, int wid) {
	if ((int) str.size() > wid) {
		for (int i = 0; i < wid - 1; ++i) {
			std::cout << str[i];
		}
		std::cout << '.';
	} else {
		for (int i = std::max(0, wid - (int) str.size()); i--; ) {
			std::cout << ' ';
		}
		std::cout << str;
	}
}

void PhoneBook::printContact(int i) {
	std::cout << "First Name: " << ctt[i].getFirstName() << '\n';
	std::cout << "Last Name: " << ctt[i].getLastName() << '\n';
	std::cout << "Nick Name: " << ctt[i].getNickName() << '\n';
	std::cout << "Phone Number: " << ctt[i].getPhoneNum() << '\n';
	std::cout << "Darkest Secret: " << ctt[i].getSecret() << '\n';
}

void PhoneBook::add() {
	std::string str;

	getString("First name: ", str);
	ctt[size % 8].setFirstName(str);
	getString("Last name: ", str);
	ctt[size % 8].setLastName(str);
	getString("Nick name: ", str);
	ctt[size % 8].setNickName(str);
	getString("Phone number: ", str);
	ctt[size % 8].setPhoneNum(str);
	getString("Darkest Secret: ", str);
	ctt[size % 8].setSecret(str);
	++size;
}

void PhoneBook::search() {
	std::string str;
	int sel;

	if (!size) {
		std::cout << "There is no data to display.\n";
		return;
	}
	printList();
	getString("Select number: ", str);
	sel = stoi(str);
	if (sel >= 1 && sel <= size) {
		printContact(sel - 1);
	} else {
		std::cout << "Please make sure your select that selectable choice.\n";
	}
}
