//
//  SXRSDKFsmObject.h
//  SXRSDK
//
//  Created by qf on 16/9/26.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SXRSDKCommonDef.h"


@interface SXRSDKFsmObject : NSObject

@property(nonatomic,strong)NSString* cmdName;
@property(nonatomic,assign)NSInteger subState;
@property(nonatomic,assign)NSInteger resendTimes;
@property(nonatomic)SXRSDKPacketMessage packMessage;
@property(nonatomic)SXRSDKProcMessage procMessage;
@property(nonatomic)SXRSDKSendNotifyAfterProcessMessage notifyAfterProcMessage;

+(instancetype)initFsmObjct:(NSString*)cmdName
                   subState:(NSInteger)substate
                resendTimes:(NSInteger)resendtimes
                   packFunc:(SXRSDKPacketMessage)packfunc
                   procFunc:(SXRSDKProcMessage)procfunc
                 notifyFunc:(SXRSDKSendNotifyAfterProcessMessage)notifyfunc;

@end
