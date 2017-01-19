//
//  SXRSDKUtils.h
//  SXRSDK
//
//  Created by qf on 16/8/31.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

@interface SXRSDKUtils : NSObject


+(CGFloat)SXRSDKUtilsGetCalories:(NSInteger)Steps;
+(CGFloat)SXRSDKUtilsGetDistance:(NSInteger)Steps;

+(NSMutableDictionary*)getDeviceInformation:(NSString*)uuid;
+(void)setDeviceInformation:(NSString*)uuid Information:(NSMutableDictionary*)info;


+(NSMutableDictionary*)getMemberInfo:(NSString*)memberid;
+(void)setMemberInfo:(NSString*)memberid Information:(NSMutableDictionary*)info;


+(NSString*)gen_uuid;
+(NSString*)getSeqid;
+(NSString*)getVersion;
+(NSString*)getPhoneType;
+(NSString*)getPhoneOS;
+(NSString*)getPhoneName;
+(NSString*)getPhoneId;
+(BOOL)is24time;

+(BOOL)isDateInToday:(NSDate*)currentdate;
+(BOOL) validateEmail:(NSString *)email;

+(NSString*)getCurrentMacid:(NSString*)uuid;
+(NSString*)getBongProjectCode:(NSString*)uuid;
+(NSString*)getBongVersionCode:(NSString*)uuid;

+(NSString *)getSysLanguage;
+(NSString *)getCountryCode;
+(NSString *)getCountryNum;
+(NSString*)CalcPassword:(NSString*)password;
@end
