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

#ifndef ISEGCLIENTAPI_H
#define ISEGCLIENTAPI_H

#include "isegcommon.h"

EXTERN_C_BEGIN
unsigned int iseg_getVersion(void);
const char *iseg_getVersionString(void);

IsegResult iseg_connect(const char *name, const char *interface, void *reserved);
IsegResult iseg_disconnect(const char *name);
IsegResult iseg_setItem(const char *name, const char *object, const char *value);
IsegItem iseg_getItem(const char *name, const char *object);
IsegResult iseg_getItemString(const char *name, const char *object, char *result, int size);
IsegItemProperty iseg_getItemProperty(const char *name, const char *object);
IsegResult iseg_getItemPropertyString(const char *name, const char *object, char *result, int size);
EXTERN_C_END

#endif // ISEGCLIENTAPI_H
