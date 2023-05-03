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

#ifndef UTILS_H
#define UTILS_H

#include "isegapi.h"

#include <QByteArray>

class Utils
{
public:
	static bool isNetworkTimeout(const char *object);
	static bool isSessionName(const char *object);
	static bool isServerVersion(const char *object);
	static bool isInternalItem(const char *object);

	static IsegItem createSessionName(const QByteArray &session);
	static IsegItem sessionName(const QByteArray &session);
	static QByteArray createTimeStamp();
	static IsegItem networkTimeout(int timeout);

	static IsegItemProperty internalItemProperty(const char *object);
};

#endif // UTILS_H
