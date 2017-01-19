//
//  SXRSDKProtocolDefine_JY.h
//  SXRSDK
//
//  Created by qf on 16/9/23.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#ifndef SXRSDKProtocolDefine_JY_h
#define SXRSDKProtocolDefine_JY_h


#endif /* SXRSDKProtocolDefine_JY_h */
//子状态定义
#define SUB_STATE_JY_WAIT_GETMAC_RSP                  SUB_STATE_BEGIN_JY+1
#define SUB_STATE_JY_WAIT_GETFW_RSP                   SUB_STATE_BEGIN_JY+2
#define SUB_STATE_JY_WAIT_READTIME_RSP                SUB_STATE_BEGIN_JY+3
#define SUB_STATE_JY_WAIT_SETTIME_RSP                 SUB_STATE_BEGIN_JY+4
#define SUB_STATE_JY_WAIT_SETPERSON_RSP               SUB_STATE_BEGIN_JY+5
#define SUB_STATE_JY_WAIT_SETPARAM_RSP                SUB_STATE_BEGIN_JY+6
#define SUB_STATE_JY_WAIT_SYNCDATA_RSP                SUB_STATE_BEGIN_JY+7
#define SUB_STATE_JY_WAIT_SETCALORIE_RSP              SUB_STATE_BEGIN_JY+8
#define SUB_STATE_JY_WAIT_INTOOTA_RSP                 SUB_STATE_BEGIN_JY+9
#define SUB_STATE_JY_WAIT_SENSORCHANGE_RSP            SUB_STATE_BEGIN_JY+10
#define SUB_STATE_JY_WAIT_ALARM_RSP                   SUB_STATE_BEGIN_JY+11
#define SUB_STATE_JY_WAIT_POWERSAVING_RSP             SUB_STATE_BEGIN_JY+12
#define SUB_STATE_JY_WAIT_RESET_RSP                   SUB_STATE_BEGIN_JY+13
#define SUB_STATE_JY_WAIT_APPCONTROL_RSP              SUB_STATE_BEGIN_JY+14


//命令定义
#define CMD_JY_SETCALORIE @"JYSetCalorie"
#define CMD_JY_INTOOTA @"JYIntoOTA"
#define CMD_JY_GETMAC @"JYGetMacid"
#define CMD_JY_GETFW @"JYGetFirmware"
#define CMD_JY_READTIME @"JYGeadTime"
#define CMD_JY_SETTIME @"JYSetTime"
#define CMD_JY_SETPERSON @"JYSetPersonInfo"
#define CMD_JY_SETPARAM @"JYSetParam"
#define CMD_JY_SYNCDATA @"JYSyncData"
#define CMD_JY_SENSORCHANGE @"JYSensorChange"
#define CMD_JY_SETALARM @"JYSetAlarm"
#define CMD_JY_SETPOWERSAVING @"JYPowerSaving"
#define CMD_JY_RESET @"JYReset"
#define CMD_JY_APPCONTROL @"JYAppControl"

//协议定义
//汇杰通蓝牙通信协议
//phone 2 bong
#define JY_PHONE2DEVICE_SET_CALORIE 0xA5
#define JY_PHONE2DEVICE_INTO_OTA 0xAF
#define JY_PHONE2DEVICE_SET_PERSONINFO 0x83
#define JY_PHONE2DEVICE_SET_DEVICE_TIME 0xC2
#define JY_PHONE2DEVICE_READ_DEVICE_TIME 0x89
#define JY_PHONE2DEVICE_SET_PARAM 0x9B
#define JY_PHONE2DEVICE_GETMAC 0xFA
#define JY_PHONE2DEVICE_GETFIRMWARE 0xFB
#define JY_PHONE2DEVICE_SYNC_DATA 0xA3
#define JY_PHONE2DEVICE_SENSOR_CHANGE 0x93
#define JY_PHONE2DEVICE_SET_ALARM 0xA6
#define JY_PHONE2DEVICE_SET_POWERSAVING 0x39
#define JY_PHONE2DEVICE_RESET 0xAF
#define JY_PHONE2DEVICE_APPCONTROL 0xF6


//bong 2 phone

#define JY_DEVICE2PHONE_SET_PERSONINFO_OK 0x23
#define JY_DEVICE2PHONE_CURRENT_DATA 0x26
#define JY_DEVICE2PHONE_SET_DEVICE_TIME_OK 0x22
#define JY_DEVICE2PHONE_READ_DEVICE_TIME_OK 0x29
#define JY_DEVICE2PHONE_SET_PERSONINFO_ERR 0x03
#define JY_DEVICE2PHONE_SET_DEVICE_TIME_ERR 0x02
#define JY_DEVICE2PHONE_READ_DEVICE_TIME_ERR 0x09
#define JY_DEVICE2PHONE_GETMAC 0xFA
#define JY_DEVICE2PHONE_GETFIRMWARE 0xFB
#define JY_DEVICE2PHONE_SET_BANDPRAM_OK 0x2B
#define JY_DEVICE2PHONE_SET_BANDPRAM_ERR 0x1B
#define JY_DEVICE2PHONE_SENSOR_REPORT 0x99
#define JY_DEVICE2PHONE_SYNC_DATA_CTLR 0xA3
#define JY_DEVICE2PHONE_SYNC_DATA_DETAIL 0xA4
#define JY_DEVICE2PHONE_SYNC_DATA_ERR 0x43
#define JY_DEVICE2PHONE_SET_CALORIE_OK 0xA5

#define JY_DEVICE2PHONE_BATTERYINFO 0xF8
#define JY_DEVICE2PHONE_INTOOTA 0xAF

#define JY_DEVICE2PHONE_SET_ALARM_OK 0xA6
#define JY_DEVICE2PHONE_SENSORCHANGE_OK 0x33
#define JY_DEVICE2PHONE_SENSORCHANGE_ERR 0x13
#define JY_DEVICE2PHONE_MUSIC_PHOTO_CONTROL 0xF5
#define JY_DEVICE2PHONE_POWERSAVING 0x39
#define JY_DEVICE2PHONE_RESET 0xAF
#define JY_DEVICE2PHONE_APPCONTROL 0xF6

//命令参数
#define JY_PARAM_CALORIES @"calories"
//单位，1-公制 MEASURE_UNIT_METRIX，2-英制  MEASURE_UNIT_US
#define JY_PARAM_UNIT @"unit"
//性别，1-男 2-女
#define JY_PARAM_GENDER @"gender"
#define JY_PARAM_HEIGHT @"height"
#define JY_PARAM_WEIGHT @"weight"
#define JY_PARAM_STRIDE @"stride"
//亮屏时间
#define JY_PARAM_SCREENTIME @"JYScreeTime"
//屏幕方向
#define JY_PARAM_SCREENDIRECTION @"JYScreenDirection"
//短睡提醒开关
#define JY_PARAM_NAP_ALARM @"JYNapSwitch"
//长睡提醒开关
#define JY_PARAM_SLEEP_ALARM @"JYSleepSwitch"
//是否中文
#define JY_PARAM_IS_ENGLISH @"JYLanguage"
//是否打开24小时心率
#define JY_PARAM_IS_OPEN_24H_HEART @"JY24HHeart"
//是否打开24小时心率
#define JY_PARAM_ALARM_VIBERATION_TIMES @"JYALARMVibTimes"

#define JY_PARAM_SENSOR_MODE @"JYSensorMode"
#define JY_PARAM_SENSOR_ONOFF @"JYSensorONOFF"
#define JY_PARAM_SENSOR_REPORT @"JYSensorReport"
#define JY_PARAM_ALARM_ID @"JYAlarmID"
#define JY_PARAM_ALARM_TYPE @"JYAlarmType"
#define JY_PARAM_ALARM_STATUS @"JYAlarmStatus"
#define JY_PARAM_ALARM_WEEKLY @"JYAlarmWeekly"
#define JY_PARAM_ALARM_HOUR @"JYAlarmHour"
#define JY_PARAM_ALARM_MINUTE @"JYAlarmMinute"
#define JY_PARAM_ALARM_STARTHOUR @"JYAlarmStartHour"
#define JY_PARAM_ALARM_ENDHOUR @"JYAlarmEndHour"
#define JY_PARAM_ALARM_SMARTCLOCKREMINDING @"JYAlarmSmartClockReminding"
#define JY_PARAM_ALARM_TIMES @"JYAlarmTimes"
#define JY_PARAM_ALARM_NAME @"JYAlarmName"
#define JY_PARAM_ALARM_STARTYEAR @"JYAlarmStartYear"
#define JY_PARAM_ALARM_STARTMONTH @"JYAlarmStartMonth"
#define JY_PARAM_ALARM_STARTDAY @"JYAlarmStartDay"
#define JY_PARAM_ALARM_ENDYEAR @"JYAlarmEndYear"
#define JY_PARAM_ALARM_ENDMONTH @"JYAlarmEndMonth"
#define JY_PARAM_ALARM_ENDDAY @"JYAlarmEndDay"
#define JY_PARAM_POWERSAVING_STARTHOUR @"JYPSStartHour"
#define JY_PARAM_POWERSAVING_ENDHOUR @"JYPSEndHour"
#define JY_PARAM_POWERSAVING_STARTMINUTE @"JYPSStartMinute"
#define JY_PARAM_POWERSAVING_ENDMINUTE @"JYPSEndMinute"
#define JY_PARAM_POWERSAVING_SCREENLIGHT @"JYPSScreenLight"
#define JY_PARAM_POWERSAVING_VIBERATION @"JYPSVib"
#define JY_PARAM_POWERSAVING_NODISTURB @"JYPSDisturb"
#define JY_PARAM_APPCONTROL_PHOTOCONTROL @"JYAPPControlPhoto"
#define JY_PARAM_APPCONTROL_MUSICCONTROL @"JYAPPControlMusic"
#define JY_PARAM_APPCONTROL_FINDCONTROL @"JYAPPControlFind"



//参数值定义
#define JY_PARAM_VALUE_HISTORY_DATA_CTRL_START 0x1
#define JY_PARAM_VALUE_HISTORY_DATA_CTRL_END 0x0
//传感器类型 
#define JY_PARAM_VALUE_SENSOR_MODE_HEARTRATE 0x80
#define JY_PARAM_VALUE_SENSOR_MODE_BLOODPRESS 0x40
#define JY_PARAM_VALUE_SENSOR_MODE_SPO 0x20


//设备参数定义


//值定义
#define JY_PARAM_VALUE_DEFAULT_SCREENTIME 10
#define JY_PARAM_VALUE_DEFAULT_ALARM_VIB_TIMES 3

#define JY_PARAM_VALUE_SCREEN_DIRECTION_LEFT 0
#define JY_PARAM_VALUE_SCREEN_DIRECTION_RIGHT 1

#define JY_PARAM_VALUE_OPEN 0
#define JY_PARAM_VALUE_CLOSE 1

#define JY_PARAM_VALUE_ENABLE @"1"
#define JY_PARAM_VALUE_DISABLE @"0"

#define JY_PARAM_VALUE_MAX_STORE_DATA_TIME  6*24*60*60
//设置闹钟消息参数值定义
#define JY_PARAM_VALUE_SET_ALARM_STATE_BEGIN  0
#define JY_PARAM_VALUE_SET_ALARM_STATE_CONTENT  1
#define JY_PARAM_VALUE_SET_ALARM_STATE_END  2

#define JY_PARAM_VALUE_SET_ALARM_TYPE_TIMER  1
#define JY_PARAM_VALUE_SET_ALARM_TYPE_MEDICINE  2
#define JY_PARAM_VALUE_SET_ALARM_TYPE_DRINK  3
#define JY_PARAM_VALUE_SET_ALARM_TYPE_SEDENTARY  5
#define JY_PARAM_VALUE_SET_ALARM_STATUS_ENABLE  1
#define JY_PARAM_VALUE_SET_ALARM_STATUS_DISABLE  0
//APP控制消息参数值定义
#define JY_PARAM_VALUE_DEFAULT_CONTROL_NO_ACTION 0
#define JY_PARAM_VALUE_DEFAULT_CONTROL_INTO_PHOTO 1
#define JY_PARAM_VALUE_DEFAULT_CONTROL_END_PHOTO 2
#define JY_PARAM_VALUE_DEFAULT_CONTROL_TAKE_PHOTO 3
#define JY_PARAM_VALUE_DEFAULT_CONTROL_QUIT_PHOTO 4
#define JY_PARAM_VALUE_DEFAULT_CONTROL_PLAY 1
#define JY_PARAM_VALUE_DEFAULT_CONTROL_PREV 2
#define JY_PARAM_VALUE_DEFAULT_CONTROL_NEXT 3
#define JY_PARAM_VALUE_DEFAULT_CONTROL_STOP 4
#define JY_PARAM_VALUE_DEFAULT_CONTROL_VOLUME_UP 5
#define JY_PARAM_VALUE_DEFAULT_CONTROL_VOLUME_DOWN 6
#define JY_PARAM_VALUE_DEFAULT_CONTROL_FIND 2


//通知消息定义
#define notify_key_JY_sync_history_data_finish @"JYSyncDataFinish"
#define notify_key_JY_did_read_history_data @"JYReadHistoryData"
#define notify_key_JY_did_enter_OTA @"JYEnterOTA"
#define notify_key_JY_did_recv_batteryinfo @"JYBattInfo"
#define notify_key_JY_did_recv_sensor_report @"JYReadSensorReport"
#define notify_key_JY_did_recv_current_step @"JYRecvCurrentStep"

//通知消息参数定义
#define JY_NOTIFY_PARAM_YEAR @"JYYear"
#define JY_NOTIFY_PARAM_MONTH @"JYMonth"
#define JY_NOTIFY_PARAM_DAY @"JYDay"
#define JY_NOTIFY_PARAM_HOUR @"JYHour"
#define JY_NOTIFY_PARAM_MINUTE @"JYMinute"
#define JY_NOTIFY_PARAM_SECOND @"JYSecond"
#define JY_NOTIFY_PARAM_WEEKDAY @"JYWeekday"
#define JY_NOTIFY_PARAM_TIMESTAMP @"JYTimestamp"
#define JY_NOTIFY_PARAM_TIMEZONE @"JYTimeZone"
#define JY_NOTIFY_PARAM_STEP @"JYSetp"
#define JY_NOTIFY_PARAM_HEARTRATE @"JYHeart"
#define JY_NOTIFY_PARAM_MODE @"JYMode"
#define JY_NOTIFY_PARAM_BATTINFO @"JYBattInfo"
#define JY_NOTIFY_PARAM_SENSORTYPE @"JYSensorType"
#define JY_NOTIFY_PARAM_SENSORVALUE @"JYSensorValue"
#define JY_NOTIFY_PARAM_DATALIST @"JYDatalist"
#define JY_NOTIFY_PARAM_PHOTOCONTROL @"JYPhotoControl"
#define JY_NOTIFY_PARAM_MUSICCONTROL @"JYMusicControl"
#define JY_NOTIFY_PARAM_FINDCONTROL @"JYFindControl"

//通知消息参数值常量定义
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_NO_ACTION 0
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_INTO_PHOTO 1
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_TAKE_PHOTO 3
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_END_PHOTO 2
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_QUIT_PHOTO 4
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_PLAY 1
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_PREV 2
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_NEXT 3
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_STOP 4
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_VOLUME_UP 5
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_VOLUME_DOWN 6
#define JY_NOTIFY_PARAM_VALUE_DEFAULT_CONTROL_FIND 2

//运动模式
#define JY_SPORT_TYPE_WALK 0
#define JY_SPORT_TYPE_RUN 1
#define JY_SPORT_TYPE_BICYCLE 2
#define JY_SPORT_TYPE_DANCE 3
#define JY_SPORT_TYPE_BASKETBALL 4
#define JY_SPORT_TYPE_FOOTBALL 5
#define JY_SPORT_TYPE_YOGA 6
#define JY_SPORT_TYPE_KONGFU 7
#define JY_SPORT_TYPE_CLIMB 8
#define JY_SPORT_TYPE_GOLF 9
#define JY_SPORT_TYPE_SWIM 10
#define JY_SPORT_TYPE_STAIR 11
#define JY_SPORT_TYPE_SLEEP 12
#define JY_SPORT_TYPE_ROPE 13
#define JY_SPORT_TYPE_JACK 14
#define JY_SPORT_TYPE_SITUP 15





