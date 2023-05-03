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

#ifndef KCRATES_ECH4X_H
#define KCRATES_ECH4X_H

#include "kisegtype.h"
#include "kedcp_can_dataid.h"

EXTERN_C_BEGIN
typedef struct CrateCache {
	TimeOut  timeOut;
	bool     logOn;
	bool     alive;
	uint32_t status;
	uint32_t control;
	uint32_t controlSet;
	uint32_t eventStatus;
	uint32_t eventStatusSet;
	uint32_t eventMask;
	uint32_t eventMaskSet;
	float    fanSpeed;
	bool     powerOn;
	bool     powerOnSet;
	uint32_t serialNumber;
	uint8_t  deviceClass;
	char     firmwareRelease[4];
	char     firmwareName[EDCP_MAX_STRING_LENGTH];
	float    temperatures[INTERNAL_TEMPERATURE_ARRAY_SIZE];
	float    supplies[VCC_ARRAY_SIZE];
	char     article[EDCP_GROUP_MAX_STRING_LENGTH];
	uint32_t backPlaneType;
	uint16_t lowPriorityCounter;
	char     identifierList[15];
	float    fanSpeedHv;
	uint32_t fanFollowUpTime;
	uint32_t fanFollowUpTimeSet;
} CrateCache;
#define EmptyCrateCache { EmptyTimeOut, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, "", "", {0}, {0}, "", 0, 0, "", 0}
ISEGHALCAN_EXPORT extern CrateCache m_crateCacheValue[DataCacheMaxLines][DataCacheMaxCrates];

typedef enum KDataCacheCrateColumn {
	DataCacheColumnCrateFirst = 0,
	DataCacheColumnCrateLogOn = DataCacheColumnCrateFirst,
	DataCacheColumnCrateAlive,
	DataCacheColumnCrateStatus,
	DataCacheColumnCrateControl,
	DataCacheColumnCrateEventStatus,
	DataCacheColumnCrateEventMask,
	DataCacheColumnCrateFanSpeed,
	DataCacheColumnCratePowerOn,
	DataCacheColumnCrateSerialNumber,
	DataCacheColumnCrateDeviceClass,
	DataCacheColumnCrateFirmwareRelease,
	DataCacheColumnCrateFirmwareName,
	DataCacheColumnCrateTemperatures,
	DataCacheColumnCrateSupplies,
	DataCacheColumnCrateArticle,
	DataCacheColumnCrateIdetifierList,
	DataCacheColumnFanSpeedHighVoltage,
	DataCacheColumnFanFollowUpTime,
	DataCacheColumnCrate4xaSize,
	ExtendedColumnCrateBackPlaneType,
	DataCacheColumnCrateSupplyPositiveExtern,
	DataCacheColumnCrateSupplyLogicExtern,
	DataCacheColumnCrateSupplyBattery,
	DataCacheColumnCrateTemperatureSensor2,
	DataCacheColumnCrate238Size
} KDataCacheCrateColumn;

typedef struct ItemPropertyCrate {
	char     objectString[OBJECT_NAME_SIZE];
	uint16_t dataId;
	KDataCacheCrateColumn column;
	DataType type;
	char     typeString[DATA_TYPE_SIZE];
	char     unit[UNIT_SIZE];
	char     accessRights[ACCESS_SIZE];
} ItemPropertyCrate;

typedef enum TemperatureIndex {
	IndexMaxTemperatureHighVoltage = 2
} TemperatureIndex;

typedef enum CrateFanSpeedLimits {
	FanSpeedMin = 3200,
	FanSpeedMax = 800,
	FanSpeedMinPercent = 5,
	FanSpeedMaxPercent = 100,
	FanTempMax = 45,
	FanTempMin = 25
} CrateFanSpeedLimits;

typedef struct InternalCrateCache {
	uint32_t fanFollowUpTimeAfterPowerOff;
	bool isFanStandbyEvaluationTriggered;
} InternalCrateCache;
#define EmptyInternalCrateCache { 0, false }

extern IsegTime m_crateCacheTimeStampLastRefreshed[DataCacheMaxLines][DataCacheMaxCrates][DataCacheColumnCrate4xaSize + 1];
extern IsegTime m_crateCacheTimeStampLastChanged[DataCacheMaxLines][DataCacheMaxCrates][DataCacheColumnCrate4xaSize + 1];
extern char m_crateCacheQuality[DataCacheMaxLines][DataCacheMaxCrates][DataCacheColumnCrate4xaSize + 1][QUALITY_SIZE];
extern ElementState m_crateCacheState[DataCacheMaxLines][DataCacheMaxCrates][DataCacheColumnCrate4xaSize + 2];
extern const ItemPropertyCrate m_crateItemProperties[DataCacheColumnCrate4xaSize];

ISEGHALCAN_EXPORT bool kcrate_isEch4x(uint16_t line, uint16_t crate);
ISEGHALCAN_EXPORT void kcrate_setCanMessageValue(const KCanMessage *rxMsg);
ISEGHALCAN_EXPORT KCanMessage kcrate_handler(uint32_t *preConfiguredCounter, KCollectData *collectData);
EXTERN_C_END

#endif // KCRATES_ECH4X_H
