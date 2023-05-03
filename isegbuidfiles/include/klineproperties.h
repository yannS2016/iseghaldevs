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

#ifndef KLINEPROPERTIES_H
#define KLINEPROPERTIES_H

#include "kisegtype.h"
#include "kline.h"
#include "kernel/kedcp_can_dataid.h"

EXTERN_C_BEGIN
extern const ItemProperty m_lineItemProperties[DataCacheColumnLineSize] = {
	{ "Status",       EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnLineCanStatus,    DataTypeString, "STR", "",    "R" },
	{ "BitRate",      EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnLineCanBitRate,   DataTypeUI4   , "UI4", "b/s", "R" },
	{ "ModuleNumber", EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnLineModuleNumber, DataTypeUI4,    "UI4", "",    "R" },
	{ "ModuleList",   EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnLineModuleList,   DataTypeString, "STR", "",    "R" },
	{ "CrateNumber",  EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnLineCrateNumber,  DataTypeUI4,    "UI4", "",    "R" },
	{ "CrateList",    EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnLineCrateList,    DataTypeString, "STR", "",    "R" },
	{ "LogPath",      EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnLineLogPath,      DataTypeString, "STR",  "",   "RW"},
	{ "LogLevel",     EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnLineLogLevel,     DataTypeUI4,    "UI4",  "",   "RW"}
};
EXTERN_C_END
#endif // KLINEPROPERTIES_H
