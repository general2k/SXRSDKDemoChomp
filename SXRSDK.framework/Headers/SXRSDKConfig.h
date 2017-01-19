//
//  SXRSDKConfig.h
//  SXRSDK
//
//  Created by qf on 16/9/2.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SXRSDKCommonDef.h"

@interface SXRSDKConfig : NSObject

@property(nonatomic,assign)SXRSDKProtoclType protocolType;
//@property(nonatomic, readonly, copy)    NSString* appid;
//@property(nonatomic, readonly, copy)    NSString* secret;
//@property(nonatomic, readonly, copy)    NSString* vid;
@property(nonatomic, readonly, copy)    NSString* did;


@property(nonatomic,strong)NSMutableArray* writeCharacteristicArray;
@property(nonatomic,strong)NSMutableArray* notifyCharacteristicArray;
@property(nonatomic,strong)NSMutableArray* readCharacteristicArray;


+(SXRSDKConfig* )initializeWithProtocolType:(SXRSDKProtoclType)protocoltype;
+(instancetype) shareInstance;
+(BOOL)validate_sdk:(NSString*)appid withSecret:(NSString*)secret withVid:(NSString*)vid withProtocolType:(int)protocolty;

+(void)setCurrentDeviceUUID:(NSString*)uuid;
+(NSString*)getCurrentDeviceUUID;
+(void)setCurrentTokenID:(NSString*)tokenid;
+(NSString*)getCurrentTokenID;
+(void)setCurrentMemberID:(NSString*)memberid;
+(NSString*)getCurrentMemberID;
+(void)setCurrentUID:(NSString*)uid;
+(NSString*)getCurrentUID;

@end
