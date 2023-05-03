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

#ifndef KCHANNEL_H
#define KCHANNEL_H

#include <stdint.h>

#include "isegcommon.h"
#include "kisegtype.h"
#include "kernel/kedcp_can_dataid.h"

#define ksameSign(a, b) (((a) * (b)) >= 0)

EXTERN_C_BEGIN
typedef struct ItemValue {
	uint32_t value;
	uint32_t valueSet;
	char quality[QUALITY_SIZE];
	IsegTime timeStampLastRefreshed;
	IsegTime timeStampLastChanged;
	ElementState state;
} ItemValue;
#define EmptyItemValue {0, 0, "", 0, 0, unused}

typedef enum KDataCacheChannelColumn {
	DataCacheColumnChannelFirst = 0,
	DataCacheColumnChannelStatus = DataCacheColumnChannelFirst,
	DataCacheColumnChannelTemperatureExternal,
	DataCacheColumnChannelControl,
	DataCacheColumnChannelEventStatus,
	DataCacheColumnChannelEventMask,
	DataCacheColumnChannelDelayedTripAction,
	DataCacheColumnChannelDelayedTripTime,
	DataCacheColumnChannelExternalInhibitAction,
	DataCacheColumnChannelVoltageSet,
	DataCacheColumnChannelVoltageBounds,
	DataCacheColumnChannelVoltageRampSpeedUp,
	DataCacheColumnChannelVoltageRampSpeedDown,
	DataCacheColumnChannelVoltageRampPriority,
	DataCacheColumnChannelVoltageBottom,
	DataCacheColumnChannelCurrentSet,
	DataCacheColumnChannelCurrentBounds,
	DataCacheColumnChannelCurrentRampSpeedUp,
	DataCacheColumnChannelCurrentRampSpeedDown,
	DataCacheColumnChannelVctCoefficient,
	DataCacheColumnChannelOutputMode,
	DataCacheColumnChannelOutputPolarity,
	DataCacheColumnChannelResistanceExternal,
	DataCacheColumnChannelVoltageMeasure,
	DataCacheColumnChannelCurrentMeasure,
	DataCacheColumnChannelVoltageNominal,
	DataCacheColumnChannelCurrentNominal,
	DataCacheColumnChannelCurrentNominalRange1,
	DataCacheColumnChannelVoltageRampSpeedMin,
	DataCacheColumnChannelVoltageRampSpeedMax,
	DataCacheColumnChannelCurrentRampSpeedMin,
	DataCacheColumnChannelCurrentRampSpeedMax,
	DataCacheColumnChannelOutputModeList,
	DataCacheColumnChannelOutputPolarityList,
	DataCacheColumnChannelVoltageMode,
	DataCacheColumnChannelVoltageModeList0,
	DataCacheColumnChannelVoltageModeList1,
	DataCacheColumnChannelVoltageModeList2,
	DataCacheColumnChannelVoltageModeList3,
	DataCacheColumnChannelVoltageModeList4,
	DataCacheColumnChannelVoltageModeList5,
	DataCacheColumnChannelCurrentMode,
	DataCacheColumnChannelCurrentModeList0,
	DataCacheColumnChannelCurrentModeList1,
	DataCacheColumnChannelCurrentModeList2,
	DataCacheColumnChannelCurrentModeList3,
	DataCacheColumnChannelCurrentModeList4,
	DataCacheColumnChannelCurrentModeList5,
	DataCacheColumnChannelTemperature,
	DataCacheColumnChannelTemperatureTrip,
	DataCacheColumnChannelTemperatureTripAction,
	DataCacheColumnChannelTemperatureTripTime,
	DataCacheColumnChannelTemperatureTripMax,
	DataCacheColumnChannelVoltageLowTrip,
	DataCacheColumnChannelVoltageLowTripAction,
	DataCacheColumnChannelVoltageLowTripTime,
	DataCacheColumnChannelVoltageTrip,
	DataCacheColumnChannelVoltageTripAction,
	DataCacheColumnChannelVoltageTripTime,
	DataCacheColumnChannelVoltageTripMax,
	DataCacheColumnChannelVoltageTerminalTrip,
	DataCacheColumnChannelVoltageTerminalTripAction,
	DataCacheColumnChannelVoltageTerminalTripTime,
	DataCacheColumnChannelVoltageTerminalTripMax,
	DataCacheColumnChannelCurrentTrip,
	DataCacheColumnChannelCurrentTripMax,
	DataCacheColumnChannelPowerTrip,
	DataCacheColumnChannelPowerTripAction,
	DataCacheColumnChannelPowerTripTime,
	DataCacheColumnChannelPowerTripMax,
	DataCacheColumnChannelTimeoutTripAction,
	DataCacheColumnChannelTimeoutTripTime,
	DataCacheColumnChannelSize
} KDataCacheChannelColumn;

extern ItemValue m_channelCache[DataCacheMaxLines][DataCacheMaxModules][DataCacheMaxChannels][DataCacheColumnChannelSize];
extern char m_outputModeList[DataCacheMaxLines][DataCacheMaxModules][DataCacheMaxChannels][16];
extern char m_polarityList[DataCacheMaxLines][DataCacheMaxModules][DataCacheMaxChannels][16];
extern char m_voltageModeList[DataCacheMaxLines][DataCacheMaxModules][DataCacheMaxChannels][32];
extern char m_currentModeList[DataCacheMaxLines][DataCacheMaxModules][DataCacheMaxChannels][32];

extern const ItemProperty m_channelItemProperties[DataCacheColumnChannelSize];
extern const char snmpObject[DataCacheColumnChannelSize][OBJECT_NAME_SIZE];

KDataCacheChannelColumn kchannel_columnForDataId(KEdcpDataId dataId, bool extendedInstructionSet);
void kchannel_createVoltageMode(ItemValue *channelItem);
void kchannel_createCurrentMode(ItemValue *channelItem);
void kchannel_setReceivedValue(uint32_t value, uint16_t line, uint16_t module, uint16_t channel, KDataCacheChannelColumn column);
KCanMessage kchannel_canMessageValue(uint16_t line, uint16_t module, uint16_t channel, uint16_t column);
KCanMessage kchannel_requestMessageValue(uint16_t line, uint16_t module, uint16_t channel, uint16_t column);
void kchannel_setOffInConsequenceFromCrateControl(uint16_t line, uint16_t module, uint16_t channel, uint16_t column);
void kchannel_setItemValue(ItemValue *itemValue, uint32_t value);
EXTERN_C_END

#endif // KCHANNEL_H
