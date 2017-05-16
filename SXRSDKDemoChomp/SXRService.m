//
//  SXRService.m
//  SXRSDKDemo4Goband
//
//  Created by qf on 16/10/10.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#import "SXRService.h"
#import <SXRSDK/SXRSDK.h>
#import <CoreBluetooth/CoreBluetooth.h>

#define DEMO_APPID @"NRJKB0DY24M0QYX"
#define DEMO_SECRET @"V6z65iDd2OiEZ52venfBw5KrLkA8KajNJSd9KuDR"
#define DEMO_VID @"FFFFF1001001"

@interface SXRService()
@end

@implementation SXRService
+(SXRService *)SharedInstance
{
    static SXRService *service = nil;
    if (service == nil) {
        service = [[SXRService alloc] init];
    }
    return service;
}

-(id)init
{
    self = [super init];
    if (self) {
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_chomp_recv_current_step object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_chomp_recv_current_batteryinfo object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_chomp_recv_current_recordnumber object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_chomp_recv_current_devicetime object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_chomp_recv_current_devicemode object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_chomp_recv_sync_step object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_chomp_recv_sync_sleep object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_chomp_recv_sync_heartrate object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_did_get_firmware object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_did_finish_send_cmd object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_did_recv_device_find_phone object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_did_recv_music_control object:nil];
        [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onReadData:) name:notify_key_did_recv_photo_control object:nil];

    }
    return self;
}

+(void)InitSXRSDK{
    [SXR initializeWithProtocolType:SXRSDKProtoclType_Chomp andAppID:DEMO_APPID andSecret:DEMO_SECRET andVid:DEMO_VID];
    NSLog(@"%d",[SXR shareInstance].protocolType);
    [SXR shareInstance].bleNameFilter = ^(CBPeripheral *peripheral, NSDictionary *advertisementData, NSNumber *RSSI){
        NSLog(@"sxrblenamefilter, %@",peripheral.name);
        return YES;
    };
    [SXR shareInstance].deviceReady = testDeviceReady;
    
    
    
}
void testDeviceReady(){
    NSLog(@"testDeviceReady");
    NSMutableDictionary* bi = [SXRSDKUtils getDeviceInformation:[SXRSDKConfig getCurrentDeviceUUID]];
    NSString* macid = @"";
    if (bi){
        NSString* tmpid = [bi objectForKey:BONGINFO_KEY_BLEADDR];
        if(tmpid && ![tmpid isEqualToString:@""]){
            macid = tmpid;
        }
    }
    [[SXR shareInstance] AddCommand:CMD_CHOMP_DEVICE_INFO withParam:nil toCharacteristicKey:nil HighPriority:NO waitResponse:YES];
    if ([macid isEqualToString:@""]) {
        [[SXR shareInstance] AddCommand:CMD_CHOMP_READ_ADDR withParam:nil toCharacteristicKey:nil HighPriority:NO waitResponse:YES];
    }
    [[SXR shareInstance] AddCommand:CMD_CHOMP_READ_FIRMWARE withParam:nil toCharacteristicKey:nil HighPriority:NO waitResponse:YES];

}
-(void)onReadData:(NSNotification*)notify{
    NSLog(@"recv notify:%@",notify);
}

@end
