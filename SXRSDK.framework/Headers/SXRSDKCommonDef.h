//
//  SXRSDKCommonDef.h
//  SXRSDK
//
//  Created by qf on 16/8/30.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#ifndef SXRSDKCommonDef_h
#define SXRSDKCommonDef_h


#endif /* SXRSDKCommonDef_h */

@class CBPeripheral,CBCharacteristic;

/* SDK support ble protocol type */
typedef enum
{
    SXRSDKProtoclType_HJT,
    SXRSDKProtoclType_KKasong,
    SXRSDKProtoclType_Chomp,
    SXRSDKProtoclType_Goband,
    SXRSDKProtoclType_Fitrist,
    SXRSDKProtoclType_Wannafit
}SXRSDKProtoclType;

//callback block define
typedef BOOL (^SXRSDKBleNameFilter)(CBPeripheral *peripheral, NSDictionary *advertisementData, NSNumber *RSSI);
typedef NSArray* (^SXRSDKGetDiscoverCharactristicList)();
typedef void (^SXRSDKCharacteristicDidUpdateNotifyState)(CBCharacteristic *ch, NSError *error);

//callback function define
typedef NSData* (*SXRSDKPacketMessage)(NSDictionary* paramlist);

typedef BOOL (*SXRSDKProcIndicatorMessage)(NSData* recvdata);
typedef BOOL (*SXRSDKCheckValidMessage)(NSData* recvdata);
typedef int (*SXRSDKGetExpectResponseCount)(NSData* recvdata);
typedef BOOL (*SXRSDKNeedCacheData)(NSNumber* subState);
typedef void (*SXRSDKProcMessage)(NSData* recvdata);
typedef void (*SXRSDKSendNotifyAfterProcessMessage)(NSData* recvdata);
typedef void (*SXRSDKDeviceReady)();
typedef void(^SXRSDKGetServerResponesCallBack)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error);


/*SDK common define*/
#define KG2LB 2.2
#define M2FEET 3.2808
#define M2INCH 39.3700787
#define KM2MILE 0.6213712
#define CM2INCH 0.3937008
#define CALQUOTE 0.78
#define MILE2FEET 5280
#define METER2YARD 1.0936133
#define MILE2YARD 1760


#define MEASURE_UNIT_METRIX 1
#define MEASURE_UNIT_US 2

#define DEFAULT_CMD_TIMEOUT 10

#define MALE 1
#define FEMALE 2

#define SENSOR_HEARTRATE 0x80

#define SPORT_TYPE_WALK 0
#define SPORT_TYPE_RUN 1
#define SPORT_TYPE_BICYCLE 2
#define SPORT_TYPE_DANCE 3
#define SPORT_TYPE_BASKETBALL 4
#define SPORT_TYPE_FOOTBALL 5
#define SPORT_TYPE_YOGA 6
#define SPORT_TYPE_KONGFU 7
#define SPORT_TYPE_CLIMB 8
#define SPORT_TYPE_GOLF 9
#define SPORT_TYPE_SWIM 10
#define SPORT_TYPE_STAIR 11
#define SPORT_TYPE_SLEEP 12
#define SPORT_TYPE_ROPE 13
#define SPORT_TYPE_JACK 14
#define SPORT_TYPE_SITUP 15


#define SPORT_TYPE_RUN_MARK_OUTDOOR 1016

#define ALARM_TYPE_TIMER 1
#define ALARM_TYPE_MEDICINE 2
#define ALARM_TYPE_DRINK 3
#define ALARM_TYPE_INTERVALTIMER 4
#define ALARM_TYPE_SEDENTARY 5
#define ALARM_TYPE_REMINDER 6


/*characteristic uuid define*/
#define CH_UUID_BATTERY @"2A19"
/*蓝牙芯片采用笙科方案的手环产品使用以下定义，包括HJT公版，KKasong*/
#define CH_UUID_AMMICOM_WRITE @"FFF2"
#define CH_UUID_AMMICOM_WRITE_ADV @"FFF4"
#define CH_UUID_AMMICOM_NOTIFY @"FFF1"
#define CH_UUID_AMMICOM_NOTIFY_ADV @"FFF3"
#define CH_UUID_AMMICOM_OTACMD @"FA11"
#define CH_UUID_AMMICOM_OTADATA @"FA10"
/*蓝牙芯片采用nodic方案的手环产品使用以下定义，包括Chomp系列*/
#define CH_UUID_CHOMP_NODIC_WRITE @"6E400002-B5A3-F393-E0A9-E50E24DCCA9E"
#define CH_UUID_CHOMP_NODIC_NOTIFY @"6E400003-B5A3-F393-E0A9-E50E24DCCA9E"
/*蓝牙芯片采用TI、nordic，创智杰科方案商提供的手环产品 包括goband,fitrist系列*/
#define CH_UUID_CZJK_WRITE @"FFF2"
#define CH_UUID_CZJK_NOTIFY @"FFF1"
/*蓝牙芯片采用dialog，由建云方案商提供的手环产品，包括wannafit系列*/
#define CH_UUID_WANNAFIT_WRITE @"FFF1"
#define CH_UUID_WANNAFIT_NOTIFY @"FFF2"

//Phoneinfo


//DeviceInfoKey
#define BONGINFO_KEY_FIRMWARE @"FW"
#define BONGINFO_KEY_HARDWARE @"HW"
#define BONGINFO_KEY_BLEADDR @"BA"
#define BONGINFO_KEY_CHIPADDR @"CA"
#define BONGINFO_KEY_LASTSYNCTIME @"LASTHISTORYTIME"
#define BONGINFO_KEY_LASTSYNCSPORTTIME @"LASTSPORTTIME"
#define BONGINFO_KEY_BATTERYLEVEL @"BL"
#define BONGINFO_KEY_NTT @"NTT"
#define BONGINFO_KEY_PF @"PF"
#define BONGINFO_KEY_CHM @"CHM"
#define BONGINFO_KEY_VIB @"VIB"
#define BONGINFO_KEY_KEYTONE @"KEYTONE"
#define BONGINFO_KEY_NAME @"NM"
#define BONGINFO_KEY_ADVERTISMENTDATA @"ADV"
#define BONGINFO_KEY_UUID @"UUID"
#define BONGINFO_KEY_PROJECTCODE @"PRJCODE"
#define BONGINFO_KEY_PRODUCTCODE @"PRDCODE"
#define BONGINFO_KEY_VERSIONCODE @"VERCODE"
#define BONGINFO_KEY_SCREEN_TIME @"SCREENTIME"
#define BONGINFO_KEY_AUTHEXPIRE @"AE"

//Notify Key define
#define NOTIFY_KEY_ISOK @"isOk"
#define NOTIFY_KEY_SUBSTATE @"substate"
#define NOTIFY_KEY_MACID @"macid"
#define NOTIFY_KEY_PRODUCT @"product"
#define NOTIFY_KEY_FACTORY @"factory"
#define NOTIFY_KEY_VERSION @"version"
#define NOTIFY_KEY_FIRMWARE @"firmware"
#define NOTIFY_KEY_SENSOR_STATE @"sensor_state"
#define NOTIFY_KEY_FINDPHONE_ONOFF @"findphone_onoff"
#define NOTIFY_KEY_MUSIC_CONTROL @"musictrl"

//Notify Key Value
#define FIND_PHONE_START 0
#define FIND_PHONE_STOP 1

#define MUSIC_CONTROL_PLAY 1
#define MUSIC_CONTROL_STOP 0
#define MUSIC_CONTROL_NEXT 2
#define MUSIC_CONTROL_PREV 3
#define MUSIC_CONTROL_VOLUMEUP 4
#define MUSIC_CONTROL_VOLUMEDOWN 5
#define MUSIC_CONTROL_PAUSE 6

#define TIME_NEED_TO_RESET_DEVICE 60*60
#define TIME_NEED_TO_SYNC_DEVICE_TIME 10
//notifykey
#define notify_key_ble_power_on @"bleon"
#define notify_key_ble_power_off @"bleoff"
#define notify_key_did_scan_device @"scandevice"
#define notify_key_did_connect_device @"didconnect"
#define notify_key_did_fail_connect_device @"didfailconnect"
#define notify_key_did_disconnect_device @"diddisconnect"
#define notify_key_did_device_ready @"deviceready"
#define notify_key_did_get_mac_id @"getmacid"
#define notify_key_did_get_firmware @"getfirmware"
#define notify_key_did_finish_send_cmd @"finishsendcmd"
//#define notify_key_did_change_sensor_status @"sensorstatus"
#define notify_key_did_send_nodic_ota0 @"nodicota0"
#define notify_key_did_recv_device_find_phone @"findphone"
#define notify_key_did_recv_music_control @"musiccontrol"
#define notify_key_did_recv_photo_control @"photocontrol"
#define notify_key_did_send_start_ota @"didsendota"

//mainloop 相关定义
//状态
#define STATE_CONNECT_LOST 0
#define STATE_CONNECT_INIT 1
#define STATE_CONNECT_IDLE 2
#define STATE_SYNC 3
#define STATE_OTA 4
//子状态
#define SUB_STATE_IDLE 0
#define SUB_STATE_BEGIN_SXR 1
#define SUB_STATE_BEGIN_HJT 1000
#define SUB_STATE_BEGIN_CHOMP 2000
#define SUB_STATE_BEGIN_CZJK 3000
#define SUB_STATE_BEGIN_JY 4000



//不同协议的子状态请参照不同协议的define文件

//和服务器相关的定义
//返回错误代码
#define ERROR_CODE_OK                       @"200"
#define ERROR_CODE_UNKNOW_CMD               @"40000"
#define ERROR_CODE_SERVER_ABNORMAL          @"40001"
#define ERROR_CODE_INVALID_PARAM            @"40002"
#define ERROR_CODE_DB_ERROR                 @"40003"
#define ERROR_CODE_MEMBER_EXIST             @"41001"
#define ERROR_CODE_INVALID_PASSWD           @"41002"
#define ERROR_CODE_MEMBER_NOT_EXIST         @"41003"
#define ERROR_CODE_TOKEN_OOS                @"41004"
#define ERROR_CODE_MACID_NOT_EXIST          @"42001"
#define ERROR_CODE_MACID_OUT_RANGE          @"42002"
#define ERROR_CODE_MACID_HAS_OWNER          @"42003"
#define ERROR_CODE_MACID_STATUS_OOS         @"42004"
#define ERROR_CODE_NOT_HAS_ONWER            @"42005"
#define ERROR_CODE_INVALID_QRCODE           @"42006"
#define ERROR_CODE_FOLLOWER_NOT_EXIST       @"42007"
#define ERROR_CODE_INVALID_DATA_TYPE        @"44002"
#define ERROR_CODE_UNSUPPORT_VID            @"45001"
//SDK内部错误代码
#define ERROR_CODE_NORETURN                 @"-10000"
#define ERROR_CODE_NOERRCODE                @"-10001"
#define ERROR_CODE_NOBODY                   @"-10002"





//消息定义
typedef enum {
    SXRSDKServerRequestActionLogin,
    SXRSDKServerRequestActionRegister,
    SXRSDKServerRequestActionGetpasswd,
    SXRSDKServerRequestActionChangepasswd,
    SXRSDKServerRequestActionGetMemberinfo,
    SXRSDKServerRequestActionUpdateImage,
    SXRSDKServerRequestActionUpdateAlarm,
    SXRSDKServerRequestActionUpdateMemberinfo,
    SXRSDKServerRequestActionAddMemberinfo,
    SXRSDKServerRequestActionLogout
}SXRSDKServerRequestAction;

//请求消息参数定义
#define ACTION_KEY_APPID @"appid"
#define ACTION_KEY_SECRET @"secret"
#define ACTION_KEY_VERSION @"version"
#define ACTION_KEY_BODY @"body"
#define ACTION_KEY_CMDNAME @"action_cmd"
#define ACTION_KEY_VID @"vid"
#define ACTION_KEY_SEQID @"seq_id"
#define ACTION_KEY_USERNAME @"username"
#define ACTION_KEY_PASSWORD @"pwd"
#define ACTION_KEY_EMAIL @"email"
#define ACTION_KEY_TID @"tid"
#define ACTION_KEY_HEIGHT @"height"
#define ACTION_KEY_WEIGHT @"weight"
#define ACTION_KEY_STRIDE @"stride"
#define ACTION_KEY_NICKNAME @"nickname"
#define ACTION_KEY_BIRTHDAY @"birth"
#define ACTION_KEY_BLOODTYPE @"bloodtype"
#define ACTION_KEY_PHONENAME @"phone_name"
#define ACTION_KEY_PHONEOS @"phone_os"
#define ACTION_KEY_PHONEID @"phone_id"
#define ACTION_KEY_APPVERSION @"app_version"
#define ACTION_KEY_MOBLIE @"mobile"
#define ACTION_KEY_GENDER @"gender"
#define ACTION_KEY_SOURCE @"source"
#define ACTION_KEY_UID @"uid"
#define ACTION_KEY_OLDPASSWORD @"old_password"
#define ACTION_KEY_NEWPASSWORD @"new_password"
#define ACTION_KEY_LANG @"lang"
#define ACTION_KEY_GEARTYPE @"gear_type"
#define ACTION_KEY_NAME @"name"
#define ACTION_KEY_IMG @"img"
#define ACTION_KEY_FORMAT @"format"
#define ACTION_KEY_DEVICENAME @"device_name"
#define ACTION_KEY_GEARSUBTYPE @"gear_subtype"
#define ACTION_KEY_MACID @"mac_id"
#define ACTION_KEY_GOALSTEPS @"goal_steps"
#define ACTION_KEY_GOALCAL @"goal_cal"
#define ACTION_KEY_GOALDISTANCE @"goal_dis"
#define ACTION_KEY_GOALACTIVITY @"goal_act"
#define ACTION_KEY_GOALSLEEP @"goal_slp"
#define ACTION_KEY_YOOGOAL @"yoo_goal"
#define ACTION_KEY_YOOCHALLENGE @"yoo_challenge"
#define ACTION_KEY_YOOCHALLENGEID @"yoo_challengeid"
#define ACTION_KEY_TYPE @"type"
#define ACTION_KEY_ENABLE @"enable"
#define ACTION_KEY_CREATETIME @"createtime"
#define ACTION_KEY_HOUR @"hour"
#define ACTION_KEY_MINUTE @"minute"
#define ACTION_KEY_FIREDATE @"firedate"
#define ACTION_KEY_WEEKLY @"weekly"
#define ACTION_KEY_SNOOZE @"snooze"
#define ACTION_KEY_SNOOZE_REPEAT @"snooze_repeat"
#define ACTION_KEY_DAY @"day"
#define ACTION_KEY_REPEATHOUR @"repeat_hour"
#define ACTION_KEY_REPEATTIMES @"repeat_times"
#define ACTION_KEY_VIBNUMBER @"vib_number"
#define ACTION_KEY_VIBREPEAT @"vib_repeat"
#define ACTION_KEY_YEAR @"year"
#define ACTION_KEY_MONTH @"month"
#define ACTION_KEY_REPEATSCEDUAL @"repeat_schedule"
#define ACTION_KEY_STARTHOUR @"starthour"
#define ACTION_KEY_STARTMINUTE @"startminute"
#define ACTION_KEY_ENDHOUR @"endhour"
#define ACTION_KEY_ENDMINUTE @"endminute"
#define ACTION_KEY_ALARMID @"alarm_id"
#define ACTION_KEY_UNIT @"unit"
#define ACTION_KEY_SOSNUMBER @"sosnumber"
#define ACTION_KEY_APPLANG @"app_lang"
#define ACTION_KEY_SYSLANG @"sys_lang"
#define ACTION_KEY_NATION @"nation"
#define ACTION_KEY_NATIONCODE @"nation_code"
#define ACTION_KEY_PHONETYPE @"phone_type"
#define ACTION_KEY_DATATYPE @"data_type"
#define ACTION_KEY_DID @"did"
#define ACTION_KEY_TIMEZONE @"timezone"
#define ACTION_KEY_DATALIST @"datalist"
#define ACTION_KEY_ISFINISH @"is_finish"
#define ACTION_KEY_TIMESTAMP @"timestamp"
#define ACTION_KEY_DATETIME @"datetime"
#define ACTION_KEY_DATA_STEP @"step"
#define ACTION_KEY_DATA_CALORIES @"calories"
#define ACTION_KEY_DATA_DISTANCE @"distance"
#define ACTION_KEY_DATA_HEARTRATE @"heartrate"
#define ACTION_KEY_DATA_DURATION @"duration"
#define ACTION_KEY_DATA_MODE @"mode"
#define ACTION_KEY_DATA_TYPE @"type"
#define ACTION_KEY_FOLLOWEDMEMBERID @"followed_memberid"
#define ACTION_KEY_FRIENDS @"friends"
#define ACTION_KEY_FOLLOWEDNUMBER @"follower_number"
#define ACTION_KEY_FOLLOWERS @"followers"
#define ACTION_KEY_REMARK @"remark"
#define ACTION_KEY_DATESTR @"datestr"
#define ACTION_KEY_DATESTRLIST @"datestrlist"
#define ACTION_KEY_QRCODE @"qrcode"
#define ACTION_KEY_MEMBERID @"member_id"
#define ACTION_KEY_SYNCKEYS @"sync_keys"
#define ACTION_KEY_SYNCKEY @"sync_key"
#define ACTION_KEY_TARGETKEY @"target_key"
#define ACTION_KEY_MEMBERLIST @"memberidlist"
#define ACTION_KEY_DATALIMIT @"datalimit"
#define ACTION_KEY_DATASKIP @"dataskip"
#define ACTION_KEY_COMPAREVAL @"compareval"


//响应消息参数定义
#define RESPONE_KEY_MEMBERID @"memberid"
#define RESPONE_KEY_TID @"tid"
#define RESPONE_KEY_ERRORCODE @"error_code"
#define RESPONE_KEY_BODY @"body"
#define RESPONE_KEY_SOURCE @"source"
#define RESPONE_KEY_HEIGHT @"height"
#define RESPONE_KEY_WEIGHT @"weight"
#define RESPONE_KEY_UID @"uid"
#define RESPONE_KEY_STRIDE @"stride"
#define RESPONE_KEY_BIRTH @"birth"
#define RESPONE_KEY_EMAIL @"email"
#define RESPONE_KEY_GEARTYPE @"gear_type"
#define RESPONE_KEY_NAME @"name"
#define RESPONE_KEY_GENDER @"gender"
#define RESPONE_KEY_STATE @"state"
#define RESPONE_KEY_USERINFO @"userinfo"
#define RESPONE_KEY_MOBILE @"mobile"
#define RESPONE_KEY_NICKNAME @"nickname"
#define RESPONE_KEY_IMGURL @"img_url"
#define RESPONE_KEY_IMGFORMAT @"headimg_fmt"
#define RESPONE_KEY_GEARSUBTYPE @"gear_subtype"
#define RESPONE_KEY_BLOODTYPE @"bloodtype"
#define RESPONE_KEY_GOALSTEPS @"goal_steps"
#define RESPONE_KEY_GOALCAL @"goal_cal"
#define RESPONE_KEY_GOALDISTANCE @"goal_dis"
#define RESPONE_KEY_GOALACTIVITY @"goal_act"
#define RESPONE_KEY_GOALSLEEP @"goal_slp"
#define RESPONE_KEY_YOOGOAL @"yoo_goal"
#define RESPONE_KEY_YOOCHALLENGE @"yoo_challenge"
#define RESPONE_KEY_YOOCHALLENGEID @"yoo_challengeid"
#define RESPONE_KEY_ALARMLIST @"alarmlist"
#define RESPONE_KEY_TYPE @"type"
#define RESPONE_KEY_NAME @"name"
#define RESPONE_KEY_ENABLE @"enable"
#define RESPONE_KEY_CREATETIME @"createtime"
#define RESPONE_KEY_HOUR @"hour"
#define RESPONE_KEY_MINUTE @"minute"
#define RESPONE_KEY_FIREDATE @"firedate"
#define RESPONE_KEY_WEEKLY @"weekly"
#define RESPONE_KEY_SNOOZE @"snooze"
#define RESPONE_KEY_SNOOZE_REPEAT @"snooze_repeat"
#define RESPONE_KEY_DAY @"day"
#define RESPONE_KEY_REPEATHOUR @"repeat_hour"
#define RESPONE_KEY_REPEATTIMES @"repeat_times"
#define RESPONE_KEY_VIBNUMBER @"vib_number"
#define RESPONE_KEY_VIBREPEAT @"vib_repeat"
#define RESPONE_KEY_YEAR @"year"
#define RESPONE_KEY_MONTH @"month"
#define RESPONE_KEY_REPEATSCEDUAL @"repeat_schedule"
#define RESPONE_KEY_STARTHOUR @"starthour"
#define RESPONE_KEY_STARTMINUTE @"startminute"
#define RESPONE_KEY_ENDHOUR @"endhour"
#define RESPONE_KEY_ENDMINUTE @"endminute"
#define RESPONE_KEY_MACID @"mac_id"
#define RESPONE_KEY_ALARMID @"alarm_id"
#define RESPONE_KEY_VID @"vid"
#define RESPONE_KEY_UNIT @"unit"
#define RESPONE_KEY_SOSNUMBER @"sosnumber"
#define RESPONE_KEY_DATATYPE @"data_type"

