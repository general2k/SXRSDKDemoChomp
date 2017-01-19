//
//  BUAlarm.h
//  SXRServerSDK
//
//  Created by 张志鹏 on 16/8/7.
//  Copyright © 2016年 zhangzp. All rights reserved.
//

#import <Foundation/Foundation.h>

#define ALARM_TYPE_TIMER 1
#define ALARM_TYPE_MEDICINE 2
#define ALARM_TYPE_DRINK 3
#define ALARM_TYPE_FIT 4
#define ALARM_TYPE_LONGSIT 5

/*闹钟信息类*/
@interface BUAlarm : NSObject

@property (nonatomic, retain) NSNumber * alarm_id;
@property (nonatomic, retain) NSDate * createtime;
@property (nonatomic, retain) NSNumber * day;
@property (nonatomic, retain) NSNumber * enable;
@property (nonatomic, retain) NSNumber * endhour;
@property (nonatomic, retain) NSNumber * endminute;
@property (nonatomic, retain) NSDate * firedate;
@property (nonatomic, retain) NSNumber * hour;
@property (nonatomic, retain) NSString * macid;
@property (nonatomic, retain) NSNumber * minute;
@property (nonatomic, retain) NSNumber * month;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * repeat_hour;
@property (nonatomic, retain) NSNumber * repeat_schedule;
@property (nonatomic, retain) NSNumber * repeat_times;
@property (nonatomic, retain) NSNumber * snooze;
@property (nonatomic, retain) NSNumber * snooze_repeat;
@property (nonatomic, retain) NSNumber * starthour;
@property (nonatomic, retain) NSNumber * startminute;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) NSString * uid;
@property (nonatomic, retain) NSString * username;
@property (nonatomic, retain) NSNumber * vib_number;
@property (nonatomic, retain) NSNumber * vib_repeat;
@property (nonatomic, retain) NSNumber * weekly;
@property (nonatomic, retain) NSNumber * year;

- (NSMutableDictionary *)dictionaryData;


@end
