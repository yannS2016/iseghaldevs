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

#ifndef KSTRING_H
#define KSTRING_H

#include "isegcommon.h"
#include "iseghalcanglobal.h"

#include <stddef.h>
#include <stdint.h>

EXTERN_C_BEGIN
ISEGHALCAN_EXPORT void *memrcpy(void *dst, const void *src, size_t count);
ISEGHALCAN_EXPORT uint32_t bitArrayIndexedValue(uint32_t destinationValue, uint32_t sourceValue, uint8_t index);

ISEGHALCAN_EXPORT int kstring_equals(const char *str, const char *needle);
ISEGHALCAN_EXPORT int kstring_startsWith(const char *str, const char *needle);
ISEGHALCAN_EXPORT int kstring_endsWith(const char *str, const char *needle);
ISEGHALCAN_EXPORT void kstring_chop(char *str, size_t size);
EXTERN_C_END

#endif // KSTRING_H
