//
//  SXRSDKServerManager.h
//  SXRSDK
//
//  Created by qf on 16/10/9.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"
#import "SXRSDKCommonDef.h"
#import "SXRSDKConfig.h"
#import "SXRSDKUtils.h"




@class BUUser;
@class BUAlarm;

@interface SXRSDKServerManager : NSObject

@property(nonatomic, copy) void (^callback)(id, NSError*);

//@property(nonatomic,assign)SXRSDKProtoclType protocolType;
//
/**
 初始化protocoltype
 
 @param appid 为每个app分配的唯一id
 程序初始化前必须先初始化一次protocoltype才能正常使用
 */
//+ (void)initWithAppid:(NSString *)appId;
//+(SXRSDKServerManager* )initializeWithProtocolType:(SXRSDKProtoclType)protocoltype;

+(SXRSDKServerManager* )initialize;


/**
 单例方法
 
 @return SXRSDKServerManager实例
 */
+(instancetype) shareInstance;


/**
 用户登录
 
 @param account  帐号
 @param passwd   密码
 @param callBack 回调地址
 
 @return FALSE：参数错误
 */
- (NSURLSessionDataTask *)SXRSDKLogin:(NSString *)account
             passwd:(NSString *)passwd
           callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;
/**
 用户注册
 
 @param account  帐号
 @param passwd   密码
 @param callBack 回调地址
 
 @return FALSE：参数错误
 */
- (NSURLSessionDataTask *)SXRSDKRegisters:(NSString *)account
                 passwd:(NSString *)passwd
               callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 忘记密码
 
 @param account  帐号
 @param lang     邮件模板语言，eng，chs
 @param callBack 回调地址
 
 @return FALSE：参数错误
 */
- (NSURLSessionDataTask *)SXRSDKForgetPasswd:(NSString *)account
                  language:(NSString*)lang
                  callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 获取当前SyncKey信息
 @param tokenid   当前token
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKGetSyncKeyByToken:(NSString*)token
                       callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 修改密码
 
 @param account     帐号
 @param oldPasswd   旧密码
 @param newPasswd   新密码
 @param tokenId     登录成功时获取保存
 @param callBack    回调地址
 
 @return   FALSE：  参数错误
 */
- (NSURLSessionDataTask *)SXRSDKChangePasswd:(NSString*)token
                 oldPasswd:(NSString *)oldPasswd
                 newPasswd:(NSString *)newPasswd
                  callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 获取用户信息
 
 @param tokenId    登录成功时获取保存
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKGetMemberInfo:(NSString*)token
                   callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 更新头像
 
 @param image     头像
 @param tokenId   登录成功时获取保存
 @param userId    登录成功时获取保存
 @param callBack  回调地址
 
 @return FALSE：  参数错误
 */
- (NSURLSessionDataTask *)SXRSDKUpdateImageByToken:(NSString*)token
                           Image:(UIImage *)image
                        callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 更新用户信息
 
 @param tokenId    登录成功时获取保存
 @param userId     登录成功时获取保存
 @param UserInfo   用户信息
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKUpdateMemberInfoByToken:(NSString*)token
                           MemberInfo:(NSDictionary *)data
                             callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;
/**
 更新闹钟信息
 
 @param tokenId    登录成功时获取保存
 @param Alarm      闹钟信息
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKUpdateAlarmByToken:(NSString*)token
                       AlarmInfo:(BUAlarm *)alarm
                        callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;
/**
 退出登录
 
 @param tokenId    登录成功时获取保存
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKLogout:(NSString*)token
            callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;
/**
 鉴权手环
 
 @param DeviceID   设备uuid
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
-(NSURLSessionDataTask *)SXRSDKGetGearAuthInfo:(NSString*)token
                  DeviceUUID:(NSString*)DeviceID
                    callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;


///**
// 查询上传数据的最大条数
//
// @param callBack   回调地址
// 
// @return FALSE：   参数错误
// */
//- (BOOL)SXRSDKGetMaxUploadCount:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 上传Fitness数据
 
 @param datalist    数据列表
 @param timezone    时区（+0800）
 @param isfinish    是否完成 NSInteger(1=finish 0=no)
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKUploadFitnessData:(NSString*)token
                       DataList:(NSArray *)datalist
                       timeZone:(NSString*)timezone
                       callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;
/**
 下载fitness数据
 
 @param timezone    时区（+0800）
 @param macid       mac地址，格式为大写
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKDownloadFitnessData:(NSString*)token
                       CurrentKey:(NSNumber*)currentKey
                        TargetKey:(NSNumber*)targetKey
                         timeZone:(NSString*)timezone
                         callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 上传Body数据
 
 @param datalist    数据列表
 @param timezone    时区（+0800）
 @param isfinish    是否完成 NSInteger(1=finish 0=no)
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKUploadBodyData:(NSString*)token
                    DataList:(NSArray *)datalist
                    timeZone:(NSString*)timezone
                    callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;
/**
 下载Body数据
 
 @param timezone    时区（+0800）
 @param macid       mac地址，格式为大写
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKDownloadBodyData:(NSString*)token
                    CurrentKey:(NSNumber*)currentKey
                     TargetKey:(NSNumber*)targetKey
                      timeZone:(NSString*)timezone
                      callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 获取用户二维码
 
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKGetMemberQRCode:(NSString*)token
                     callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;
/**
 根据二维码关注用户
 @param qrcode     二维码
 @param name       关注用户的备注名
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKFollowMemberByToken:(NSString*)token
                           QRCode:(NSString*)qrcode
                         markName:(NSString*)name
                         callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;
/**
 根据用户ID关注用户
 @param memberid   关注对象的memberid
 @param name       关注用户的备注名
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKFollowMemberByToken:(NSString*)token
                         MemberID:(NSString*)memberid
                         markName:(NSString*)name
                         callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 取消关注
 @param memberid   取消关注对象的memberid
@param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKUnFollowMemberByToken:(NSString*)token
                           MemberID:(NSString*)memberid
                           callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 获取用户的朋友列表
 
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKGetFriends:(NSString*)token
                callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 获取关注我的人的列表
 
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKGetFollowers:(NSString*)token
                  callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 设置朋友备注名
 @param memberid   对象的memberid
 @param name       备注名
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKSetFriendMarkNameByToken:(NSString*)token
                              MemberID:(NSString*)memberid
                              markName:(NSString*)name
                              callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 获取朋友信息
 @param memberid   对象的memberid
 @param datestr    日期字符串 格式为yyyy-mm-dd
 @param timestamp  UTC时间戳
 @param timezone   时区
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKGetFriendSummaryDataByToken:(NSString*)token
                                 MemberID:(NSString*)memberid
                                  dateStr:(NSString*)datestr
                                timeStamp:(double)timestamp
                                 timeZone:(NSString*)timezone
                                 callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

- (NSURLSessionDataTask*)SXRSDKGetMultipleFriendSummaryDataByToken:(NSString*)token
                                                          MemberID:(NSArray*)memberidlist
                                                           dateStr:(NSString*)datestr
                                                         timeStamp:(double)timestamp
                                                          timeZone:(NSString*)timezone
                                                          callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary * result,NSError *error))callBack;


/**
 获取朋友详细信息
 @param memberid   对象的memberid
 @param datestrlist    日期字符串队列 格式为yyyy-mm-dd
 @param timestamp  UTC时间戳
 @param timezone   时区
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKGetFriendDetailDataByToken:(NSString*)token
                                MemberID:(NSString*)memberid
                             dateStrList:(NSArray*)datestrlist
                               timeStamp:(double)timestamp
                                timeZone:(NSString*)timezone
                                callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;
/**
 给朋友点赞
 @param memberid   对象的memberid
 @param datestr    日期字符串 格式为yyyy-mm-dd
 @param timestamp  UTC时间戳
 @param timezone   时区
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask *)SXRSDKZanByToken:(NSString*)token
                MemberID:(NSString*)memberid
                 dateStr:(NSString*)datestr
               timeStamp:(double)timestamp
                timeZone:(NSString*)timezone
                callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary *result, NSError *error))callBack;

/**
 获取排行榜信息
 @param memberid   对象的memberid
 @param datestr    日期字符串 格式为yyyy-mm-dd
 @param timestamp  UTC时间戳
 @param timezone   时区
 @param callBack   回调地址
 
 @return FALSE：   参数错误
 */
- (NSURLSessionDataTask*)SXRSDKGetBoardByToken:(NSString*)token
                                       dateStr:(NSString*)datestr
                                     timeStamp:(double)timestamp
                                      timeZone:(NSString*)timezone
                                     dataLimit:(int)datalimit
                                      dataSkip:(int)dataskip
                                      dataType:(NSString*)datatype
                                    compareVal:(NSString*)compareval
                                      callBack:(void(^)(NSURLSessionDataTask *task, NSDictionary * result,NSError *error))callBack;

@end
