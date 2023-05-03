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

#ifndef LINE_H
#define LINE_H

#include <stdint.h>

#include "isegcommon.h"
#include "kisegtype.h"

EXTERN_C_BEGIN
typedef struct LineCache {
	uint8_t      moduleNumber;
	char         moduleList[VALUE_SIZE];
	uint8_t      crateNumber;
	char         crateList[VALUE_SIZE];
} LineCache;

typedef enum KDataCacheLineColumn {
	DataCacheColumnLineFirst = 0,
	DataCacheColumnLineCanStatus = DataCacheColumnLineFirst,
	DataCacheColumnLineCanBitRate,
	DataCacheColumnLineModuleNumber,
	DataCacheColumnLineModuleList,
	DataCacheColumnLineCrateNumber,
	DataCacheColumnLineCrateList,
	DataCacheColumnLineLogPath,
	DataCacheColumnLineLogLevel,
	DataCacheColumnLineSize
} KDataCacheLineColumn;

extern ISEGHALCAN_EXPORT LineCache m_lineCacheValue[DataCacheMaxLines];
extern IsegTime m_lineCacheTimeStampLastRefreshed[DataCacheMaxLines][DataCacheColumnLineSize];
extern IsegTime m_lineCacheTimeStampLastChanged[DataCacheMaxLines][DataCacheColumnLineSize];
extern char m_lineCacheQuality[DataCacheMaxLines][DataCacheColumnLineSize][QUALITY_SIZE];
extern ElementState m_lineCacheState[DataCacheMaxLines][DataCacheColumnLineSize];

extern const ItemProperty m_lineItemProperties[DataCacheColumnLineSize];

uint8_t kline_moduleNumber(uint16_t line);
EXTERN_C_END

#endif // LINE_H
