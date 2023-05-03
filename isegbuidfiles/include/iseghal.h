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

#ifndef ISEGHAL_H
#define ISEGHAL_H

#include "isegcommon.h"

#include <QByteArray>

typedef enum KProtocol {
	NoneHal = 0,
	IsegCan,
	WienerCan,
	IsegScpi,
	WienerScpi,
	IsegVme,
	WienerVme
} KProtocol;

class IsegHal
{
public:
	IsegHal() { }
	virtual ~IsegHal() { }

	virtual unsigned int getVersion() {
		const unsigned int version[] = { VER_FILEVERSION };

		return (version[0] << 24) + (version[1] << 16) + (version[2] << 8);
	}
	virtual const char *getVersionString() {
		return VER_FILEVERSION_STR;
	}

	virtual IsegResult connect(const QByteArray &interface) = 0;
	virtual IsegResult disconnect() = 0;

	virtual IsegResult setValue(const QByteArray &object, const QByteArray &value) = 0;
	virtual IsegItem getValue(const QByteArray &object) = 0;

	virtual IsegItemProperty getProperty(const QByteArray &object) = 0;

	QByteArray getInterface() const {
		return m_interface;
	}

	virtual bool hasHandlerForObject(const QByteArray &object) = 0;

	KProtocol protocol() const { return m_protocol; }

protected:
	KProtocol m_protocol;
	void setInterface(const QByteArray &interface) {
		m_interface = interface;
	}

private:
	QByteArray m_interface;
};

#endif // ISEGHAL_H
