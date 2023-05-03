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

#ifndef KCHANNELPROPERTIES_H
#define KCHANNELPROPERTIES_H

#include "kchannel.h"
#include "kisegtype.h"

EXTERN_C_BEGIN
extern const ItemProperty m_channelItemProperties[DataCacheColumnChannelSize] = {
	{ "Status",                EDCP_DATAID_CHN_STATUS,                  (KDataCacheColumn)DataCacheColumnChannelStatus,                DataTypeUI4, "UI4", "",  "R" },
	{ "TemperatureExternal",   EDCP_DATAID_CHN_TEMPERATURE_EXTERNAL,    (KDataCacheColumn)DataCacheColumnChannelTemperatureExternal,   DataTypeR4,  "R4",  "C", "R" },
	{ "Control",               EDCP_DATAID_CHN_CONTROL,                 (KDataCacheColumn)DataCacheColumnChannelControl,               DataTypeUI4, "UI4", "",  "RW"},
	{ "EventStatus",           EDCP_DATAID_CHN_EVENT_STATUS,            (KDataCacheColumn)DataCacheColumnChannelEventStatus,           DataTypeUI4, "UI4", "",  "RW"},
	{ "EventMask",             EDCP_DATAID_CHN_EVENT_MASK,              (KDataCacheColumn)DataCacheColumnChannelEventMask,             DataTypeUI4, "UI4", "",  "RW"},
	{ "DelayedTripAction",     EDCP_DATAID_CHN_DELAYED_TRIP_ACTION,     (KDataCacheColumn)DataCacheColumnChannelDelayedTripAction,     DataTypeUI1, "UI1", "",  "RW"},
	{ "DelayedTripTime",       EDCP_DATAID_CHN_DELAYED_TRIP_TIME,       (KDataCacheColumn)DataCacheColumnChannelDelayedTripTime,       DataTypeR4,  "R4",  "s", "RW"},
	{ "ExternalInhibitAction", EDCP_DATAID_CHN_EXTERNAL_INHIBIT_ACTION, (KDataCacheColumn)DataCacheColumnChannelExternalInhibitAction, DataTypeUI1, "UI1", "",  "RW"},
	{ "VoltageSet",            EDCP_DATAID_CHN_VOLTAGE_SET,             (KDataCacheColumn)DataCacheColumnChannelVoltageSet,            DataTypeR4,  "R4",  "V", "RW"},
	{ "VoltageBounds",         EDCP_DATAID_CHN_VOLTAGE_BOUNDS,          (KDataCacheColumn)DataCacheColumnChannelVoltageBounds,         DataTypeR4,  "R4",  "V", "RW"},
	{ "VoltageRampSpeedUp",    EDCP_DATAID_CHN_VOLTAGE_RAMP_SPEED_UP,   (KDataCacheColumn)DataCacheColumnChannelVoltageRampSpeedUp,    DataTypeR4,  "R4",  "V/s", "RW"},
	{ "VoltageRampSpeedDown",  EDCP_DATAID_CHN_VOLTAGE_RAMP_SPEED_DOWN, (KDataCacheColumn)DataCacheColumnChannelVoltageRampSpeedDown,  DataTypeR4,  "R4",  "V/s", "RW"},
	{ "VoltageRampPriority",   EDCP_DATAID_CHN_VOLTAGE_RAMP_PRIORITY,   (KDataCacheColumn)DataCacheColumnChannelVoltageRampPriority,   DataTypeUI4, "UI4", "",  "RW"},
	{ "VoltageBottom",         EDCP_DATAID_CHN_VOLTAGE_BOTTOM,          (KDataCacheColumn)DataCacheColumnChannelVoltageBottom,         DataTypeR4,  "R4",  "",  "RW"},
	{ "CurrentSet",            EDCP_DATAID_CHN_CURRENT_SET,             (KDataCacheColumn)DataCacheColumnChannelCurrentSet,            DataTypeR4,  "R4",  "A", "RW"},
	{ "CurrentBounds",         EDCP_DATAID_CHN_CURRENT_BOUNDS,          (KDataCacheColumn)DataCacheColumnChannelCurrentBounds,         DataTypeR4,  "R4",  "A", "RW"},
	{ "CurrentRampSpeedUp",    EDCP_DATAID_CHN_CURRENT_RAMP_SPEED_UP,   (KDataCacheColumn)DataCacheColumnChannelCurrentRampSpeedUp,    DataTypeR4,  "R4",  "A/s", "RW"},
	{ "CurrentRampSpeedDown",  EDCP_DATAID_CHN_CURRENT_RAMP_SPEED_DOWN, (KDataCacheColumn)DataCacheColumnChannelCurrentRampSpeedDown,  DataTypeR4,  "R4",  "A/s", "RW"},
	{ "VctCoefficient",        EDCP_DATAID_CHN_VCT_COEFFICIENT,         (KDataCacheColumn)DataCacheColumnChannelVctCoefficient,        DataTypeR4,  "R4",  "V/K", "RW" },
	{ "OutputMode",            EDCP_DATAID_CHN_OUTPUT_MODE,             (KDataCacheColumn)DataCacheColumnChannelOutputMode,            DataTypeUI1, "UI1", "", "RW" },
	{ "OutputPolarity",        EDCP_DATAID_CHN_OUTPUT_POLARITY,         (KDataCacheColumn)DataCacheColumnChannelOutputPolarity,        DataTypeString, "STR", "", "RW" },
	{ "Resistance",            EDCP_DATAID_CHN_RESISTANCE_EXTERNAL,     (KDataCacheColumn)DataCacheColumnChannelResistanceExternal,    DataTypeR4,  "R4",  "Ohm", "RW" },
	{ "VoltageMeasure",        EDCP_DATAID_CHN_VOLTAGE_MEASURE,         (KDataCacheColumn)DataCacheColumnChannelVoltageMeasure,        DataTypeR4,  "R4",  "V", "R" },
	{ "CurrentMeasure",        EDCP_DATAID_CHN_CURRENT_MEASURE,         (KDataCacheColumn)DataCacheColumnChannelCurrentMeasure,        DataTypeR4,  "R4",  "A", "R" },
	{ "VoltageNominal",        EDCP_DATAID_CHN_VOLTAGE_NOMINAL,         (KDataCacheColumn)DataCacheColumnChannelVoltageNominal,        DataTypeR4,  "R4",  "V", "R" },
	{ "CurrentNominal",        EDCP_DATAID_CHN_CURRENT_NOMINAL,         (KDataCacheColumn)DataCacheColumnChannelCurrentNominal,        DataTypeR4,  "R4",  "A", "R" },
	{ "CurrentNominalLowRange",EDCP_DATAID_CHN_CURRENT_NOMINAL_RANGE_1, (KDataCacheColumn)DataCacheColumnChannelCurrentNominalRange1,  DataTypeR4,  "R4",  "A", "R" },
	{ "VoltageRampSpeedMin",   EDCP_DATAID_CHN_VOLTAGE_RAMP_SPEED_MIN,  (KDataCacheColumn)DataCacheColumnChannelVoltageRampSpeedMin,   DataTypeR4,  "R4",  "V/s", "R"},
	{ "VoltageRampSpeedMax",   EDCP_DATAID_CHN_VOLTAGE_RAMP_SPEED_MAX,  (KDataCacheColumn)DataCacheColumnChannelVoltageRampSpeedMax,   DataTypeR4,  "R4",  "V/s", "R"},
	{ "CurrentRampSpeedMin",   EDCP_DATAID_CHN_CURRENT_RAMP_SPEED_MIN,  (KDataCacheColumn)DataCacheColumnChannelCurrentRampSpeedMin,   DataTypeR4,  "R4",  "A/s", "R"},
	{ "CurrentRampSpeedMax",   EDCP_DATAID_CHN_CURRENT_RAMP_SPEED_MAX,  (KDataCacheColumn)DataCacheColumnChannelCurrentRampSpeedMax,   DataTypeR4,  "R4",  "A/s", "R"},
	{ "OutputModeList",        EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelOutputModeList,        DataTypeString,  "STR",   "", "R" },
	{ "OutputPolarityList",    EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelOutputPolarityList,    DataTypeString,  "STR",   "", "R" },
	{ "VoltageMode",           EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelVoltageMode,           DataTypeR4,      "R4",   "V", "R" },
	{ "VoltageModeList",       EDCP_DATAID_CHN_VOLTAGE_MODE_LIST,       (KDataCacheColumn)DataCacheColumnChannelVoltageModeList0,      DataTypeString,  "STR",  "V", "R" },
	{ "VoltageModeList",       EDCP_DATAID_CHN_VOLTAGE_MODE_LIST+1,     (KDataCacheColumn)DataCacheColumnChannelVoltageModeList1,      DataTypeString,  "STR",  "V", "R" },
	{ "VoltageModeList",       EDCP_DATAID_CHN_VOLTAGE_MODE_LIST+2,     (KDataCacheColumn)DataCacheColumnChannelVoltageModeList2,      DataTypeString,  "STR",  "V", "R" },
	{ "VoltageModeList",       EDCP_DATAID_CHN_VOLTAGE_MODE_LIST+3,     (KDataCacheColumn)DataCacheColumnChannelVoltageModeList3,      DataTypeString,  "STR",  "V", "R" },
	{ "VoltageModeList",       EDCP_DATAID_CHN_VOLTAGE_MODE_LIST+4,     (KDataCacheColumn)DataCacheColumnChannelVoltageModeList4,      DataTypeString,  "STR",  "V", "R" },
	{ "VoltageModeList",       EDCP_DATAID_CHN_VOLTAGE_MODE_LIST+5,     (KDataCacheColumn)DataCacheColumnChannelVoltageModeList5,      DataTypeString,  "STR",  "V", "R" },
	{ "CurrentMode",           EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelCurrentMode,           DataTypeR4,      "R4",   "A", "R" },
	{ "CurrentModeList",       EDCP_DATAID_CHN_CURRENT_MODE_LIST,       (KDataCacheColumn)DataCacheColumnChannelCurrentModeList0,      DataTypeString,  "STR",  "A", "R" },
	{ "CurrentModeList",       EDCP_DATAID_CHN_CURRENT_MODE_LIST+1,     (KDataCacheColumn)DataCacheColumnChannelCurrentModeList1,      DataTypeString,  "STR",  "A", "R" },
	{ "CurrentModeList",       EDCP_DATAID_CHN_CURRENT_MODE_LIST+2,     (KDataCacheColumn)DataCacheColumnChannelCurrentModeList2,      DataTypeString,  "STR",  "A", "R" },
	{ "CurrentModeList",       EDCP_DATAID_CHN_CURRENT_MODE_LIST+3,     (KDataCacheColumn)DataCacheColumnChannelCurrentModeList3,      DataTypeString,  "STR",  "A", "R" },
	{ "CurrentModeList",       EDCP_DATAID_CHN_CURRENT_MODE_LIST+4,     (KDataCacheColumn)DataCacheColumnChannelCurrentModeList4,      DataTypeString,  "STR",  "A", "R" },
	{ "CurrentModeList",       EDCP_DATAID_CHN_CURRENT_MODE_LIST+5,     (KDataCacheColumn)DataCacheColumnChannelCurrentModeList5,      DataTypeString,  "STR",  "A", "R" },
	{ "Temperature",           EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelTemperature,           DataTypeR4,      "R4",   "C", "R" },
	{ "TemperatureTrip",       EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelTemperatureTrip,       DataTypeR4,      "R4",   "C", "RW" },
	{ "TemperatureTripAction", EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelTemperatureTripAction, DataTypeUI1,     "UI1",   "", "RW" },
	{ "TemperatureTripTime",   EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelTemperatureTripTime,   DataTypeR4,      "R4",   "s", "RW" },
	{ "TemperatureTripMax",    EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelTemperatureTripMax,    DataTypeR4,      "R4",   "C", "R" },
	{ "VoltageLowTrip",        EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelVoltageLowTrip,        DataTypeR4,      "R4",   "V", "RW" },
	{ "VoltageLowTripAction",  EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelVoltageLowTripAction,  DataTypeUI1,     "UI1",   "", "RW" },
	{ "VoltageLowTripTime",    EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelVoltageLowTripTime,    DataTypeR4,      "R4",   "s", "RW" },
	{ "VoltageTrip",           EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelVoltageTrip,           DataTypeR4,      "R4",   "V", "RW" },
	{ "VoltageTripAction",     EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelVoltageTripAction,     DataTypeUI1,     "UI1",   "", "RW" },
	{ "VoltageTripTime",       EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelVoltageTripTime,       DataTypeR4,      "R4",   "s", "RW" },
	{ "VoltageTripMax",        EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelVoltageTripMax,        DataTypeR4,      "R4",   "V", "R" },
	{ "VoltageTerminalTrip",   EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelVoltageTerminalTrip,   DataTypeR4,      "R4",   "V", "RW" },
	{ "VoltageTerminalTripAction", EDCP_DATAID_NONE,                    (KDataCacheColumn)DataCacheColumnChannelVoltageTerminalTripAction, DataTypeUI1, "UI1",   "", "RW" },
	{ "VoltageTerminalTripTime", EDCP_DATAID_NONE,                      (KDataCacheColumn)DataCacheColumnChannelVoltageTerminalTripTime, DataTypeR4,    "R4",   "s", "RW" },
	{ "VoltageTerminalTripMax", EDCP_DATAID_NONE,                       (KDataCacheColumn)DataCacheColumnChannelVoltageTerminalTripMax, DataTypeR4,     "R4",   "V", "R" },
	{ "CurrentTrip",           EDCP_DATAID_CHN_CURRENT_SET,             (KDataCacheColumn)DataCacheColumnChannelCurrentTrip,           DataTypeR4,      "R4",   "A", "R" },
	{ "CurrentTripMax",        EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelCurrentTripMax,        DataTypeR4,      "R4",   "A", "R" },
	{ "PowerTrip",             EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelPowerTrip,             DataTypeR4,      "R4",   "W", "RW" },
	{ "PowerTripAction",       EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelPowerTripAction,       DataTypeUI1,     "UI1",   "", "RW" },
	{ "PowerTripTime",         EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelPowerTripTime,         DataTypeR4,      "R4",   "s", "RW" },
	{ "PowerTripMax",          EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelPowerTripMax,          DataTypeR4,      "R4",   "W", "R" },
	{ "TimeoutTripAction",     EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelTimeoutTripAction,     DataTypeUI1,     "UI1",   "", "RW" },
	{ "TimeoutTripTime",       EDCP_DATAID_NONE,                        (KDataCacheColumn)DataCacheColumnChannelTimeoutTripTime,       DataTypeR4,      "R4",   "s", "RW" },
};
EXTERN_C_END
extern const char snmpObject[DataCacheColumnChannelSize][OBJECT_NAME_SIZE] = {
	"Status",
	"TemperatureExternal",
	"Control",
	"EventStatus",
	"EventMask",
	"CurrentTripAction",
	"CurrentTripTime",
	"ExternalInhibitAction",
	"VoltageSet",
	"VoltageBounds",
	"VoltageRampSpeedUp",
	"VoltageRampSpeedDown",
	"VoltageRampPriority",
	"VoltageBottom",
	"CurrentTrip",
	"CurrentBounds",
	"CurrentRampSpeedUp",
	"CurrentRampSpeedDown",
	"VctCoefficient",
	"OutputMode",
	"OutputPolarity",
	"Resistance",
	"VoltageTerminalMeasure",
	"CurrentMeasure",
	"VoltageNominal",
	"CurrentNominal",
	"CurrentNominalLowRange",
	"VoltageRampSpeedMin",
	"VoltageRampSpeedMax",
	"CurrentRampSpeedMin",
	"CurrentRampSpeedMax",
	"OutputModeList",
	"OutputPolarityList",
	"VoltageMode",
	"VoltageModeList",
	"VoltageModeList",
	"VoltageModeList",
	"VoltageModeList",
	"VoltageModeList",
	"VoltageModeList",
	"CurrentMode",
	"CurrentModeList",
	"CurrentModeList",
	"CurrentModeList",
	"CurrentModeList",
	"CurrentModeList",
	"CurrentModeList",
	"Temperature",
	"TemperatureTrip",
	"TemperatureTripAction",
	"TemperatureTripTime",
	"TemperatureTripMax",
	"VoltageLowTrip",
	"VoltageLowTripAction",
	"VoltageLowTripTime",
	"VoltageTrip",
	"VoltageTripAction",
	"VoltageTripTime",
	"VoltageTripMax",
	"VoltageTerminalTrip",
	"VoltageTerminalTripAction",
	"VoltageTerminalTripTime",
	"VoltageTerminalTripMax",
	"CurrentTripMax",
	"PowerTrip",
	"PowerTripAction",
	"PowerTripTime",
	"PowerTripMax",
	"TimeoutTripAction",
	"TimeoutTripTime",
};

#endif // KCHANNELPROPERTIES_H
