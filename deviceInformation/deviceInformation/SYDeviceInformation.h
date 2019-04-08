//
//  SYDeviceInfomation.h
//  ThirdPartFrameworks
//
//  Created by Jonathan on 2019/4/2.
//  Copyright © 2019 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define SYSystemName     [UIDevice currentDevice].systemName
#define SYSystemVersion  [UIDevice currentDevice].systemVersion
#define SYAppVersion     ([[NSBundle mainBundle] infoDictionary][@"CFBundleShortVersionString"])

@interface SYDeviceInformation : NSObject

+ (instancetype)shareInstance;

///设备型号 iPhone6,1 iPhone6,2
@property (nonatomic, readonly, strong) NSString *deviceModel;
/// 获取设备型号名称  iPhone6 iPadPro11inch
@property (nonatomic, readonly, strong) NSString *deviceModelName;
///CPU型号
@property (nonatomic, readonly, strong) NSString *CPUModel;
///CPU核心数
@property (nonatomic, readonly, assign) NSUInteger CPUCount;
///内存大小(M)
@property (nonatomic, readonly, assign) NSUInteger RAMSize;

///重启设备的时间点
- (NSString *)systemLaunchTime;

///获取CPU总的使用百分比
- (float)CPUUsage;

///获取总内存空间
- (int64_t)totalMemory;

///获取空闲的内存空间
- (int64_t)freeMemory;

///正在使用的内存空间
- (int64_t)usedMemory;

///获取本 App 所占磁盘空间
- (NSString *)applicationUsingDiskSize;

/// 获取磁盘总空间
- (double)totalDiskSpace;

///获取未使用的磁盘空间
- (double)freeDiskSpace;

/// 获取已使用的磁盘空间
- (double)usedDiskSpace;

///电池电量
- (float)batteryLevel;

///运营商信息
- (nonnull NSString *)carrierInfo;

///网络状态 WiFi、noConnection、WWAN
- (nonnull NSString *)networkState;

///ip地址
- (NSString *)IPAddress;

///是否在使用热点
- (BOOL)isUsingHotspot;

///获取当前输出设备 扬声器、音箱..
- (NSArray <NSString *>*)routeOutput;

///获取当前输入设备  内置麦克风..
- (NSArray <NSString *>*)routeInput;
@end

NS_ASSUME_NONNULL_END
