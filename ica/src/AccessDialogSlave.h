/*
 * AccessDialogSlave.h - an IcaSlave providing the access dialog
 *
 * Copyright (c) 2010 Tobias Doerffel <tobydox/at/users/dot/sf/dot/net>
 * Copyright (c) 2010 Univention GmbH
 *
 * This file is part of iTALC - http://italc.sourceforge.net
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program (see COPYING); if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef ACCESS_DIALOG_SLAVE_H
#define ACCESS_DIALOG_SLAVE_H

#include "IcaSlave.h"


class AccessDialogSlave : public IcaSlave
{
	Q_OBJECT
public:
	AccessDialogSlave();
	virtual ~AccessDialogSlave();

	static QString slaveName()
	{
		return "AccessDialogSlave";
	}


private:
	virtual bool handleMessage( const Ipc::Msg &m );

} ;

#endif

