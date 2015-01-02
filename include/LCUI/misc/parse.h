﻿#ifndef __LCUI_MISC_PARSE_H__
#define __LCUI_MISC_PARSE_H__

LCUI_BEGIN_HEADER

/** 样式变量类型 */
typedef enum LCUI_StyleVarType {
	SVT_NONE,
	SVT_AUTO,
	SVT_SCALE,		/**< 比例 */
	SVT_PX,			/**< 像素 */
	SVT_PT,			/**< 点 */
	SVT_COLOR		/**< 色彩 */
} LCUI_StyleVarType;

/** 用于描述样式的变量类型 */
typedef struct LCUI_StyleVar {
	LCUI_StyleVarType type;		/**< 哪一种类型 */
	union {
		int px;			/**< pixel, 像素 */
		int pt;			/**< point，点数（一般用于字体大小单位） */
		double scale;		/**< 比例 */
		LCUI_Color color;	/**< 色彩值 */
	};
} LCUI_StyleVar;

LCUI_END_HEADER

/** 从字符串中解析出数字，支持的单位：点(pt)、像素(px)、百分比(%) */
LCUI_API LCUI_BOOL ParseNumer( LCUI_StyleVar *var, const char *str );

#endif
