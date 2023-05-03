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

#ifndef KSYSTEMPROPERTIES_H
#define KSYSTEMPROPERTIES_H

#include "kisegtype.h"
#include "ksystem.h"
#include "kernel/kedcp_can_dataid.h"

EXTERN_C_BEGIN
extern const ItemProperty m_systemItemProperties[DataCacheColumnSystemSize] = {
	{ "Status",            EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemCanStatus,         DataTypeString, "STR",  "",    "R" },
	{ "BitRate",           EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemCanBitRate,        DataTypeUI4   , "UI4",  "b/s", "R" },
	{ "CrateNumber",       EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemCrateNumber,       DataTypeUI4,    "UI4",  "",    "R" },
	{ "CrateList",         EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemCrateList,         DataTypeString, "STR",  "",    "R" },
	{ "ModuleNumber",      EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemModuleNumber,      DataTypeUI4,    "UI4",  "",    "R" },
	{ "CycleCounter",      EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemCycleCounter,      DataTypeUI4,    "UI4",  "",    "R" },
	{ "Configuration",     EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemConfiguration,     DataTypeUI4,    "UI2",  "",    "RW"},
	{ "Read",              EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemRead,              DataTypeString, "STR",  "",    "RW"},
	{ "Write",             EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemWrite,             DataTypeString, "STR",  "",    "W"},
	{ "LogLevel",          EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemLogLevel,          DataTypeUI4,    "UI4",  "",    "RW"},
	{ "LogPath",           EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemLogPath,           DataTypeString, "STR",  "",    "RW"},
	{ "LiveInsertion",     EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemLiveInsertion,     DataTypeBool,   "BOOL",  "",   "RW"},
	{ "Simulation",        EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemSimulation,        DataTypeBool,   "BOOL",  "",   "R" },
	{ "SaveConfiguration", EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemSaveConfiguration, DataTypeBool,   "BOOL",  "",   "RW"},
	{ "EthName",           EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemEthName,           DataTypeString, "STR",   "",   "R"},
	{ "EthAddress",        EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemEthAddress,        DataTypeString, "STR",   "",   "R"},
	{ "EthMac",            EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemEthMac,            DataTypeString, "STR",   "",   "R"},
	{ "EthNetmask",        EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemEthNetmask,        DataTypeString, "STR",   "",   "R"},
	{ "EthGateway",        EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemEthGateway,        DataTypeString, "STR",   "",   "R"},
	{ "EthNameServer",     EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemEthNameServer,     DataTypeString, "STR",   "",   "R"},
	{ "EthState",          EDCP_DATAID_NONE, (KDataCacheColumn)DataCacheColumnSystemEthState,          DataTypeString, "STR",   "",   "R"}
};
EXTERN_C_END

#endif // KSYSTEMPROPERTIES_H
