//
//  SXRSDKProtocalDefine_Chomp.h
//  SXRSDK
//
//  Created by qf on 16/9/23.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#ifndef SXRSDKProtocalDefine_Chomp_h
#define SXRSDKProtocalDefine_Chomp_h


//子状态
#define SUB_STATE_CHOMP_WAIT_DEVICEINFO_RSP                                 SUB_STATE_BEGIN_CHOMP+1
#define SUB_STATE_CHOMP_WAIT_TARGET_RSP                                     SUB_STATE_BEGIN_CHOMP+2
#define SUB_STATE_CHOMP_WAIT_DATETIME_RSP                                   SUB_STATE_BEGIN_CHOMP+3
#define SUB_STATE_CHOMP_WAIT_FIRMWARE_RSP                                   SUB_STATE_BEGIN_CHOMP+4
#define SUB_STATE_CHOMP_WAIT_ADDR_RSP                                       SUB_STATE_BEGIN_CHOMP+5
//#define SUB_STATE_CHOMP_WAIT_CLEARACC_RSP                                   SUB_STATE_BEGIN_CHOMP+6
//#define SUB_STATE_CHOMP_WAIT_READFLASH_STEPSUMMARY1_RSP                     SUB_STATE_BEGIN_CHOMP+7
//#define SUB_STATE_CHOMP_WAIT_READFLASH_STEP1_RSP                            SUB_STATE_BEGIN_CHOMP+8
//#define SUB_STATE_CHOMP_WAIT_READFLASH_STEP2_RSP                            SUB_STATE_BEGIN_CHOMP+9
//#define SUB_STATE_CHOMP_WAIT_READFLASH_STEPSUMMARY2_RSP                     SUB_STATE_BEGIN_CHOMP+10
#define SUB_STATE_CHOMP_WAIT_SAVE_RSP                                       SUB_STATE_BEGIN_CHOMP+11
//#define SUB_STATE_CHOMP_WAIT_CLEARRECORD_STEP1_RSP                          SUB_STATE_BEGIN_CHOMP+12
//#define SUB_STATE_CHOMP_WAIT_CLEARRECORD_STEP2_RSP                          SUB_STATE_BEGIN_CHOMP+13
//#define SUB_STATE_CHOMP_WAIT_CLEARRECORD_RSP                                SUB_STATE_BEGIN_CHOMP+14
#define SUB_STATE_CHOMP_WAIT_CLEARTODAY_RSP                                 SUB_STATE_BEGIN_CHOMP+15
#define SUB_STATE_CHOMP_WAIT_SYNC_SLEEP_MODECHECK_RSP                       SUB_STATE_BEGIN_CHOMP+16
//#define SUB_STATE_CHOMP_WAIT_READFLASH_SLEEP_RSP                            SUB_STATE_BEGIN_CHOMP+17
//#define SUB_STATE_CHOMP_WAIT_CLEARSLEEP_RSP                                 SUB_STATE_BEGIN_CHOMP+18
#define SUB_STATE_CHOMP_WAIT_MODECHECK                                      SUB_STATE_BEGIN_CHOMP+19
#define SUB_STATE_CHOMP_WAIT_OTA_RSP                                        SUB_STATE_BEGIN_CHOMP+20
#define SUB_STATE_CHOMP_WAIT_SETPARAM_RSP                                   SUB_STATE_BEGIN_CHOMP+21
#define SUB_STATE_CHOMP_WAIT_ALM_GET                                        SUB_STATE_BEGIN_CHOMP+22
#define SUB_STATE_CHOMP_WAIT_ALM_SET                                        SUB_STATE_BEGIN_CHOMP+23
#define SUB_STATE_CHOMP_WAIT_TMR_GET                                        SUB_STATE_BEGIN_CHOMP+24
#define SUB_STATE_CHOMP_WAIT_TMR_SET                                        SUB_STATE_BEGIN_CHOMP+25
#define SUB_STATE_CHOMP_WAIT_INT_GET                                        SUB_STATE_BEGIN_CHOMP+26
#define SUB_STATE_CHOMP_WAIT_INT_SET                                        SUB_STATE_BEGIN_CHOMP+27
#define SUB_STATE_CHOMP_WAIT_RMD_SET                                        SUB_STATE_BEGIN_CHOMP+28
#define SUB_STATE_CHOMP_WAIT_CHM_SET                                        SUB_STATE_BEGIN_CHOMP+29
#define SUB_STATE_CHOMP_WAIT_CHM_GET                                        SUB_STATE_BEGIN_CHOMP+30
#define SUB_STATE_CHOMP_WAIT_ALRT_SET                                       SUB_STATE_BEGIN_CHOMP+31
#define SUB_STATE_CHOMP_WAIT_ALRT_GET                                       SUB_STATE_BEGIN_CHOMP+32
#define SUB_STATE_CHOMP_WAIT_PAIR_RSP                                       SUB_STATE_BEGIN_CHOMP+33
#define SUB_STATE_CHOMP_WAIT_NTM_GET                                        SUB_STATE_BEGIN_CHOMP+34
#define SUB_STATE_CHOMP_WAIT_NTM_SET                                        SUB_STATE_BEGIN_CHOMP+35
#define SUB_STATE_CHOMP_WAIT_NTT_GET                                        SUB_STATE_BEGIN_CHOMP+36
#define SUB_STATE_CHOMP_WAIT_NTT_SET                                        SUB_STATE_BEGIN_CHOMP+37
#define SUB_STATE_CHOMP_WAIT_CS_SET                                         SUB_STATE_BEGIN_CHOMP+38
#define SUB_STATE_CHOMP_WAIT_CS_GET                                         SUB_STATE_BEGIN_CHOMP+39
#define SUB_STATE_CHOMP_WAIT_PF_SET                                         SUB_STATE_BEGIN_CHOMP+40
#define SUB_STATE_CHOMP_WAIT_PF_GET                                         SUB_STATE_BEGIN_CHOMP+41
//#define SUB_STATE_CHOMP_WAIT_GETDEVICEACTIVE                                SUB_STATE_BEGIN_CHOMP+42
#define SUB_STATE_CHOMP_WAIT_IA_SET                                         SUB_STATE_BEGIN_CHOMP+43
#define SUB_STATE_CHOMP_WAIT_IA_GET                                         SUB_STATE_BEGIN_CHOMP+44
#define SUB_STATE_CHOMP_WAIT_ACTS_RSP                                       SUB_STATE_BEGIN_CHOMP+45
#define SUB_STATE_CHOMP_WAIT_STEPS_RSP                                      SUB_STATE_BEGIN_CHOMP+46
#define SUB_STATE_CHOMP_WAIT_SETSLPTM_SET                                   SUB_STATE_BEGIN_CHOMP+47
//#define SUB_STATE_CHOMP_WAIT_ALLSTEP_RSP                                    SUB_STATE_BEGIN_CHOMP+48
#define SUB_STATE_CHOMP_WAIT_ALLSLEEP_RSP                                   SUB_STATE_BEGIN_CHOMP+49
#define SUB_STATE_CHOMP_WAIT_ALLHEARTRATE_RSP                               SUB_STATE_BEGIN_CHOMP+50
//#define SUB_STATE_CHOMP_WAIT_CLEAR_ALLSTEP_RSP                              SUB_STATE_BEGIN_CHOMP+51
#define SUB_STATE_CHOMP_WAIT_CLEAR_ALLSLEEP_RSP                             SUB_STATE_BEGIN_CHOMP+52
#define SUB_STATE_CHOMP_WAIT_CLEAR_ALLHEARTRATE_RSP                         SUB_STATE_BEGIN_CHOMP+53
#define SUB_STATE_CHOMP_WAIT_SAVEDSUMMARY_RSP                               SUB_STATE_BEGIN_CHOMP+54
#define SUB_STATE_CHOMP_WAIT_TODAYSUMMARY_RSP                               SUB_STATE_BEGIN_CHOMP+55
#define SUB_STATE_CHOMP_WAIT_SAVEDSTEP_RSP                                  SUB_STATE_BEGIN_CHOMP+56
#define SUB_STATE_CHOMP_WAIT_TODAYSTEP_RSP                                  SUB_STATE_BEGIN_CHOMP+57
#define SUB_STATE_CHOMP_WAIT_CLEAR_SAVEDSTEP_RSP                            SUB_STATE_BEGIN_CHOMP+58
#define SUB_STATE_CHOMP_WAIT_CLEAR_TODAYSTEP_RSP                            SUB_STATE_BEGIN_CHOMP+59


//组合科技命令
#define CMD_CHOMP_DEVICE_INFO                       @"ChompDeviceInfo"
#define CMD_CHOMP_SET_TARGET                        @"ChompSetTarget"
#define CMD_CHOMP_SET_DATETIME                      @"ChompSetTime"
#define CMD_CHOMP_READ_FIRMWARE                     @"ChompReadFirmware"
#define CMD_CHOMP_READ_ADDR                         @"ChompReadMac"
//#define CMD_CHOMP_READ_FLASH_SLEEP                  @"ChompReadSleepFlash"
//#define CMD_CHOMP_READ_FLASH_STEP1                  @"ChompReadStepFlash1"
//#define CMD_CHOMP_READ_FLASH_STEP2                  @"ChompReadStepFlash2"
//#define CMD_CHOMP_READ_STEP_SUMMARY                 @"ChompReadStepSummary1"
//#define CMD_CHOMP_READ_STEP_SUMMARY2                @"ChompReadStepSummary2"
//#define CMD_CHOMP_CLEAR_FLASH_RECORD                @"ChompClearRecord"
//#define CMD_CHOMP_CLEAR_FLASH_RECORD1               @"ChompClearRecord1"
//#define CMD_CHOMP_CLEAR_FLASH_RECORD2               @"ChompClearRecord2"
#define CMD_CHOMP_SAVE_TO_FLASH                     @"ChompSaveToFlash"
#define CMD_CHOMP_CLEAR_TODAY_IN_RAM                @"ChompClearToday"
#define CMD_CHOMP_INTO_OTA                          @"ChompIntoOTA"
//#define CMD_CHOMP_CLEAR_SLEEP_DATA                  @"ChompClearSleep"
#define CMD_CHOMP_READ_DEVICE_MODE                  @"ChompGetMode"
#define CMD_CHOMP_SETPARAM                          @"ChompSetParam"
//#define CMD_CHOMP_GETDEVICEACTIVE                   @"ChompGetDeviceActive"
#define CMD_CHOMP_ALARM_GET                         @"ChompGetAlarm"
#define CMD_CHOMP_ALARM_SET                         @"ChompSetAlarm"
#define CMD_CHOMP_INT_GET                           @"ChompGetIntervalTimer"
#define CMD_CHOMP_INT_SET                           @"ChompSetIntervalTimer"
#define CMD_CHOMP_RMD                               @"ChompSetReminder"
#define CMD_CHOMP_TMR_GET                           @"ChompGetTimer"
#define CMD_CHOMP_TMR_SET                           @"ChompSetTimer"
#define CMD_CHOMP_ALRT_GET                          @"ChompGetKeytoneVib"
#define CMD_CHOMP_ALRT_SET                          @"ChompSetKeytoneVib"
#define CMD_CHOMP_CHM_GET                           @"ChompGetChime"
#define CMD_CHOMP_CHM_SET                           @"ChompSetChime"
#define CMD_CHOMP_PAIR                              @"ChompSendANCSPair"
#define CMD_CHOMP_NTM_GET                           @"ChompGetNTM"
#define CMD_CHOMP_NTM_SET                           @"ChompSetNTM"
#define CMD_CHOMP_NTT_GET                           @"ChompGetNTT"
#define CMD_CHOMP_NTT_SET                           @"ChompSetNTT"
#define CMD_CHOMP_PF_GET                            @"ChompGetPhoneFind"
#define CMD_CHOMP_PF_SET                            @"ChompSetPhoneFind"
#define CMD_CHOMP_CS_GET                            @"ChompGetCS"
#define CMD_CHOMP_CS_SET                            @"ChompSetCS"
#define CMD_CHOMP_IA_GET                            @"ChompGetSedentary"
#define CMD_CHOMP_IA_SET                            @"ChompSetSedentary"
#define CMD_CHOMP_STEPS                             @"ChompSetDeviceStep"
#define CMD_CHOMP_ACTS                              @"ChompSetDeviceActive"
#define CMD_CHOMP_SETSLPTM                          @"ChompSetDeviceSleep"
#define CMD_CHOMP_SYNCALLSLEEPDATA                  @"ChompSyncAllSleep"
#define CMD_CHOMP_SYNCALLHEARTRATEDATA              @"ChompSyncAllHeartrate"
#define CMD_CHOMP_CLEARALLSLEEPDATA                 @"ChompClearAllSleep"
#define CMD_CHOMP_CLEARALLHEARTRATEDATA             @"ChompClearAllHeartrate"
#define CMD_CHOMP_SYNCSAVEDSUMMARY                  @"ChompSyncSavedSummary"
#define CMD_CHOMP_SYNCTODAYSUMMARY                  @"ChompSyncTodaySummary"
#define CMD_CHOMP_SYNCSAVEDSTEPDATA                 @"ChompSyncSavedStep"
#define CMD_CHOMP_SYNCTODAYSTEPDATA                 @"ChompSyncTodayStep"
#define CMD_CHOMP_CLEARSAVEDSTEPDATA                @"ChompClearSavedStep"
#define CMD_CHOMP_CLEARTODAYSTEPDATA                @"ChompClearTodayStep"

//协议命令字定义
#define CHOMP_COMMAND_HEADER_DEVICEINFO @"s"
#define CHOMP_COMMAND_HEADER_TARGET @"tg"
#define CHOMP_COMMAND_HEADER_SETTIME @"dt"
#define CHOMP_COMMAND_HEADER_READFIRMWARE @"fw"
#define CHOMP_COMMAND_HEADER_READMAC @"daddr"
#define CHOMP_COMMAND_HEADER_READFLASH @"r0x"
#define CHOMP_COMMAND_HEADER_CLEARACC @"clrAcc"
#define CHOMP_COMMAND_HEADER_CLEARFLASH @"clrRecord"
#define CHOMP_COMMAND_HEADER_SAVETOFLASH @"saVe"
#define CHOMP_COMMAND_HEADER_CLEARTODAY @"clrDay0"
#define CHOMP_COMMAND_HEADER_CLEARSLEEP @"clrSleep"
#define CHOMP_COMMAND_HEADER_INTOOTA @"otA0"
#define CHOMP_COMMAND_HEADER_GETMODE @"m"
#define CHOMP_COMMAND_HEADER_SETPARAM @"b"
#define CHOMP_COMMAND_HEADER_GETTODAYACTIVE @"a"
//闹钟 alarm
#define CHOMP_COMMAND_HEADER_ALARM @"alm"
//训练计时器 interval timer
#define CHOMP_COMMAND_HEADER_INTERVALTIMER @"int"
//日期提醒 reminder
#define CHOMP_COMMAND_HEADER_REMINDER @"rmd"
//周期性提醒，吃药 pill alarm
#define CHOMP_COMMAND_HEADER_TIMER @"tmr"
#define CHOMP_COMMAND_HEADER_KEYTONE_VIB @"alrt"
#define CHOMP_COMMAND_HEADER_CHIME @"chm"
#define CHOMP_COMMAND_HEADER_PAIR @"pair"
#define CHOMP_COMMAND_HEADER_NTM @"ntm"
#define CHOMP_COMMAND_HEADER_NTT @"ntt"
#define CHOMP_COMMAND_HEADER_PHONEFIND @"pf"
#define CHOMP_COMMAND_HEADER_PHOTOSHOT @"cs"
#define CHOMP_COMMAND_HEADER_MUSICCONTROL @"mu"
#define CHOMP_COMMAND_HEADER_BTNCLICK0 @"bn0"
#define CHOMP_COMMAND_HEADER_BTNCLICK1 @"bn1"
//久坐提醒 inactivate alarm
#define CHOMP_COMMAND_HEADER_INACTIVEALERT @"ia"
#define CHOMP_COMMAND_HEADER_SETDEVICESTEP @"stepS"
#define CHOMP_COMMAND_HEADER_SETDEVICEACTIVE @"actS"
#define CHOMP_COMMAND_HEADER_SETDEVICESLEEP @"setslptm"
#define CHOMP_COMMAND_HEADER_SYNCALLSTEP @"mStp"
#define CHOMP_COMMAND_HEADER_SYNCALLSLEEP @"mSlp"
#define CHOMP_COMMAND_HEADER_SYNCALLHEARTRATE @"mHrw"
#define CHOMP_COMMAND_HEADER_CLEARALLSTEP @"clrmStp"
#define CHOMP_COMMAND_HEADER_CLEARALLSLEEP @"clrmSlp"
#define CHOMP_COMMAND_HEADER_CLEARALLHEARTRATE @"clrmHrw"
#define CHOMP_COMMAND_HEADER_SYNCALLSUMMARY @"mSys"


//命令参数
#define CHOMP_PARAM_TARGET_STEP @"ChompTarget"
#define CHOMP_PARAM_TARGET_STEP_BYTES @"ChompTargetBytes"
#define CHOMP_PARAM_ADDRESS @"ChompAddress"
#define CHOMP_PARAM_UNIT @"ChompUnit"
#define CHOMP_PARAM_HEIGHT @"ChompHeight"
#define CHOMP_PARAM_WEIGHT @"ChompWeight"
#define CHOMP_PARAM_STRIDE @"ChompStride"
#define CHOMP_PARAM_ID @"ChompID"
#define CHOMP_PARAM_YEAR @"ChompYear"
#define CHOMP_PARAM_MONTH @"ChompMonth"
#define CHOMP_PARAM_DAY @"ChompDay"
#define CHOMP_PARAM_HOUR @"ChompHour"
#define CHOMP_PARAM_MINUTE @"ChompMinute"
#define CHOMP_PARAM_WEEKDAY @"ChompWeekday"
#define CHOMP_PARAM_SECOND @"ChompSecond"
#define CHOMP_PARAM_WEEKLY @"ChompWeekly"
#define CHOMP_PARAM_ENABLE @"ChompEnable"
#define CHOMP_PARAM_SNOOZE @"ChompSnooze"
#define CHOMP_PARAM_SNOOZE_REPEATE @"ChompSnoozeRepeat"
#define CHOMP_PARAM_REPEATHOUR @"ChompRepeatHour"
#define CHOMP_PARAM_REPEATTIMES @"ChompRepeatTimes"
#define CHOMP_PARAM_REPEATSCHEDULE @"ChompRepeatSchedule"
#define CHOMP_PARAM_STARTHOUR @"ChompStartHour"
#define CHOMP_PARAM_STARTMINUTE @"ChompStartMinute"
#define CHOMP_PARAM_ENDHOUR @"ChompEndHour"
#define CHOMP_PARAM_ENDMINUTE @"ChompEndMinute"
#define CHOMP_PARAM_REMINDERTYPE @"ChompReminderType"
#define CHOMP_PARAM_KEYTONE @"ChompKeytone"
#define CHOMP_PARAM_CHIME @"ChompChime"
#define CHOMP_PARAM_VIB @"ChompVib"
#define CHOMP_PARAM_NTMTYPE @"ChompNTMType"
#define CHOMP_PARAM_NTTICO @"ChompNTTIco"
#define CHOMP_PARAM_NTTVIB @"ChompNTTVib"
#define CHOMP_PARAM_NTTSOUND @"ChompNTTSound"
#define CHOMP_PARAM_STEP @"ChompStep"
#define CHOMP_PARAM_ACTIVE @"ChompActive"
#define CHOMP_PARAM_SLEEP @"ChompSleep"

//通知消息
#define notify_key_chomp_recv_current_step @"ChompCurrentStep"
#define notify_key_chomp_recv_current_batteryinfo @"ChompCurrentBatteryInfo"
#define notify_key_chomp_recv_current_recordnumber @"ChompCurrentRecordNumber"
#define notify_key_chomp_recv_current_devicetime @"ChompCurrentDeviceTime"
#define notify_key_chomp_recv_current_devicemode @"ChompCurrentDeviceMode"
#define notify_key_chomp_recv_sync_step @"ChompSyncStep"
#define notify_key_chomp_recv_sync_sleep @"ChompSyncSleep"
#define notify_key_chomp_recv_sync_heartrate @"ChompSyncHeartRate"

//通知消息参数
#define CHOMP_NOTIFY_PARAM_STEP @"ChompStep"
#define CHOMP_NOTIFY_PARAM_TARGET @"ChompTarget"
#define CHOMP_NOTIFY_PARAM_FINISH_PERCENT @"ChompFinishPercent"
#define CHOMP_NOTIFY_PARAM_RECORD_NUMBER @"ChompRecordNumber"
#define CHOMP_NOTIFY_PARAM_BATTERYLEVEL @"ChompBatteryLevel"
#define CHOMP_NOTIFY_PARAM_RSSI @"ChompRSSI"
#define CHOMP_NOTIFY_PARAM_DEVICETIME @"ChompDeviceTime"
#define CHOMP_NOTIFY_PARAM_DEVICEMODE @"ChompDeviceMode"
#define CHOMP_NOTIFY_PARAM_ALARMID @"ChompAlarmID"
#define CHOMP_NOTIFY_PARAM_HOUR @"ChompHour"
#define CHOMP_NOTIFY_PARAM_MINUTE @"ChompMinute"
#define CHOMP_NOTIFY_PARAM_ENABLE @"ChompEnable"
#define CHOMP_NOTIFY_PARAM_SNOOZE @"ChompSnooze"
#define CHOMP_NOTIFY_PARAM_SNOOZE_REPEAT @"ChompSnoozeRepeat"
#define CHOMP_NOTIFY_PARAM_WEEKLY @"ChompWeekly"
#define CHOMP_NOTIFY_PARAM_ALARMTYPE @"ChompAlarmType"
#define CHOMP_NOTIFY_PARAM_STARTHOUR @"ChompStartHour"
#define CHOMP_NOTIFY_PARAM_STARTMINUTE @"ChompStartMinute"
#define CHOMP_NOTIFY_PARAM_ENDHOUR @"ChompEndMinute"
#define CHOMP_NOTIFY_PARAM_ENDMINUTE @"ChompEndMinute"
#define CHOMP_NOTIFY_PARAM_REPEATTIMES @"ChompRepeatTimes"
#define CHOMP_NOTIFY_PARAM_STARTMONTH @"ChompStartMonth"
#define CHOMP_NOTIFY_PARAM_STARTDAY @"ChompStartDay"
#define CHOMP_NOTIFY_PARAM_REPEAT_SCHEDULE @"ChompRepeatSchedule"
#define CHOMP_NOTIFY_PARAM_DETECT_STEP @"ChompDetectStep"
#define CHOMP_NOTIFY_PARAM_REPEAT_HOUR @"ChompRepeatHour"
#define CHOMP_NOTIFY_PARAM_KEYTONE @"ChompKeytone"
#define CHOMP_NOTIFY_PARAM_VIB @"ChompVib"
#define CHOMP_NOTIFY_PARAM_CHIME @"ChompChime"
#define CHOMP_NOTIFY_PARAM_NTT_ID @"ChompNttID"
#define CHOMP_NOTIFY_PARAM_NTT_ICO @"ChompNttICO"
#define CHOMP_NOTIFY_PARAM_NTT_VIB @"ChompNttVIB"
#define CHOMP_NOTIFY_PARAM_NTT_SOUND @"ChompNttSOUND"
#define CHOMP_NOTIFY_PARAM_NTT_STATE @"ChompNttSTATE"
#define CHOMP_NOTIFY_PARAM_PHONE_FINDER_STATE @"ChompPhoneFindState"
#define CHOMP_NOTIFY_PARAM_CAMERA_SHUTTER_STATE @"ChompCameraShutterState"
#define CHOMP_NOTIFY_PARAM_TIMESTAMP @"ChompTimestamp"
#define CHOMP_NOTIFY_PARAM_DATALIST @"ChompDataList"
#define CHOMP_NOTIFY_PARAM_SLEEP_STATE @"ChompSleepState"
#define CHOMP_NOTIFY_PARAM_SLEEP_START_TIMESTAMP @"ChompSleepStartTimestamp"
#define CHOMP_NOTIFY_PARAM_SLEEP_END_TIMESTAMP @"ChompSleepEndTimestamp"
#define CHOMP_NOTIFY_PARAM_SLEEP_FALLIN_TIMESTAMP @"ChompSleepFallinTimestamp"
#define CHOMP_NOTIFY_PARAM_SLEEP_DETAIL_DATALIST @"ChompSleepDetailList"
#define CHOMP_NOTIFY_PARAM_SLEEP_AWAKE_TIMES @"ChompSleepAwakeTimes"
#define CHOMP_NOTIFY_PARAM_SLEEP_COUNT @"ChompSleepCount"
#define CHOMP_NOTIFY_PARAM_SLEEP_DEEP_DURATION @"ChompSleepDeep"
#define CHOMP_NOTIFY_PARAM_SLEEP_LIGHT_DURATION @"ChompSleepLight"
#define CHOMP_NOTIFY_PARAM_SLEEP_AWAKE_DURATION @"ChompSleepAwake"
#define CHOMP_NOTIFY_PARAM_DATETIME @"ChompDatetime"
#define CHOMP_NOTIFY_PARAM_DURATION @"ChompDuration"
#define CHOMP_NOTIFY_PARAM_HEARTRATE @"ChompHeartRate"



//通知消息参数值常量
#define CHOMP_NOTIFY_PARAM_VALUE_REMINDERTYPE_KEEPFIT 0
#define CHOMP_NOTIFY_PARAM_VALUE_REMINDERTYPE_DOEXCERCISE 1
#define CHOMP_NOTIFY_PARAM_VALUE_REMINDERTYPE_HOSPITAL 2
#define CHOMP_NOTIFY_PARAM_VALUE_DEVICEMODE_UNKNOWN -1
#define CHOMP_NOTIFY_PARAM_VALUE_DEVICEMODE_STEP 0
#define CHOMP_NOTIFY_PARAM_VALUE_DEVICEMODE_SLEEP 1

//常量定义
#define CHOMP_MAX_RESET_TIME_OFFSET 10
#define CHOMP_ADDR_SYSTEM_SUMMARY 0x39C00
#define CHOMP_ADDR_STEP_PERMIN_BEGIN 0x3A400
#define CHOMP_ADDR_STEP_PERMIN_END 0x3c800
#define CHOMP_ADDR_SLEEP_DATA_BEGIN 0x37C00
#define CHOMP_ADDR_SLEEP_DATA_END 0x38FFF
#define CHOMP_NTT_TYPE_INCOMINGCALL @"01"
#define CHOMP_NTT_TYPE_MISSEDCALL @"02"
#define CHOMP_NTT_TYPE_SMS @"03"
#define CHOMP_NTT_TYPE_MAIL @"04"
#define CHOMP_NTT_TYPE_CALENDAR @"05"
#define CHOMP_NTT_TYPE_FACETIME @"06"
#define CHOMP_NTT_TYPE_QQ @"07"
#define CHOMP_NTT_TYPE_SKYPE @"08"
#define CHOMP_NTT_TYPE_WECHAT @"09"
#define CHOMP_NTT_TYPE_WHATSAPP @"10"
#define CHOMP_NTT_TYPE_GMAIL @"11"
#define CHOMP_NTT_TYPE_HANGOUT @"12"
#define CHOMP_NTT_TYPE_INBOX @"13"
#define CHOMP_NTT_TYPE_LINE @"14"
#define CHOMP_NTT_TYPE_TWITTER @"15"
#define CHOMP_NTT_TYPE_FACEBOOK @"16"
#define CHOMP_NTT_TYPE_FACEBOOK_MESSENGER @"17"
#define CHOMP_NTT_TYPE_INSTAGRAM @"18"
#define CHOMP_NTT_TYPE_QQ_IPAD @"19"

#define CHOMP_NTT_IMCOMINGCALL_DEFAULT_VIB @"15"
#define CHOMP_NTT_IMCOMINGCALL_DEFAULT_SOUND @"15"
#define CHOMP_NTT_IMCOMINGCALL_DEFAULT_ICO @"10"

#define CHOMP_NTT_MISSEDCALL_DEFAULT_VIB @"21"
#define CHOMP_NTT_MISSEDCALL_DEFAULT_SOUND @"21"
#define CHOMP_NTT_MISSEDCALL_DEFAULT_ICO @"10"

#define CHOMP_NTT_DEFAULT_VIB @"01"
#define CHOMP_NTT_DEFAULT_SOUND @"01"
#define CHOMP_NTT_DEFAULT_ICO @"00"


#define CHOMP_SLEEP_STATE_DEEP 1
#define CHOMP_SLEEP_STATE_LIGHT 2
#define CHOMP_SLEEP_STATE_AWAKE 3
//mod
#define CHOMP_MODE_STEP_STR @"0x00"
#define CHOMP_MODE_SLEEP_STR @"0x01"


#define CHOMP_PARAM_VALUE_RETURN_OK @"OK!"
#define CHOMP_PARAM_VALUE_RETURN_ERROR @"error!"

//手环参数，DeviceInfo
#define CHOMP_BONG_PARAM_CHIME @"ChompChime"
#define CHOMP_BONG_PARAM_VIBRATION @"ChompVib"
#define CHOMP_BONG_PARAM_KEYTONE @"ChompKeytone"
#define CHOMP_BONG_PARAM_NTM @"ChompNtm"
#define CHOMP_BONG_PARAM_PHONEFIND_STATE @"ChompPF"
#define CHOMP_BONG_PARAM_CAMERASHUTTER_STATE @"ChompCS"
#define CHOMP_BONG_PARAM_SYNCSTEPFLAG @"ChompSyncStepFlag"
//NTT的参数值，%@值填常量定义里面的NTT定制值
#define CHOMP_BONG_PARAM_NTT_STATE @"Chomp%@State"
#define CHOMP_BONG_PARAM_NTT_VIB @"Chomp%@Vib"
#define CHOMP_BONG_PARAM_NTT_SOUND @"Chomp%@Sound"
#define CHOMP_BONG_PARAM_NTT_ICO @"Chomp%@ICO"
#define CHOMP_ADDR_STEP_SEGMENT_BEGIN 0x3A400
#define CHOMP_ADDR_STEP_SEGMENT_END 0x3c800







#endif /* SXRSDKProtocalDefine_Chomp_h */
