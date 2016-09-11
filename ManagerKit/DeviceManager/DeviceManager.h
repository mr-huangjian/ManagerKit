//
//  DeviceManager.h
//  BatteryDoctor
//
//  Created by hj on 16/8/24.
//  Copyright © 2016年 hj. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
#define isPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define isPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define isPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define isPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242,2208), [[UIScreen mainScreen] currentMode].size) : NO)
 */

#define screenW [UIScreen mainScreen].bounds.size.width
#define screenH [UIScreen mainScreen].bounds.size.height

#define isiPhone4  (screenH = 480)
#define isiPhone5  (screenH = 568)
#define isiPhone6  (screenH = 667)
#define isiPhone6P (screenH = 736)

typedef NS_ENUM(NSInteger, DeviceType) {
    DeviceType_Unknown          = 0,
    DeviceType_iPhone_4         = 1000,
    DeviceType_iPhone_4s        = 1001,
    DeviceType_iPhone_5         = 1002,
    DeviceType_iPhone_5c        = 1003,
    DeviceType_iPhone_5s        = 1004,
    DeviceType_iPhone_5se       = 1005,
    DeviceType_iPhone_6         = 1006,
    DeviceType_iPhone_6_plus    = 1007,
    DeviceType_iPhone_6s        = 1008,
    DeviceType_iPhone_6s_plus   = 1009,
};

@interface DeviceManager : NSObject

+ (DeviceType)currentPlatform;

+ (NSString *)fileSystemSize;
+ (NSString *)freeFileSystemSize;

+ (CGFloat)fileSystemSize_GBUnit;
+ (CGFloat)freeFileSystemSize_GBUnit;

+ (NSString *)fileSizeFormatter:(CGFloat)size;


@end
