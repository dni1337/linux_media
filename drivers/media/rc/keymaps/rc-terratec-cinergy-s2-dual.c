/* keytable for Terratec Cinergy S2 Dual Remote Controller
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#include <media/rc-map.h>
#include <linux/module.h>

static struct rc_map_table terratec_cinergy_s2_dual[] = {
	{ 0xf841, KEY_MENU },
	{ 0xf801, KEY_POWER },
	{ 0xf842, KEY_OPEN },
	{ 0x0002, KEY_1 },
	{ 0x0003, KEY_2 },
	{ 0x0004, KEY_3 },
	{ 0xf843, KEY_SUBTITLE },
	{ 0x0005, KEY_4 },
	{ 0x0006, KEY_5 },
	{ 0x0007, KEY_6 },
	{ 0xf844, KEY_TEXT },
	{ 0x0008, KEY_7 },
	{ 0x0009, KEY_8 },
	{ 0x000A, KEY_9 },
	{ 0xf845, KEY_DELETE },
	{ 0xf80b, KEY_SWITCHVIDEOMODE },
	{ 0xf80c, KEY_0 },
	{ 0xf80d, KEY_AB },
	{ 0xf846, KEY_TUNER },
	{ 0xf847, KEY_DVD },
	{ 0xf849, KEY_PVR },
	{ 0xf84a, KEY_AUDIO },
	{ 0xf84b, KEY_TIME },
	{ 0xf810, KEY_UP },
	{ 0xf811, KEY_LEFT },
	{ 0xf812, KEY_OK },
	{ 0xf813, KEY_RIGHT },
	{ 0xf814, KEY_DOWN },
	{ 0xf80f, KEY_EPG },
	{ 0xf816, KEY_INFO },
	{ 0xf84d, KEY_BACK },
	{ 0xf81c, KEY_VOLUMEUP },
	{ 0xf84c, KEY_PLAY },
	{ 0xf81b, KEY_CHANNELUP },
	{ 0xf81e, KEY_VOLUMEDOWN },
	{ 0xf81d, KEY_MUTE },
	{ 0xf81f, KEY_CHANNELDOWN },
	{ 0xf817, KEY_RED },
	{ 0xf818, KEY_GREEN },
	{ 0xf819, KEY_YELLOW },
	{ 0xf81A, KEY_BLUE },
	{ 0xf858, KEY_RECORD },
	{ 0xf848, KEY_STOP },
	{ 0xf840, KEY_PAUSE },
	{ 0xf85a, KEY_LAST },
	{ 0xf861, KEY_REWIND },
	{ 0xf954, KEY_FASTFORWARD },
	{ 0xf85c, KEY_NEXT },
};

static struct rc_map_list terratec_cinergy_s2_dual_map = {
	.map = {
		.scan    = terratec_cinergy_s2_dual,
		.size    = ARRAY_SIZE(terratec_cinergy_s2_dual),
		.rc_type = RC_TYPE_UNKNOWN,	/* Legacy IR type */
		.name    = RC_MAP_TERRATEC_CINERGY_S2_DUAL,
	}
};

static int __init init_rc_map_terratec_cinergy_s2_dual(void)
{
	return rc_map_register(&terratec_cinergy_s2_dual_map);
}

static void __exit exit_rc_map_terratec_cinergy_s2_dual(void)
{
	rc_map_unregister(&terratec_cinergy_s2_dual_map);
}

module_init(init_rc_map_terratec_cinergy_s2_dual);
module_exit(exit_rc_map_terratec_cinergy_s2_dual);

MODULE_LICENSE("GPL");
