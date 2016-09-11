//
//  AppsManager.h
//  BatteryDoctor
//
//  Created by hj on 16/8/24.
//  Copyright © 2016年 hj. All rights reserved.
//
//  参考文章：
//  https://github.com/ChenYilong/iOS9AdaptationTips
//  5. iOS9 URL Scheme 适配_引入白名单概念

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AppStandardName) {
    app_WeChat,
    app_QQ,
    app_Weibo,
    app_Alipay,
    app_Facebook,
    app_Twitter,
    app_Instagram,
};

@interface AppsManager : NSObject

/* 根据枚举表判断该应用是否已安装 */
+ (BOOL)isInstalledApp:(AppStandardName)app;

/* 传递某些应用的URLScheme来判断它们是否已安装 */
+ (BOOL)isInstalledApps:(NSArray <NSString *> *)URLSchemes;

@end
