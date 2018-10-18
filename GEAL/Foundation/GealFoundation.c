// GEAL Foundation Struct
// Copyright (C) suzukimitsuru on MIT License.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "GealCommon.h"
#include "GealTypes.h"
#include "GealAPI.h"
#include "GealConfigAPI.h"
#include "GealUtilAPI.h"
#include "GealFigureAPI.h"
#include "GealStringAPI.h"
#include "GealTimerAPI.h"
#include "GealTargetAPI.h"
#include "GealLayerAPI.h"
#include "GealWidgetAPI.h"
#include "GealWRectAPI.h"
#include "GealWTextAPI.h"
#include "GealWButtonAPI.h"
#include "GealWPictureAPI.h"
#include "GealWGaugeAPI.h"
#include "GealWListAPI.h"
#include "GealWMenuAPI.h"
#include "GealWFigureAPI.h"
#include "GealRsxConfig.h"

#include "GealRsxEnum.h"

extern const GE_BITMAP gGE_Bitmaps[];
typedef struct {
	GE_ID id;
    GE_BITMAP *btn_nextarrow;
}   GFS_BITMAP;

static void Initialize()
{
}
