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

#ifndef KUTILS_H
#define KUTILS_H

#include "iseghalcanglobal.h"
#include "isegcommon.h"

#include <stdlib.h>

EXTERN_C_BEGIN

ISEGHALCAN_EXPORT IsegResult can_getInterfaceIndex(const char *interface, int *interfaceIndex);
ISEGHALCAN_EXPORT IsegItemProperty createInvalidItemProperty(const char *object);
ISEGHALCAN_EXPORT int hexToDec(char c);

#define iseg_atoul(x) strtoul(x, NULL, 10)

EXTERN_C_END

#endif // KUTILS_H
