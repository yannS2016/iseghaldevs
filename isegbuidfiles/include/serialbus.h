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

#ifndef SERIALBUS_H
#define SERIALBUS_H

#include "isegcommon.h"
#include "iseghalcanglobal.h"

#include <QObject>

class QCanBusDevice;
class QTimer;

class ISEGHALCAN_EXPORT SerialBus : public QObject
{
	Q_OBJECT
public:
	SerialBus();
	~SerialBus();

	bool connectDevice(const QString &plugin, const QString &interfaceString, int bitRate);
	bool disconnectDevice();

private slots:
	void framesReceived();
	void sendNextFrame();
	void refreshCanBusStatus();

private:
	void readFrame();

	int m_line;
	int m_receiveCount[DataCacheMaxLines];
	QCanBusDevice *m_canDevice;
	QTimer *m_sendTimer;
	QTimer *m_timer;
};

#endif // SERIALBUS_H
