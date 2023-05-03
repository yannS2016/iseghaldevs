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

#ifndef SYSTEM_H
#define SYSTEM_H

#include <stdint.h>

#include "isegcommon.h"
#include "kisegtype.h"

EXTERN_C_BEGIN
typedef union KDeviceConfiguration {
	uint32_t word;
	struct bit {
		uint32_t modeTunnel: 1;
		uint32_t modeUpdate: 1;
	} bit;
} KDeviceConfiguration;

typedef enum EthernetDevice {
	Eth0 = 0,
	Wlan0,
	EthernetDeviceSize,
} EthernetDevice;

typedef struct EthernetItem {
	char value[VALUE_SIZE];
	char quality[QUALITY_SIZE];
	IsegTime timeStampLastRefreshed;
	IsegTime TimeStampLastChanged;
	ElementState state;
} EthernetItem;

typedef struct EthernetItems {
	EthernetItem EthMac;
	EthernetItem EthName;
	EthernetItem EthNameSet;
	EthernetItem EthDhcp;
	EthernetItem EthDhcpSet;
	EthernetItem EthAddress;
	EthernetItem EthAddressSet;
	EthernetItem EthNetmask;
	EthernetItem EthNetmaskSet;
	EthernetItem EthGateway;
	EthernetItem EthGatewaySet;
	EthernetItem EthNameServer;
	EthernetItem EthNameServerSet;
	EthernetItem EthState;
	EthernetItem EthStateSet;
	EthernetItem EthTimeServer;
	EthernetItem EthTimeServerSet;
	EthernetItem EthPingEnabled;
	EthernetItem EthPingEnabledSet;
} EthernetItems;

typedef struct SystemCache {
	uint8_t      crateNumber;
	char         crateList[VALUE_SIZE];
	uint32_t     moduleNumber;
	uint32_t     cycleCounter;
	KDeviceConfiguration configuration;
	char         read[MAX_READ_MESSAGES][WRITE_READ_SIZE];
	char         write[WRITE_READ_SIZE];
	bool         liveInsertion;
	bool         canBusWriteError;
	bool         fastStartUp;
	int          startOnLine;
	bool         isegHalSimulation;
	bool         saveConfiguration;
	EthernetItems ethernet[EthernetDeviceSize];
} SystemCache;

typedef enum KDataCacheSystemColumn {
	DataCacheColumnSystemFirst = 0,
	DataCacheColumnSystemCanStatus = DataCacheColumnSystemFirst,
	DataCacheColumnSystemCanBitRate,
	DataCacheColumnSystemCrateNumber,
	DataCacheColumnSystemCrateList,
	DataCacheColumnSystemModuleNumber,
	DataCacheColumnSystemCycleCounter,
	DataCacheColumnSystemConfiguration,
	DataCacheColumnSystemRead,
	DataCacheColumnSystemWrite,
	DataCacheColumnSystemLogLevel,
	DataCacheColumnSystemLogPath,
	DataCacheColumnSystemLiveInsertion,
	DataCacheColumnSystemSimulation,
	DataCacheColumnSystemSaveConfiguration,
	DataCacheColumnSystemEthName,
	DataCacheColumnSystemEthAddress,
	DataCacheColumnSystemEthMac,
	DataCacheColumnSystemEthNetmask,
	DataCacheColumnSystemEthGateway,
	DataCacheColumnSystemEthNameServer,
	DataCacheColumnSystemEthState,
	DataCacheColumnSystemSize
} KDataCacheSystemColumn;

extern SystemCache m_systemCacheValue;
extern IsegTime m_systemCacheTimeStampLastRefreshed[DataCacheColumnSystemSize];
extern IsegTime m_systemCacheTimeStampLastChanged[DataCacheColumnSystemSize];
extern char m_systemCacheQuality[DataCacheColumnSystemSize][QUALITY_SIZE];
extern ElementState m_systemCacheState[DataCacheColumnSystemSize];

extern const ItemProperty m_systemItemProperties[DataCacheColumnSystemSize];

uint8_t ksystem_moduleNumber(void);
void ksystem_fetchEthName(EthernetDevice device);
const char *ksystem_getEthName(EthernetDevice device);
void ksystem_fetchEthAddress(EthernetDevice device);
const char *ksystem_getEthAddress(EthernetDevice device);
void ksystem_setEthAddress(const char *address, EthernetDevice device);
void ksystem_fetchEthMac(EthernetDevice device);
const char *ksystem_getEthMac(EthernetDevice device);
void ksystem_fetchEthNetmask(EthernetDevice device);
const char *ksystem_getEthNetmask(EthernetDevice device);
void ksystem_fetchEthGateway(EthernetDevice device);
const char *ksystem_getEthGateway(EthernetDevice device);
void ksystem_fetchEthNameServer(EthernetDevice device);
const char *ksystem_getEthNameServer(EthernetDevice device);
void ksystem_fetchEthState(EthernetDevice device);
const char *ksystem_getEthState(EthernetDevice device);

EXTERN_C_END

#endif // SYSTEM_H
