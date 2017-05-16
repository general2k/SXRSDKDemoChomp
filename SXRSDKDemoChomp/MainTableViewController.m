//
//  MainTableViewController.m
//  CZJKFuncList
//
//  Created by qf on 16/10/10.
//  Copyright © 2016年 Keeprapid. All rights reserved.
//

#import "MainTableViewController.h"
#import "ScanDeviceViewController.h"
#import <SXRSDK/SXRSDK.h>

enum {
    FuncRegister,
    FuncLogin,
    FuncForgetPassword,
    FuncChangePassword,
    FuncGetMemberInfo,
    FuncUpdateMemberInfo,
    FuncUpdateAlarms,
    FuncUploadHeadimage,
    FuncLogout,
    FuncScanDevice,
    FuncCurrentData,
    FuncSportData,
    FuncHistoryData,
    FuncSetParameter,
    FuncSetTarget,
    FuncSetDate,
    FuncGetAlarm,
    FuncSetAlarm,
    FuncGetInt,
    FuncSetInt,
    FuncGetTmr,
    FuncSetTmr,
    FuncGetChm,
    FuncSetChm,
    FuncGetAlrt,
    FuncSetAlrt,
    FuncGetPf,
    FuncSetPf,
    FuncGetCs,
    FuncSetCs,
    FuncGetIA,
    FuncSetIA,
    FuncGetNTM,
    FuncSetNTM,
    FuncGetNTT,
    FuncSetNTT,
    FuncSetStep,
    FuncSetActs,
    FuncSetSlpm,
    FuncCurrentDevice,
    FuncSendANCSPair,
    FuncTakePhoto,
    FuncConnectDefaultDevice,
    FuncReadDeviceTime,
    FuncGetFirmware,
    FuncGetDeviceMode,
    FuncIntoOTA,
    FuncGetMacid
};


@interface MainTableViewController ()
@property(nonatomic,strong)NSArray* serveritemname;
@property(nonatomic,strong)NSArray* serveritemtag;
@property(nonatomic,strong)NSArray* deviceitemname;
@property(nonatomic,strong)NSArray* deviceitemtag;
@property(nonatomic,strong)UILabel* currentmember;
@property(nonatomic,strong)UILabel* currentdevice;
@property(nonatomic,strong)UILabel* connectstatus;
@property(nonatomic,strong)UILabel* currenttoken;

@end

@implementation MainTableViewController
-(void)viewWillAppear:(BOOL)animated{
    [self refreshText];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(refreshText) name:notify_key_did_device_ready object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(refreshText) name:notify_key_did_disconnect_device object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(refreshText) name:notify_key_did_connect_device object:nil];
//    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(openCamera) name:notify_key_did_recv_photo_control object:nil];
//    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onCmdFinish:) name:notify_key_did_finish_send_cmd object:nil];

}
-(void)viewWillDisappear:(BOOL)animated{
    [[NSNotificationCenter defaultCenter] removeObserver:self];
    
}
- (void)viewDidLoad {
    [super viewDidLoad];
//    self.navigationController.navigationBar.barTintColor = [UIColor blueColor];
    [self.navigationController.navigationBar setTranslucent:NO];
//    self.serveritemname = @[NSLocalizedString(@"Register", nil),
//                            NSLocalizedString(@"Login", nil),
//                            NSLocalizedString(@"ForgetPassword", nil),
//                            NSLocalizedString(@"ChangePassword", nil),
//                            NSLocalizedString(@"GetMemberInfo", nil),
//                            NSLocalizedString(@"UpdateMemberInfo", nil),
//                            NSLocalizedString(@"UpdateAlarms", nil),
//                            NSLocalizedString(@"UploadHeadimage", nil),
//                            NSLocalizedString(@"Logout", nil),
//                            ];
//    self.serveritemtag = @[[NSNumber numberWithInt:FuncRegister],
//                           [NSNumber numberWithInt:FuncLogin],
//                           [NSNumber numberWithInt:FuncForgetPassword],
//                           [NSNumber numberWithInt:FuncChangePassword],
//                           [NSNumber numberWithInt:FuncGetMemberInfo],
//                           [NSNumber numberWithInt:FuncUpdateMemberInfo],
//                           [NSNumber numberWithInt:FuncUpdateAlarms],
//                           [NSNumber numberWithInt:FuncUploadHeadimage],
//                           [NSNumber numberWithInt:FuncLogout]
//                           ];
    self.deviceitemname = @[NSLocalizedString(@"ConnectDefaultDevice", nil),
                            NSLocalizedString(@"ScanDevice", nil),
                            NSLocalizedString(@"CurrentDevice", nil),
                            NSLocalizedString(@"ReadMacid", nil),
                            NSLocalizedString(@"ReadFirmware", nil),
                            NSLocalizedString(@"GetDeviceMode", nil),
                            NSLocalizedString(@"SetDeviceTime", nil),
                            NSLocalizedString(@"HistoryData", nil),
                            NSLocalizedString(@"SetParameter", nil),
                            NSLocalizedString(@"SetTarget", nil),
                            NSLocalizedString(@"GetAlarmInfo", nil),
                            NSLocalizedString(@"SetAlarmInfo", nil),
                            NSLocalizedString(@"GetMedicineInfo", nil),
                            NSLocalizedString(@"SetMedicineInfo", nil),
                            NSLocalizedString(@"GetSedentaryInfo", nil),
                            NSLocalizedString(@"SetSedentaryInfo", nil),
                            NSLocalizedString(@"GetIntervalTimerInfo", nil),
                            NSLocalizedString(@"SetIntervalTimerInfo", nil),
                            NSLocalizedString(@"GetChimeInfo", nil),
                            NSLocalizedString(@"SetChimeInfo", nil),
                            NSLocalizedString(@"GetKeytone_VibrationInfo", nil),
                            NSLocalizedString(@"SetKeytone_VibrationInfo", nil),
                            NSLocalizedString(@"GetCameraShutterInfo", nil),
                            NSLocalizedString(@"SetCameraShutterInfo", nil),
                            NSLocalizedString(@"GetPhoneFinderInfo", nil),
                            NSLocalizedString(@"SetPhoneFinderInfo", nil),
                            NSLocalizedString(@"GetNTMInfo", nil),
                            NSLocalizedString(@"SetNTMInfo", nil),
                            NSLocalizedString(@"GetNTTInfo", nil),
                            NSLocalizedString(@"SetNTTInfo", nil),
                            NSLocalizedString(@"SendPair", nil),
                            NSLocalizedString(@"IntoOTA", nil)
                            ];
    self.deviceitemtag = @[[NSNumber numberWithInt:FuncConnectDefaultDevice],
                           [NSNumber numberWithInt:FuncScanDevice],
                           [NSNumber numberWithInt:FuncCurrentDevice],
                           [NSNumber numberWithInt:FuncGetMacid],
                           [NSNumber numberWithInt:FuncGetFirmware],
                           [NSNumber numberWithInt:FuncGetDeviceMode],
                           [NSNumber numberWithInt:FuncSetDate],
                           [NSNumber numberWithInt:FuncHistoryData],
                           [NSNumber numberWithInt:FuncSetParameter],
                           [NSNumber numberWithInt:FuncSetTarget],
                           [NSNumber numberWithInt:FuncGetAlarm],
                           [NSNumber numberWithInt:FuncSetAlarm],
                           [NSNumber numberWithInt:FuncGetTmr],
                           [NSNumber numberWithInt:FuncSetTmr],
                           [NSNumber numberWithInt:FuncGetIA],
                           [NSNumber numberWithInt:FuncSetIA],
                           [NSNumber numberWithInt:FuncGetInt],
                           [NSNumber numberWithInt:FuncSetInt],
                           [NSNumber numberWithInt:FuncGetChm],
                           [NSNumber numberWithInt:FuncSetChm],
                           [NSNumber numberWithInt:FuncGetAlrt],
                           [NSNumber numberWithInt:FuncSetAlrt],
                           [NSNumber numberWithInt:FuncGetCs],
                           [NSNumber numberWithInt:FuncSetCs],
                           [NSNumber numberWithInt:FuncGetPf],
                           [NSNumber numberWithInt:FuncSetPf],
                           [NSNumber numberWithInt:FuncGetNTM],
                           [NSNumber numberWithInt:FuncSetNTM],
                           [NSNumber numberWithInt:FuncGetNTT],
                           [NSNumber numberWithInt:FuncSetNTT],
                           [NSNumber numberWithInt:FuncSendANCSPair],
                           [NSNumber numberWithInt:FuncIntoOTA]
                           
                           ];
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
    
    self.tableView.tableHeaderView = ({
        UIView *view = [[UIView alloc] initWithFrame:CGRectMake(0, 0, 0, 145)];
        view.backgroundColor = [UIColor colorWithRed:222/255.0 green:222/255.0 blue:222/255.0 alpha:1.0];
        self.currentdevice = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, CGRectGetWidth(self.view.frame), 30)];
        self.currentdevice.textColor = [UIColor blackColor];
        self.currentdevice.adjustsFontSizeToFitWidth = YES;
        self.currentdevice.minimumScaleFactor = 0.5;
        self.currentdevice.textAlignment = NSTextAlignmentLeft;
        self.connectstatus = [[UILabel alloc] initWithFrame:CGRectMake(0, 35, CGRectGetWidth(self.view.frame), 30)];
        self.connectstatus.textColor = [UIColor blackColor];
        self.connectstatus.textAlignment = NSTextAlignmentLeft;
        self.connectstatus.adjustsFontSizeToFitWidth = YES;
        self.connectstatus.minimumScaleFactor = 0.5;
        self.currentmember = [[UILabel alloc] initWithFrame:CGRectMake(0, 70, CGRectGetWidth(self.view.frame), 30)];
        self.currentmember.textColor = [UIColor blackColor];
        self.currentmember.textAlignment = NSTextAlignmentLeft;
        self.currentmember.adjustsFontSizeToFitWidth = YES;
        self.currentmember.minimumScaleFactor = 0.5;
        self.currenttoken = [[UILabel alloc] initWithFrame:CGRectMake(0, 105, CGRectGetWidth(self.view.frame), 30)];
        self.currenttoken.textColor = [UIColor blackColor];
        self.currenttoken.textAlignment = NSTextAlignmentLeft;
        self.currenttoken.adjustsFontSizeToFitWidth = YES;
        self.currenttoken.minimumScaleFactor = 0.5;
       
        
        [view addSubview:self.currentdevice];
        [view addSubview:self.currentmember];
        [view addSubview:self.connectstatus];
        [view addSubview:self.currenttoken];
        view;
    });
}

-(void)refreshText{
    self.currentdevice.text = [NSString stringWithFormat:@"%@: %@",NSLocalizedString(@"Current Device", nil), [SXRSDKConfig getCurrentDeviceUUID]];
    self.connectstatus.text = [NSString stringWithFormat:@"%@: %@",NSLocalizedString(@"Connect Status", nil),[[SXR shareInstance] isConnect]?@"YES":@"NO"];
    self.currentmember.text = [NSString stringWithFormat:@"%@: %@",NSLocalizedString(@"Current Member", nil), [SXRSDKConfig getCurrentMemberID]];
    self.currenttoken.text = [NSString stringWithFormat:@"%@: %@",NSLocalizedString(@"Current Token", nil), [SXRSDKConfig getCurrentTokenID]];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
#warning Incomplete implementation, return the number of sections
    return 2;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
#warning Incomplete implementation, return the number of rows
    switch (section) {
        case 0:
            return [self.deviceitemname count];
            break;
        case 1:
            return [self.serveritemname count];
        default:
            break;
    }
    return 0;
}
-(NSString*)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section{
    switch (section) {
        case 0:
            return NSLocalizedString(@"Device Function List", nil);
            break;
        case 1:
            return NSLocalizedString(@"Server Function List", nil);
            break;
            
        default:
            break;
    }
    return @"";
}


- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"simplecell"];
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"simplecell"];
    }
    
    cell.textLabel.textColor = [UIColor blackColor];
    switch (indexPath.section) {
        case 0:
            cell.textLabel.text = [self.deviceitemname objectAtIndex:indexPath.row];
            cell.tag = [[self.deviceitemtag objectAtIndex:indexPath.row] intValue];
            break;
        case 1:
            cell.textLabel.text = [self.serveritemname objectAtIndex:indexPath.row];
            cell.tag = [[self.serveritemtag objectAtIndex:indexPath.row] intValue];
            break;
            
        default:
            break;
    }
    return cell;
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath{
    UITableViewCell* cell = [tableView cellForRowAtIndexPath:indexPath];
    switch (cell.tag) {
        case FuncRegister:{
            [self performSegueWithIdentifier:@"register" sender:nil];
        }
            break;
        case FuncLogin:{
            [self performSegueWithIdentifier:@"login" sender:nil];
        }
            break;
        case FuncForgetPassword:{
            [self performSegueWithIdentifier:@"forgetpassword" sender:nil];
        }
            break;
        case FuncChangePassword:{
            [self performSegueWithIdentifier:@"changepassword" sender:nil];
        }
            break;
        case FuncGetMemberInfo:{
            [self performSegueWithIdentifier:@"memberinfo" sender:nil];
        }
            break;
        case FuncUpdateMemberInfo:{
            [self performSegueWithIdentifier:@"memberinfo" sender:nil];
        }
            break;
        case FuncUpdateAlarms:{
            [self performSegueWithIdentifier:@"memberinfo" sender:nil];
        }
            break;
        case FuncUploadHeadimage:{
            [self performSegueWithIdentifier:@"memberinfo" sender:nil];
        }
            break;
        case FuncLogout:{
            [self performSegueWithIdentifier:@"login" sender:nil];
        }
            break;
        case FuncScanDevice:{
            [self performSegueWithIdentifier:@"scandevice" sender:nil];
//            ScanDeviceViewController* vc = [[ScanDeviceViewController alloc] init];
//            [self.navigationController presentViewController:vc animated:YES completion:nil];
//            [self presentViewController:vc animated:YES completion:nil];
        }
            break;
        case FuncHistoryData:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_SYNCSAVEDSUMMARY withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_SYNCSAVEDSTEPDATA withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_CLEARSAVEDSTEPDATA withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_SAVE_TO_FLASH withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_SYNCTODAYSUMMARY withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_SYNCTODAYSTEPDATA withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_CLEARTODAYSTEPDATA withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_CLEAR_TODAY_IN_RAM withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_READ_DEVICE_MODE withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_SYNCALLSLEEPDATA withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_CLEARALLSLEEPDATA withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_SYNCALLHEARTRATEDATA withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_CLEARALLHEARTRATEDATA withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];


        }
            break;
        case FuncSetParameter:{
            NSDictionary* param = @{
                                    CHOMP_PARAM_UNIT:[NSNumber numberWithInt:MEASURE_UNIT_METRIX],
                                    CHOMP_PARAM_HEIGHT:[NSNumber numberWithInt:180],
                                    CHOMP_PARAM_WEIGHT:[NSNumber numberWithInt:180],
                                    CHOMP_PARAM_STRIDE:[NSNumber numberWithInt:20]
                                    };
            
            [[SXR shareInstance] AddCommand:CMD_CHOMP_SETPARAM withParam:param toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
        }
            break;
        case FuncConnectDefaultDevice:{
            [[SXR shareInstance] connectDefaultDevice];
        }
            break;
        case FuncSetDate:{
//            [SXRService SetTime:nil];
            [[SXR shareInstance] AddCommand:CMD_CHOMP_SET_DATETIME withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];

        }
            break;
        case FuncCurrentDevice:{
            [self performSegueWithIdentifier:@"deviceinfo" sender:nil];
        }
            break;
        case FuncGetMacid:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_READ_ADDR withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
        }
            break;
        case FuncGetFirmware:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_READ_FIRMWARE withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetDeviceMode:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_READ_DEVICE_MODE withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetAlarm:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_ALARM_GET withParam:@{CHOMP_PARAM_ID:@1} toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetTmr:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_TMR_GET withParam:@{CHOMP_PARAM_ID:@1} toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetIA:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_IA_GET withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetInt:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_INT_GET withParam:@{CHOMP_PARAM_ID:@1} toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetCs:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_CS_GET withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncSetCs:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_CS_SET withParam:@{CHOMP_PARAM_ENABLE:@1} toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetPf:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_PF_GET withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncSetPf:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_PF_SET withParam:@{CHOMP_PARAM_ENABLE:@1} toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetChm:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_CHM_GET withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetAlrt:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_ALRT_GET withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetNTM:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_NTM_GET withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncGetNTT:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_NTT_GET withParam:@{CHOMP_PARAM_ID:@1} toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncSetStep:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_STEPS withParam:@{CHOMP_PARAM_STEP:@1234} toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncSendANCSPair:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_PAIR withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
        case FuncIntoOTA:{
            [[SXR shareInstance] AddCommand:CMD_CHOMP_INTO_OTA withParam:nil toCharacteristicKey:CH_UUID_CHOMP_NODIC_WRITE HighPriority:NO waitResponse:YES];
            
        }
            break;
            
        default:{
            UIAlertController* alert = [UIAlertController alertControllerWithTitle:nil  message:@"not finish in Demo yet, read the document" preferredStyle:UIAlertControllerStyleAlert];
            [alert showViewController:self sender:self];
        }
            break;
    }
}
//- (UIViewController *)getPresentedViewController
//{
//    UIViewController *appRootVC = [UIApplication sharedApplication].keyWindow.rootViewController;
//    UIViewController *topVC = appRootVC;
//    if (topVC.presentedViewController) {
//        topVC = topVC.presentedViewController;
//    }
//    
//    return topVC;
//}
//-(void)openCamera{
//    NSLog(@"leftMenu::TakePhoto");
//    AVAuthorizationStatus authStatus = [AVCaptureDevice authorizationStatusForMediaType:AVMediaTypeVideo];
//    if(authStatus == AVAuthorizationStatusAuthorized) {
//        // do your logic
//        UIViewController* contentview = [self getPresentedViewController];
//        if ([contentview isKindOfClass:[SXRPhoto2ViewController class]] == NO){
//            //        if (self.pickcontrol == nil){
//            dispatch_async(dispatch_get_main_queue(), ^{
//                SXRPhoto2ViewController* vc = [[SXRPhoto2ViewController alloc] init];
//                [self presentViewController:vc animated:YES completion:nil];
//                
//            });
//        }else{
//        }
//        
//    }else if(authStatus == AVAuthorizationStatusNotDetermined){
//        [AVCaptureDevice requestAccessForMediaType:AVMediaTypeVideo completionHandler:^(BOOL granted) {
//            if(granted){
//                UIViewController* contentview = [self getPresentedViewController];
//                if ([contentview isKindOfClass:[SXRPhoto2ViewController class]] == NO){
//                    dispatch_async(dispatch_get_main_queue(), ^{
//                        SXRPhoto2ViewController* vc = [[SXRPhoto2ViewController alloc] init];
//                        [self presentViewController:vc animated:YES completion:nil];
//                        
//                    });
//                }
//                
//            } else {
//                NSLog(@"Not granted access");
//            }
//        }];
//        
//    }else{
//        UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Camera Authorization Denied!", nil) preferredStyle:UIAlertControllerStyleAlert];
//        [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
//            
//        }]];
//        [self presentViewController:ac animated:YES completion:nil];
//        // impossible, unknown authorization status
//    }
//
//}

/*
// Override to support conditional editing of the table view.
- (BOOL)tableView:(UITableView *)tableView canEditRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the specified item to be editable.
    return YES;
}
*/

/*
// Override to support editing the table view.
- (void)tableView:(UITableView *)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath *)indexPath {
    if (editingStyle == UITableViewCellEditingStyleDelete) {
        // Delete the row from the data source
        [tableView deleteRowsAtIndexPaths:@[indexPath] withRowAnimation:UITableViewRowAnimationFade];
    } else if (editingStyle == UITableViewCellEditingStyleInsert) {
        // Create a new instance of the appropriate class, insert it into the array, and add a new row to the table view
    }   
}
*/

/*
// Override to support rearranging the table view.
- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)fromIndexPath toIndexPath:(NSIndexPath *)toIndexPath {
}
*/

/*
// Override to support conditional rearranging of the table view.
- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath {
    // Return NO if you do not want the item to be re-orderable.
    return YES;
}
*/

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/
//-(void)onGetCurrentData:(NSNotification*)notify{
//    NSDictionary* userinfo = notify.userInfo;
//    if (userinfo) {
//        int steps = [[userinfo objectForKey:CZJK_NOTIFY_PARAM_CURRENT_STEPS] intValue];
//        int cal = [[userinfo objectForKey:CZJK_NOTIFY_PARAM_CURRENT_CAL] intValue];
//        int dist = [[userinfo objectForKey:CZJK_NOTIFY_PARAM_CURRENT_DIST] intValue];
//        
//        UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:[NSString stringWithFormat:@"%@\nStep = %d\nCalories=%d\nDistance=%d",NSLocalizedString(@"Read Current Data OK.", nil),steps,cal,dist] preferredStyle:UIAlertControllerStyleAlert];
//        [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
//            
//        }]];
//        [self presentViewController:ac animated:YES completion:nil];
//         
//        
//        
//    }
//}

-(void)onCmdFinish:(NSNotification*)notify{
    NSDictionary* dict = notify.userInfo;
    int substate = [[dict objectForKey:NOTIFY_KEY_SUBSTATE] intValue];
    bool isok = [[dict objectForKey:NOTIFY_KEY_ISOK] boolValue];
    switch (substate) {
        case SUB_STATE_JY_WAIT_READTIME_RSP:
            if (isok) {
                int year = [[dict objectForKey:JY_NOTIFY_PARAM_YEAR] intValue];
                int month = [[dict objectForKey:JY_NOTIFY_PARAM_MONTH] intValue];
                int day = [[dict objectForKey:JY_NOTIFY_PARAM_DAY] intValue];
                int hour = [[dict objectForKey:JY_NOTIFY_PARAM_HOUR] intValue];
                int minute = [[dict objectForKey:JY_NOTIFY_PARAM_MINUTE] intValue];
                int second = [[dict objectForKey:JY_NOTIFY_PARAM_SECOND] intValue];
                int weekday = [[dict objectForKey:JY_NOTIFY_PARAM_WEEKDAY] intValue];
                
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:[NSString stringWithFormat:@"%@\nyear=%d\nmonth=%d\nday=%d\nhour=%d\nminute=%d\nsecond=%d\nweekday=%d",NSLocalizedString(@"Read Time OK", nil),year,month,day,hour,minute,second,weekday] preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }else{
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Set Time Error", nil) preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }
            break;

        case SUB_STATE_JY_WAIT_SETTIME_RSP:
            if (isok) {
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Set Time OK", nil) preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];

            }else{
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Set Time Error", nil) preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];

            }
            break;
        case SUB_STATE_JY_WAIT_SETPARAM_RSP:
            if (isok) {
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Set Device Param OK", nil) preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }else{
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Set Device Param Error", nil) preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }
            break;
        case SUB_STATE_CZJK_WAIT_SETPERSONINFO_RSP:
            if (isok) {
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Set PersonInfo  OK", nil) preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }else{
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Set PersonInfo Error", nil) preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }
            break;
         case SUB_STATE_CZJK_WAIT_GETMAC_RSP:
            if (isok) {
                NSString* macidstr = [dict objectForKey:NOTIFY_KEY_MACID];
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:[NSString stringWithFormat:@"%@\nMacid=%@",NSLocalizedString(@"Read Macid OK", nil), macidstr] preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }else{
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Set Sedentary Alarm Error", nil) preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }
            break;
        case SUB_STATE_CZJK_WAIT_GETFW_RSP:
            if (isok) {
                NSString* firmware = [dict objectForKey:NOTIFY_KEY_FIRMWARE];
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:[NSString stringWithFormat:@"%@\nFirmWare Version =%@",NSLocalizedString(@"Read FirmWare Version OK", nil), firmware] preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }else{
                UIAlertController* ac = [UIAlertController alertControllerWithTitle:nil message:NSLocalizedString(@"Set Sedentary Alarm Error", nil) preferredStyle:UIAlertControllerStyleAlert];
                [ac addAction:[UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDestructive handler:^(UIAlertAction * _Nonnull action) {
                    
                }]];
                [self presentViewController:ac animated:YES completion:nil];
                
            }
            break;

          
        default:
            break;
    }
}
@end
