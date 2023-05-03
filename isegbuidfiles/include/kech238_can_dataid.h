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

#ifndef KECH238_CAN_DATAID_H
#define KECH238_CAN_DATAID_H

#define EMCY_DATAID_SUPPLY_P24						0x00
#define EMCY_DATAID_SUPPLY_P5						0x01
#define EMCY_DATAID_BATTERY_P24						0x02

#define EMCY_DATAID_TEMPERATURE_SENSOR1				0x03
#define EMCY_DATAID_TEMPERATURE_SENSOR2				0x04
#define EMCY_DATAID_TEMPERATURE_SENSOR3				0x05
#define EMCY_DATAID_TEMPERATURE_SENSOR4				0x06
// nach Handbuch andersrum?
//#define EMCY_DATAID_TEMPERATURE_SUPPLY				EMCY_DATAID_TEMPERATURE_SENSOR1
//#define EMCY_DATAID_TEMPERATURE_BACKPLANE			EMCY_DATAID_TEMPERATURE_SENSOR2

#define EMCY_DATAID_AC_LINE_POWER_FAIL				0x07

#define DATAID_SUPPLY_P24							0xA0
#define DATAID_SUPPLY_P5							0xA1
#define DATAID_BATTERY_P24							0xA2

#define DATAID_TEMPERATURE_SENSOR1					0xA3
#define DATAID_TEMPERATURE_SENSOR2					0xA4
#define DATAID_TEMPERATURE_SENSOR3					0xA5
#define DATAID_TEMPERATURE_SENSOR4					0xA6
// nach Handbuch andersrum?
//#define DATAID_TEMPERATURE_SUPPLY					DATAID_TEMPERATURE_SENSOR1
//#define DATAID_TEMPERATURE_BACKPLANE				DATAID_TEMPERATURE_SENSOR2

#define DATAID_GET_LINE_POWER_STATUS				0xA7
#define DATAID_SET_LINE_POWER_STATUS				0x27

#define DATAID_GET_EEPROM_VALUE						0xC0
#define DATAID_SET_EEPROM_VALUE						0x40

#define DATAID_GET_POWER_ON_OFF						0xC1
#define DATAID_SET_POWER_ON_OFF						0x41

#define DATAID_SET_MODULE_RESET						0x42

#define DATAID_CAN_BITRATE							0xC3
#define DATAID_SERIAL_NUMBER_SOFTWARE_RELEASE		0xC6

#define DATAID_NONE									0x00

#define NMT_DATAID_START_STOP_RESET					0x0000
#define DBT_DATAID_MASTER_REQUEST					0x07E8
#define DBT_DATAID_SLAVE_SERVICE					0x07E7

#define NMT_DATAID_START							0x01
#define NMT_DATAID_STOP								0x02
#define NMT_DATAID_RESET_CAN						0x04
#define NMT_DATAID_RESET_CRATE						0x08

#define NMT_DATAID_SLAVE_SERVICE					0x07E9 // only in preOperational
#define NMT_DATAID_MASTER_SERVICE					0x07EA

#define EEPROM_ADDRESS_P24_HIGH_THRESHOLD_HIGH		0x3D
#define EEPROM_ADDRESS_P24_HIGH_THRESHOLD_LOW		0x3E
#define EEPROM_ADDRESS_P24_LOW_THRESHOLD_HIGH		0x3F
#define EEPROM_ADDRESS_P24_LOW_THRESHOLD_LOW		0x40

#define EEPROM_ADDRESS_P5_HIGH_THRESHOLD_HIGH		0x41
#define EEPROM_ADDRESS_P5_HIGH_THRESHOLD_LOW		0x42
#define EEPROM_ADDRESS_P5_LOW_THRESHOLD_HIGH		0x43
#define EEPROM_ADDRESS_P5_LOW_THRESHOLD_LOW			0x44

#define EEPROM_ADDRESS_B24_HIGH_THRESHOLD_HIGH		0x45
#define EEPROM_ADDRESS_B24_HIGH_THRESHOLD_LOW		0x46
#define EEPROM_ADDRESS_B24_LOW_THRESHOLD_HIGH		0x47
#define EEPROM_ADDRESS_B24_LOW_THRESHOLD_LOW		0x48


#endif // KECH238_CAN_DATAID_H

