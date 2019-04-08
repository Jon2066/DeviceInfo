//
//  ViewController.m
//  deviceInformation
//
//  Created by Jonathan on 2019/4/3.
//  Copyright © 2019 JN. All rights reserved.
//

#import "ViewController.h"
#import "SYDeviceInformation.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    [self performSelector:@selector(showInf) withObject:nil afterDelay:5.0];

}

- (void)showInf
{
    SYDeviceInformation * inf = [SYDeviceInformation shareInstance];
    NSLog(@"systemVersion %@", SYSystemVersion);
    NSLog(@"systemName %@", SYSystemName);
    NSLog(@"appVersion %@", SYAppVersion);
    NSLog(@"deviceModel %@", inf.deviceModel);
    NSLog(@"deviceModelName %@", inf.deviceModelName);
    NSLog(@"cpuModel %@", inf.CPUModel);
    NSLog(@"cpuCount %lu", inf.CPUCount);
    NSLog(@"cpuUsage %f", inf.CPUUsage);
    NSLog(@"systemLaunchTime %@", inf.systemLaunchTime);
    NSLog(@"RAMSize %ld", inf.RAMSize);
    NSLog(@"totalMemory %lld", inf.totalMemory);
    NSLog(@"freeMemory %lld", inf.freeMemory);
    NSLog(@"usedMemory %lld", inf.usedMemory);
    NSLog(@"appDiskSize %@", inf.applicationUsingDiskSize);
    NSLog(@"totalDiskSpace %lf", inf.totalDiskSpace);
    NSLog(@"freeDiskSpace %lf", inf.freeDiskSpace);
    NSLog(@"batteryLevel %f", inf.batteryLevel);
    NSLog(@"carrierInfo %@", inf.carrierInfo);
    NSLog(@"network %@", inf.networkState);
    NSLog(@"ip %@", inf.IPAddress);
    NSLog(@"isUsingHotspot %d", inf.isUsingHotspot);
    
    [inf IODevice];
}


@end
