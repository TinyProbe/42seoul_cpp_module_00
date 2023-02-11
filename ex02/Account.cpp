/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 13:03:33 by tkong             #+#    #+#             */
/*   Updated: 2023/02/11 14:13:58 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

static int	Account::getNbAccounts( void ) {}
static int	Account::getTotalAmount( void ) {}
static int	Account::getNbDeposits( void ) {}
static int	Account::getNbWithdrawals( void ) {}
static void	Account::displayAccountsInfos( void ) {}

Account::Account( int initial_deposit ) {

}
Account::~Account( void ) {}

void	Account::makeDeposit( int deposit ) {}
bool	Account::makeWithdrawal( int withdrawal ) {}
int		Account::checkAmount( void ) const {}
void	Account::displayStatus( void ) const {}

static void	Account::_displayTimestamp( void ) {}

Account::Account( void ) {}
