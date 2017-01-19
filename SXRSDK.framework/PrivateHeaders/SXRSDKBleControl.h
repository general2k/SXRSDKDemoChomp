//
//  SXRSDKBleControl.h
//  SXRSDK
//
//  Created by qf on 16/8/31.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SXRSDKCommonDef.h"
#import <CoreBluetooth/CoreBluetooth.h>
#import <CoreBluetooth/CBService.h>

@interface SXRSDKBleControl : NSObject<CBCentralManagerDelegate, CBPeripheralDelegate>

@property(nonatomic,assign)BOOL is_ble_poweron;
@property (nonatomic, assign) BOOL is_connected;
@property (nonatomic, strong) NSMutableDictionary * connectedDevicelist;
@property (nonatomic, assign)BOOL is_in_OTA;


+(SXRSDKBleControl*)initializeWithProtocolType:(SXRSDKProtoclType)protocoltype;

+(instancetype) shareInstance;





-(void)scanDevice:(NSArray*)serviceUUIDs withOption:(NSDictionary*)option;
-(void)stopScanDevice;
-(void)connectDeviceWithUUID:(NSString*)deviceUUID;
-(void)connectDefaultDevice;
-(void)disconnectDevice:(NSString*)deviceUUID;
//断链但不删除默认手环
-(void)TemporaryDisconnectDevice:(NSString*)deviceUUID;

-(void)submit_writeData:(NSArray*)datalist forPeripheralKey:(NSString*)pKey forCharacteristicKey:(NSString*)ckey withRespone:(BOOL)Respone;
//-(void)submit_writeData:(NSData*)data forPeripheralKey:(NSString*)pKey forCharacteristicKey:(NSString*)ckey withRespone:(BOOL)Respone;
-(void)submit_readData:(NSString*)peripheralKey forCharacteristicKey:(NSString*)ckey;

-(void)IntoOTA:(BOOL)flag;
-(void)restart_ble;

@end
