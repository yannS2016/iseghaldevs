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

#ifndef KMODULES_H
#define KMODULES_H

#include "iseghalcanglobal.h"
#include "kchannel.h"
#include "kisegtype.h"
#include "kernel/kedcp_can_dataid.h"

EXTERN_C_BEGIN

typedef enum ModuleLogOn {
	BoardASingleModule = 0,
	BoardBModule = 1,
	BoardBSingleModule1 = 2,
	BoardBSingleModule2 = 3
} ModuleLogOn;

typedef enum MessagesLost {
	MessagesLostNone = 0,
	MessagesLostTollerant = 3
} MessagesLost;

typedef struct ModuleCache {
	TimeOut  timeOut;
	bool     logOn[4];
	bool     alive;
	bool     updated;
	uint32_t status;
	uint32_t control;
	uint32_t controlSet;
	uint32_t eventStatus;
	uint32_t eventStatusSet;
	uint32_t eventMask;
	uint32_t eventMaskSet;
	uint32_t eventChannelStatus;
	uint32_t eventChannelStatusSet;
	uint32_t eventChannelMask;
	uint32_t eventChannelMaskSet;
	uint32_t sampleRate;
	uint32_t sampleRateSet;
	char     sampleRateList[EDCP_GROUP_MAX_STRING_LENGTH];
	uint32_t digitalFilter;
	uint32_t digitalFilterSet;
	float    voltageRampSpeed;
	float    voltageRampSpeedSet;
	float    currentRampSpeed;
	float    currentRampSpeedSet;
	float    voltageLimit[LIMIT_ARRAY_SIZE];
	float    currentLimit[LIMIT_ARRAY_SIZE];
	float    temperature;
	float    temperatureTrip;
	uint32_t serialNumber;
	uint8_t  channelNumber;
	uint16_t channelMask;
	uint8_t  deviceClass;
	char     firmwareRelease[4];
	char     firmwareName[EDCP_MAX_STRING_LENGTH];
	float    temperatures[INTERNAL_TEMPERATURE_ARRAY_SIZE];
	float    supplies[VCC_ARRAY_SIZE];
	char     highVoltageOk[EDCP_MAX_STRING_LENGTH];
	char     highVoltageOkSet[EDCP_MAX_STRING_LENGTH];
	char     article[EDCP_GROUP_MAX_STRING_LENGTH];
	uint16_t lowPriorityCounter;
	uint16_t downCounterLogOn;
	uint16_t option;
	uint32_t counterSetValuesChanged;
	uint32_t counterSetValuesChangedForClients;
	char     identifierList[15];
	bool     setValuesReset;
	bool     factoryReset;
	uint16_t extendedIntructionSet32;
	char     factoryName[5];
	uint32_t hardwareOptions[HardwareOptionsArraySize];
} ModuleCache;
#define EmptyModuleCache { EmptyTimeOut, {0}, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "", \
	0, 0, 0, 0, 0, 0, {0}, {0}, 0, 0, 0, 0, 0, 0, "", "", {0}, {0}, "", "", "", 0, 0, 0, 0, 0, \
	"", 0, 0, 0, "" }
ISEGHALCAN_EXPORT extern ModuleCache m_moduleCacheValue[DataCacheMaxLines][DataCacheMaxModules];

typedef enum KDataCacheModuleColumn {
	DataCacheColumnModuleFirst = 0,
	DataCacheColumnModuleLogOn = DataCacheColumnModuleFirst,
	DataCacheColumnModuleAlive,
	DataCacheColumnModuleStatus,
	DataCacheColumnModuleControl,
	DataCacheColumnModuleEventStatus,
	DataCacheColumnModuleEventMask,
	DataCacheColumnModuleEventChannelStatus,
	DataCacheColumnModuleEventChannelMask,
	DataCacheColumnModuleSampleRate,
	DataCacheColumnModuleSampleRateList,
	DataCacheColumnModuleDigitalFilter,
	DataCacheColumnModuleVoltageRampSpeed,
	DataCacheColumnModuleCurrentRampSpeed,
	DataCacheColumnModuleVoltageLimit,
	DataCacheColumnModuleCurrentLimit,
	DataCacheColumnModuleSupplyP5,
	DataCacheColumnModuleSupplyP24,
	DataCacheColumnModuleTemperature,
	DataCacheColumnModuleTemperatureTrip,
	DataCacheColumnModuleSerialNumber,
	DataCacheColumnModuleChannelNumber,
	DataCacheColumnModuleDeviceClass,
	DataCacheColumnModuleFirmwareRelease,
	DataCacheColumnModuleFirmwareName,
	DataCacheColumnModuleTemperatures,
	DataCacheColumnModuleSupplies,
	DataCacheColumnModuleVoltageLimits,
	DataCacheColumnModuleCurrentLimits,
	DataCacheColumnModuleHighVoltageOk,
	DataCacheColumnModuleArticle,
	DataCacheColumnModuleIdentifierList,
	DataCacheColumnModuleSetValuesReset,
	DataCacheColumnModuleFactoryReset,
	DataCacheColumnModuleSetValuesChanged,
	DataCacheColumnModuleFactoryName,
	DataCacheColumnModuleHardwareOptions,

	DataCacheColumnModuleSize,

	ExtendedColumnModuleControl2,
	ExtendedColumnModuleDeviceClass2,
	ExtendedColumnModuleSetValuesChanged,
	ExtendedColumnModuleSize
} KDataCacheModuleColumn;

typedef enum KConfigurationLoops {
	ConfigurationLoopStart = 0,
	ConfigurationLoopStop = 3
} KConfigurationLoops;

typedef enum RequestChannelItemsDownCounter {
	DelayedTripCounter = 8,
	RampSpeedCounter = 4
} RequestChannelItemsDownCounter;

typedef enum DataLengthCode {
	NotImplementedModuleInstructionReplyLength = 2,
	NotImplementedGroupInstructionReplyLength = 2,
	NotImplementedChannelIntructionReplyLength = 3,
	NotAllowedChannelDataReplyLength = 7
} DataLengthCode;

typedef enum TimeOutRequest {
	TimeOutArticleRequest = 10000,
	TimeOutSampleRateListRequest = 15000,
	TimeOutModeAndPolarityRequest = 25000
} TimeOutRequest;

extern IsegTime m_moduleCacheTimeStampLastRefreshed[DataCacheMaxLines][DataCacheMaxModules][DataCacheColumnModuleSize];
extern IsegTime m_moduleCacheTimeStampLastChanged[DataCacheMaxLines][DataCacheMaxModules][DataCacheColumnModuleSize];
extern char m_moduleCacheQuality[DataCacheMaxLines][DataCacheMaxModules][DataCacheColumnModuleSize][QUALITY_SIZE];
extern ElementState m_moduleCacheState[DataCacheMaxLines][DataCacheMaxModules][DataCacheColumnModuleSize];

extern const ItemProperty m_moduleItemProperties[DataCacheColumnModuleSize];

ISEGHALCAN_EXPORT void kmodule_setCanMessageValue(const KCanMessage *rxMsg);
ISEGHALCAN_EXPORT void kmodule_switchOffByCrateCC24(uint16_t line);
ISEGHALCAN_EXPORT uint16_t kmodule_channelNumber(uint16_t line, uint16_t module);
ISEGHALCAN_EXPORT void kmodule_createIdentifierList(uint16_t line, uint16_t module);
ISEGHALCAN_EXPORT KCanMessage kmodule_handler(uint32_t *preConfiguredCounter, KCollectData *collectData);
ISEGHALCAN_EXPORT void kmodule_setAlive(bool alive, uint16_t line, uint16_t module);
ISEGHALCAN_EXPORT bool kmodule_configureRequestChannelItemFromGroup(int *downCounter,
				uint16_t line, uint16_t module, KDataCacheChannelColumn column, KCanMessage *msg);
EXTERN_C_END

#endif // KMODULES_H
