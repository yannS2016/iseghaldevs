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

#ifndef KMODULEPROPERTIES_H
#define KMODULEPROPERTIES_H

#include "kisegtype.h"
#include "kmodules.h"
#include "kernel/kedcp_can_dataid.h"

extern const ItemProperty m_moduleItemProperties[DataCacheColumnModuleSize] = {
   { "Connected",          DCP_DATAID_MOD_LOG_ON,                      (KDataCacheColumn)DataCacheColumnModuleLogOn,              DataTypeBool,   "BOOL","",    "RW"},
   { "Alive",              DCP_DATAID_MOD_LOG_ON,                      (KDataCacheColumn)DataCacheColumnModuleAlive,              DataTypeBool,   "BOOL","",    "R" },
   { "Status",             EDCP_DATAID_MOD_STATUS,                     (KDataCacheColumn)DataCacheColumnModuleStatus,             DataTypeUI4,    "UI4", "",    "R" },
   { "Control",            EDCP_DATAID_MOD_CONTROL,                    (KDataCacheColumn)DataCacheColumnModuleControl,            DataTypeUI4,    "UI4", "",    "RW"},
   { "EventStatus",        EDCP_DATAID_MOD_EVENT_STATUS,               (KDataCacheColumn)DataCacheColumnModuleEventStatus,        DataTypeUI4,    "UI4", "",    "RW"},
   { "EventMask",          EDCP_DATAID_MOD_EVENT_MASK,                 (KDataCacheColumn)DataCacheColumnModuleEventMask,          DataTypeUI4,    "UI4", "",    "RW"},
   { "EventChannelStatus", EDCP_DATAID_MOD_EVENT_CHANNEL_STATUS,       (KDataCacheColumn)DataCacheColumnModuleEventChannelStatus, DataTypeUI4,    "UI4", "",    "RW"},
   { "EventChannelMask",   EDCP_DATAID_MOD_EVENT_CHANNEL_MASK,         (KDataCacheColumn)DataCacheColumnModuleEventChannelMask,   DataTypeUI4,    "UI4", "",    "RW"},
   { "SampleRate",         EDCP_DATAID_MOD_ADC_SAMPLES_PER_SECOND,     (KDataCacheColumn)DataCacheColumnModuleSampleRate,         DataTypeUI4,    "UI4", "SPS", "RW"},
   { "SampleRateList",     EDCP_DATAID_MOD_ADC_SPS_LIST,               (KDataCacheColumn)DataCacheColumnModuleSampleRateList,     DataTypeString, "STR", "SPS", "R"},
   { "DigitalFilter",      EDCP_DATAID_MOD_DIGITAL_FILTER,             (KDataCacheColumn)DataCacheColumnModuleDigitalFilter,      DataTypeUI4,    "UI4", "",    "RW"},
   { "VoltageRampSpeed",   EDCP_DATAID_MOD_VOLTAGE_RAMP_SPEED,         (KDataCacheColumn)DataCacheColumnModuleVoltageRampSpeed,   DataTypeR4,     "R4",  "%/s", "RW"},
   { "CurrentRampSpeed",   EDCP_DATAID_MOD_CURRENT_RAMP_SPEED,         (KDataCacheColumn)DataCacheColumnModuleCurrentRampSpeed,   DataTypeR4,     "R4",  "%/s", "RW"},
   { "VoltageLimit",       EDCP_DATAID_MOD_VOLTAGE_LIMIT_REL,          (KDataCacheColumn)DataCacheColumnModuleVoltageLimit,       DataTypeR4,     "R4",  "%",   "R" },
   { "CurrentLimit",       EDCP_DATAID_MOD_CURRENT_LIMIT_REL,          (KDataCacheColumn)DataCacheColumnModuleCurrentLimit,       DataTypeR4,     "R4",  "%",   "R" },
   { "SupplyP5",           EDCP_DATAID_MOD_SUPPLY5,                    (KDataCacheColumn)DataCacheColumnModuleSupplyP5,           DataTypeR4,     "R4",  "V",   "R" },
   { "SupplyP24",          EDCP_DATAID_MOD_SUPPLY24,                   (KDataCacheColumn)DataCacheColumnModuleSupplyP24,          DataTypeR4,     "R4",  "V",   "R" },
   { "Temperature",        EDCP_DATAID_MOD_TEMPERATURE,                (KDataCacheColumn)DataCacheColumnModuleTemperature,        DataTypeR4,     "R4",  "C",   "R" },
   { "TemperatureTrip",    EDCP_DATAID_MOD_TEMPERATURE_MAX,            (KDataCacheColumn)DataCacheColumnModuleTemperatureTrip,    DataTypeR4,     "R4",  "C",   "R" },
   { "SerialNumber",       EDCP_DATAID_MOD_SERIAL_NUMBER,              (KDataCacheColumn)DataCacheColumnModuleSerialNumber,       DataTypeUI4,    "UI4", "",    "R" },
   { "ChannelNumber",      EDCP_DATAID_MOD_CHANNEL_NUMBER,             (KDataCacheColumn)DataCacheColumnModuleChannelNumber,      DataTypeUI4,    "UI4", "",    "R" },
   { "DeviceClass",        DCP_DATAID_MOD_LOG_ON,                      (KDataCacheColumn)DataCacheColumnModuleDeviceClass,        DataTypeUI4,    "UI4", "",    "R" },
   { "FirmwareRelease",    EDCP_DATAID_MOD_FIRMWARE_RELEASE,           (KDataCacheColumn)DataCacheColumnModuleFirmwareRelease,    DataTypeString, "STR", "",    "R" },
   { "FirmwareName",       EDCP_DATAID_MOD_FIRMWARE_NAME,              (KDataCacheColumn)DataCacheColumnModuleFirmwareName,       DataTypeString, "STR", "",    "R" },
   { "Temperatures",       EDCP_DATAID_GRP_TEMPERATURE_SENSOR,         (KDataCacheColumn)DataCacheColumnModuleTemperatures,       DataTypeR4,     "R4",  "C",   "R" },
   { "Supplies",           EDCP_DATAID_GRP_SUPPLY_MEASURE,             (KDataCacheColumn)DataCacheColumnModuleSupplies,           DataTypeR4,     "R4",  "V",   "R" },
   { "VoltageLimits",      EDCP_DATAID_GRP_VOLTAGE_LIMIT,              (KDataCacheColumn)DataCacheColumnModuleVoltageLimits,      DataTypeR4,     "R4",  "%",   "R" },
   { "CurrentLimits",      EDCP_DATAID_GRP_CURRENT_LIMIT,              (KDataCacheColumn)DataCacheColumnModuleCurrentLimits,      DataTypeR4,     "R4",  "%",   "R" },
   { "HighVoltageOk",      EDCP_DATAID_MOD_CONFIGURE_HIGH_VOLTAGE_OK,  (KDataCacheColumn)DataCacheColumnModuleHighVoltageOk,      DataTypeString, "STR", "",    "RW"},
   { "Article",            EDCP_DATAID_MOD_ARTICLE_DESCRIPTION,        (KDataCacheColumn)DataCacheColumnModuleArticle,            DataTypeString, "STR", "",    "R" },
   { "IdentifierList",     DCP_DATAID_MOD_LOG_ON,                      (KDataCacheColumn)DataCacheColumnModuleIdentifierList,     DataTypeString, "STR", "",    "R" },
   { "SetValuesReset",     EDCP_DATAID_FACTORY_RESET,                  (KDataCacheColumn)DataCacheColumnModuleSetValuesReset,     DataTypeUI1,    "BOOL", "",   "W" },
   { "FactoryReset",       EDCP_DATAID_FACTORY_RESET,                  (KDataCacheColumn)DataCacheColumnModuleFactoryReset,       DataTypeUI1,    "BOOL", "",   "W" },
   { "CounterSetValuesChanged", EDCP_DATAID_NONE,                      (KDataCacheColumn)DataCacheColumnModuleSetValuesChanged,   DataTypeUI4,    "UI4", "",    "R" },
   { "FactoryName",        EDCP_DATAID_NONE,                           (KDataCacheColumn)DataCacheColumnModuleFactoryName,        DataTypeString, "STR", "",    "R" },
   { "HardwareOptions",    EDCP_DATAID_MOD_OPTION,                     (KDataCacheColumn)DataCacheColumnModuleHardwareOptions,    DataTypeUI4,    "UI4", "",    "R" }
};

const ItemProperty m_moduleItemExtendedProperties[ExtendedColumnModuleSize - DataCacheColumnModuleSize] = {
   { "Control2",         EDCP_DATAID_MOD_CONTROL2,                   (KDataCacheColumn)ExtendedColumnModuleControl2,            DataTypeUI4,    "UI4", "",    "RW"},
   { "LogOnBoard2",      DCP_DATAID_MOD_LOG_ON,                      (KDataCacheColumn)ExtendedColumnModuleDeviceClass2,        DataTypeBool,   "BOOL","",    "R" },
   { "SetValuesChanged", EDCP_DATAID_MOD_COUNTER_SET_VALUES_CHANGED, (KDataCacheColumn)ExtendedColumnModuleSetValuesChanged,    DataTypeUI4,    "UI4", "",    "R" }
};

#endif // KMODULEPROPERTIES_H
