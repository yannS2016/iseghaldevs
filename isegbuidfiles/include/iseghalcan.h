/****************************************************************************
**
** Copyright (C) 2016 - 2021 iseg Spezialelektronik GmbH
** Contact: http://www.iseg-hv.com
** Contact: sales@iseg-hv.com
**
** This file is part of the isegHAL project
**
** Commercial License Usage
** Licensees holding valid commercial licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained
** in a written agreement between you and iseg. For licensing terms
** and conditions contact sales@iseg-hv.com.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
****************************************************************************/

#ifndef ISEGHALCAN_H
#define ISEGHALCAN_H

#include "isegcommon.h"
#include "iseghal.h"

#include <QByteArray>

class SerialBus;

class IsegHalCan : public IsegHal
{
public:
	IsegHalCan();
	~IsegHalCan();

	unsigned int getVersion();
	const char *getVersionString();

	IsegResult connect(const QByteArray &interface);
	IsegResult disconnect();

	IsegResult setValue(const QByteArray &object, const QByteArray &value);
	IsegItem getValue(const QByteArray &object);

	IsegItemProperty getProperty(const QByteArray &object);

	bool hasHandlerForObject(const QByteArray &object);
private:
	SerialBus *m_bus;
};

#endif // ISEGHALCAN_H
