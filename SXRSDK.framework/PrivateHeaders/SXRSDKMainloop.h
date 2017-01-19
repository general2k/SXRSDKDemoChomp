//
//  SXRSDKMainloop.h
//  SXRSDK
//
//  Created by qf on 16/9/8.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SXRSDKCommonDef.h"
#import "SXRSDKBleControl.h"
#import "SXRSDKProtocolDefine_JY.h"
#import "SXRSDKProtocolDefine_HJT.h"
#import "SXRSDKProtocolDefine_SXR.h"
#import "SXRSDKProtocolDefine_CZJK.h"
#import "SXRSDKProtocalDefine_Chomp.h"

@interface SXRSDKMainloop : NSObject
@property(nonatomic,assign)SXRSDKProtoclType protocolType;
@property(nonatomic,strong)NSMutableDictionary* FsmObjectDict;

+(SXRSDKMainloop* )initializeWithProtocolType:(SXRSDKProtoclType)protocoltype;
+(instancetype) shareInstance;

-(void)ReceiveData:(NSData*)data;
-(void)WriteConfirm:(CBPeripheral*)peripharel ch:(CBCharacteristic*)characteristic err:(NSError*)error;
-(void)DeviceReady:(CBPeripheral*)peripheral;
-(BOOL)AddFsmObjct:(NSString*)cmdName
          subState:(NSInteger)substate
       resendTimes:(NSInteger)resendtimes
          packFunc:(SXRSDKPacketMessage)packfunc
          procFunc:(SXRSDKProcMessage)procfunc
        notifyFunc:(SXRSDKSendNotifyAfterProcessMessage)notifyfunc;
-(void)AddCommand:(NSString*)cmdname withParam:(NSDictionary*)params toCharacteristicKey:(NSString*)chkey HighPriority:(BOOL)isPriority  waitResponse:(BOOL)waitresp;
-(void)RemoveCommand:(NSString*)cmdname;
@end
