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

#ifndef KDATACACHE_H
#define KDATACACHE_H

#include <stdint.h>

#include "iseghalcanglobal.h"
#include "kcan.h"
#include "ksystem.h"
#include "kline.h"
#include "kcrates_ech238.h"
#include "kcrates_ech4x.h"
#include "kmodules.h"
#include "kchannel.h"

EXTERN_C_BEGIN

typedef enum KDeviceType {
	ModuleDevice = 0,
	Ech4xDevice = 1,
	Ech238Device = 2
} KDeviceType;

ISEGHALCAN_EXPORT extern uint32_t m_timeOutBackPlaneType;

ISEGHALCAN_EXPORT bool kdatacache_isSimulationEnabled(void);
ISEGHALCAN_EXPORT void kdatacache_createInitialDataSet(void);
ISEGHALCAN_EXPORT KDataCacheChannelColumn kdatacache_getChannelColumn(const char *objectString);
ISEGHALCAN_EXPORT KDataCacheModuleColumn kdatacache_getModuleColumn(const char *objectString);
ISEGHALCAN_EXPORT KDataCacheCrateColumn kdatacache_getCrateColumn(const char *objectString);
ISEGHALCAN_EXPORT KDataCacheLineColumn kdatacache_getDeviceColumn(const char *objectString);

ISEGHALCAN_EXPORT bool kdatacache_isWriteOnDemandEnabled(void);
ISEGHALCAN_EXPORT void kdatacache_clearWriteOnDemandEnable(void);
ISEGHALCAN_EXPORT uint16_t kdatacache_writeOnDemandLine(void);
ISEGHALCAN_EXPORT uint16_t kdatacache_writeOnDemandModule(void);
ISEGHALCAN_EXPORT bool kdatacache_hasHighPriorityChannelWriteItems(void);

ISEGHALCAN_EXPORT uint32_t kdatacache_getChannelValueUI4(uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column, uint8_t index);
ISEGHALCAN_EXPORT float kdatacache_getChannelValueR4(uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getChannelValueString(uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column);
ISEGHALCAN_EXPORT IsegTime kdatacache_getChannelTimeStampLastRefreshed(uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column);
ISEGHALCAN_EXPORT IsegTime kdatacache_getChannelTimeStampLastChanged(uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getChannelQuality(uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column);
ISEGHALCAN_EXPORT IsegResult kdatacache_setChannelValueUI4(uint32_t value, uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column, uint8_t index);
ISEGHALCAN_EXPORT IsegResult kdatacache_setChannelPolarity(const char *value, uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column);
ISEGHALCAN_EXPORT IsegResult kdatacache_setChannelValueR4(float value, uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column);

ISEGHALCAN_EXPORT bool kdatacache_simulate(void);

ISEGHALCAN_EXPORT uint32_t kdatacache_getModuleValueUI4(uint16_t line, uint16_t module, KDataCacheModuleColumn column, uint8_t index);
ISEGHALCAN_EXPORT float kdatacache_getModuleValueR4(uint16_t line, uint16_t module, KDataCacheModuleColumn column, uint8_t index);
ISEGHALCAN_EXPORT IsegTime kdatacache_getModuleTimeStampLastRefreshed(uint16_t line, uint16_t module, KDataCacheModuleColumn column);
ISEGHALCAN_EXPORT IsegTime kdatacache_getModuleTimeStampLastChanged(uint16_t line, uint16_t module, KDataCacheModuleColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getModuleQuality(uint16_t line, uint16_t module, KDataCacheModuleColumn column);
ISEGHALCAN_EXPORT IsegResult kdatacache_setModuleValueString(const char *string, uint16_t line, uint16_t module, KDataCacheModuleColumn column);
ISEGHALCAN_EXPORT IsegResult kdatacache_setModuleValueUI4(uint32_t value, uint16_t line, uint16_t module, KDataCacheModuleColumn column, uint8_t index);
ISEGHALCAN_EXPORT const char *kdatacache_getModuleValueString(uint16_t line, uint16_t module, KDataCacheModuleColumn column);
ISEGHALCAN_EXPORT IsegResult kdatacache_setModuleValueR4(float value, uint16_t line, uint16_t module, KDataCacheModuleColumn column);
ISEGHALCAN_EXPORT bool kdatacache_isModulAlive(uint16_t line, uint16_t module);
ISEGHALCAN_EXPORT uint8_t kdatacache_getModuleChannelNumber(uint16_t line, uint16_t module);

ISEGHALCAN_EXPORT CrateCache *kdatacache_crateCacheValue(uint16_t line, uint16_t crate, bool isEch238);
ISEGHALCAN_EXPORT uint32_t kdatacache_getCrateValueUI4(CrateCache *crateCache, KDataCacheCrateColumn column, uint8_t index);
ISEGHALCAN_EXPORT IsegResult kdatacache_setCrateValueUI4(uint32_t value, CrateCache *crateCache, ElementState state, KDataCacheCrateColumn column, uint8_t index);
ISEGHALCAN_EXPORT void kdataCache_setCrateCacheStateNewValue(uint16_t line, uint16_t crate, KDataCacheCrateColumn column, bool isEch238);
ISEGHALCAN_EXPORT ElementState kdataCache_crateCacheState(uint16_t line, uint16_t crate, KDataCacheCrateColumn column, bool isEch238);
ISEGHALCAN_EXPORT void kdataCache_setCrateCacheQuality(uint16_t line, uint16_t crate, KDataCacheCrateColumn column, bool isEch238);
ISEGHALCAN_EXPORT void kdataCache_setCrateCacheTimeStampLastChanged(uint16_t line, uint16_t crate, KDataCacheCrateColumn column, bool isEch238);
ISEGHALCAN_EXPORT float kdatacache_getCrateValueR4(CrateCache *crateCache, KDataCacheCrateColumn column, uint8_t index);
ISEGHALCAN_EXPORT const char *kdatacache_getCrateValueString(CrateCache *crateCache, KDataCacheCrateColumn column);
ISEGHALCAN_EXPORT IsegTime kdatacache_getCrateTimeStampLastRefreshed(uint16_t line, uint16_t crate, KDataCacheCrateColumn column, bool isEch238);
ISEGHALCAN_EXPORT IsegTime kdatacache_getCrateTimeStampLastChanged(uint16_t line, uint16_t crate, KDataCacheCrateColumn column, bool isEch238);
ISEGHALCAN_EXPORT const char *kdatacache_getCrateQuality(uint16_t line, uint16_t crate, KDataCacheCrateColumn column, bool isEch238);
ISEGHALCAN_EXPORT bool kdatacache_isEch238(uint16_t line, uint16_t crate);
ISEGHALCAN_EXPORT bool kdatacache_isCrateAlive(uint16_t line, uint16_t crate, bool isEch238);
ISEGHALCAN_EXPORT float kdatacache_getFanSpeedFromTemperature(bool powerOn, float temperature);

ISEGHALCAN_EXPORT void kdatacache_setCanMessageValue(const KCanMessage *rxMsg);
ISEGHALCAN_EXPORT KCanMessage kdatacache_handler(void);

ISEGHALCAN_EXPORT DataType kdatacache_getChannelDataTypeEnum(KDataCacheChannelColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getChannelDataTypeString(KDataCacheChannelColumn column, uint16_t index);
ISEGHALCAN_EXPORT const char *kdatacache_getChannelUnitString(KDataCacheChannelColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getChannelAccessString(KDataCacheChannelColumn column);

ISEGHALCAN_EXPORT DataType kdatacache_getModuleDataTypeEnum(KDataCacheModuleColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getModuleDataTypeString(KDataCacheModuleColumn column, uint16_t index);
ISEGHALCAN_EXPORT const char *kdatacache_getModuleUnitString(KDataCacheModuleColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getModuleAccessString(KDataCacheModuleColumn column);

ISEGHALCAN_EXPORT DataType kdatacache_getCrateDataTypeEnum(KDataCacheCrateColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getCrateDataTypeString(KDataCacheCrateColumn column, uint16_t index);
ISEGHALCAN_EXPORT const char *kdatacache_getCrateUnitString(KDataCacheCrateColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getCrateAccessString(KDataCacheCrateColumn column);

ISEGHALCAN_EXPORT uint32_t kdatacache_getDeviceValue(uint16_t line, KDataCacheLineColumn column);
ISEGHALCAN_EXPORT IsegResult kdatacache_setLineValue(uint16_t line, uint32_t value, KDataCacheLineColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getLineValueString(uint16_t line, KDataCacheLineColumn column, uint8_t index);
ISEGHALCAN_EXPORT IsegResult kdatacache_setLineValueString(uint16_t line, const char *string, KDataCacheLineColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_deviceQuality(uint16_t line, uint16_t device, uint16_t channel, uint16_t column, KDeviceType deviceType);
ISEGHALCAN_EXPORT IsegTime kdatacache_getLineTimeStampLastRefreshed(uint16_t line, KDataCacheLineColumn column);
ISEGHALCAN_EXPORT IsegTime kdatacache_getLineTimeStampLastChanged(uint16_t line, KDataCacheLineColumn column);
ISEGHALCAN_EXPORT bool kdatacache_createLineTimeStamp(uint16_t line, KDataCacheLineColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getLineQuality(uint16_t line, KDataCacheLineColumn column);
ISEGHALCAN_EXPORT DataType kdatacache_getLineDataTypeEnum(KDataCacheLineColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getLinePropertyString(KDataCacheLineColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getLineDataTypeString(KDataCacheLineColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getLineUnitString(KDataCacheLineColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getLineAccessString(KDataCacheLineColumn column);

ISEGHALCAN_EXPORT uint32_t kdatacache_getSystemValue(KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT IsegResult kdatacache_setSystemValue(uint32_t value, KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT void kdatacache_fetchEthItem(KDataCacheSystemColumn column, uint8_t byte);
ISEGHALCAN_EXPORT const char *kdatacache_getSystemValueString(KDataCacheSystemColumn column, uint8_t index);
ISEGHALCAN_EXPORT IsegResult kdatacache_setSystemValueString(const char *string, KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT KDataCacheSystemColumn kdatacache_getSystemColumn(const char *objectString);
ISEGHALCAN_EXPORT IsegTime kdatacache_getSystemTimeStampLastRefreshed(KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT IsegTime kdatacache_getSystemTimeStampLastChanged(KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT void kdatacache_createSystemTimeStamp(bool lastChanged, KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getSystemQuality(KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT void kdatacache_setSystemQuality(KDataCacheSystemColumn column, const char *quality);
ISEGHALCAN_EXPORT DataType kdatacache_getSystemDataTypeEnum(KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getSystemPropertyString(KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getSystemDataTypeString(KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getSystemUnitString(KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT const char *kdatacache_getSystemAccessString(KDataCacheSystemColumn column);
ISEGHALCAN_EXPORT void kdatacache_setFastStartUp(bool set);
ISEGHALCAN_EXPORT void kdatacache_setStartOnLine(int set);

ISEGHALCAN_EXPORT bool kdatacache_isDisconnected(void);
ISEGHALCAN_EXPORT void kdatacache_disconnect(void);

ISEGHALCAN_EXPORT uint32_t kcache_remainingAnswers(uint16_t line, uint16_t device, bool crate);

ISEGHALCAN_EXPORT void kdatacache_setCanBusWriteError(bool canBusWriteError);
ISEGHALCAN_EXPORT bool kdatacache_isCanBusWriteError();

ISEGHALCAN_EXPORT float kdatacache_getChannelValueSetR4(uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column);
ISEGHALCAN_EXPORT uint32_t kdatacache_getChannelValueSetUI4(uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column, uint8_t index);
ISEGHALCAN_EXPORT float kdatacache_getModuleValueSetR4(uint16_t line, uint16_t module, KDataCacheModuleColumn column, uint8_t index);
ISEGHALCAN_EXPORT uint32_t kdatacache_getModuleValueSetUI4(uint16_t line, uint16_t module, KDataCacheModuleColumn column, uint8_t index);
ISEGHALCAN_EXPORT const char *kdatacache_getModuleValueSetString(uint16_t line, uint16_t module, KDataCacheModuleColumn column);
ISEGHALCAN_EXPORT KCanMessage canMessageSystemValueString(char *string);
ISEGHALCAN_EXPORT void kdatacache_setCommSystemState(CommunicationSystem state);

EXTERN_C_END

#endif // KDATACACHE_H
