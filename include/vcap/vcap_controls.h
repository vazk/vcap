#ifndef _VCAP_CONTROLS_H
#define _VCAP_CONTROLS_H

/**
 * \file
 * \brief Camera control IDs and types.
 */

/**
 * \brief Camera control IDs.
 */
typedef enum {
	VCAP_CTRL_BRIGHTNESS,
	VCAP_CTRL_CONTRAST,
	VCAP_CTRL_SATURATION,
	VCAP_CTRL_HUE,
	VCAP_CTRL_AUTO_WHITE_BALANCE,
	VCAP_CTRL_DO_WHITE_BALANCE,
	VCAP_CTRL_RED_BALANCE,
	VCAP_CTRL_BLUE_BALANCE,
	VCAP_CTRL_GAMMA,
	VCAP_CTRL_EXPOSURE,
	VCAP_CTRL_AUTOGAIN,
	VCAP_CTRL_GAIN,
	VCAP_CTRL_HFLIP,
	VCAP_CTRL_VFLIP,
	VCAP_CTRL_EXPOSURE_AUTO,
	VCAP_CTRL_EXPOSURE_ABSOLUTE,
	VCAP_CTRL_EXPOSURE_AUTO_PRIORITY,
	VCAP_CTRL_FOCUS_ABSOLUTE,
	VCAP_CTRL_FOCUS_RELATIVE,
	VCAP_CTRL_FOCUS_AUTO,
	VCAP_CTRL_ZOOM_ABSOLUTE,
	VCAP_CTRL_ZOOM_RELATIVE,
	VCAP_CTRL_INVALID
} vcap_control_id_t;

/**
 * \brief Camera control types.
 */
typedef enum {
	VCAP_CTRL_TYPE_RANGE,
	VCAP_CTRL_TYPE_BOOLEAN,
	VCAP_CTRL_TYPE_MENU,
	VCAP_CTRL_TYPE_BUTTON,
	VCAP_CTRL_TYPE_INVALID
} vcap_control_type_t;

#endif	
