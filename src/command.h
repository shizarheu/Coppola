#ifndef COMMAND_H
#define COMMAND_H

typedef enum
{
	COMMAND_DOOR_SET         = 0x01,
	COMMAND_WATER_HEATER_SET = 0x02,
	COMMAND_MAIN_VALVE_SET   = 0x03,
	COMMAND_PRE_VALVE_SET    = 0x04,
	COMMAND_MOTOR_DIR_SET    = 0x05,
	COMMAND_MOTOR_POWER_SET  = 0x06,
	COMMAND_WATER_PUMP_SET   = 0x07,
	COMMAND_TAHO_GET         = 0x11,
	COMMAND_SONAR_GET        = 0x12,
	COMMAND_DOOR_GET         = 0x13,
	COMMAND_ID_GET           = 0x14,
}
COMMAND_t;

BOOL_t COMMAND_parse(uint8_t *data, SIZE_t cnt);

#endif
