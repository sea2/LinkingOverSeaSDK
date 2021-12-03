//
//  LEGlobalConf.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/10.
//  Copyright © 2020 "". All rights reserved.
//

#ifndef LEGlobalConf_h
#define LEGlobalConf_h
// 数据存入沙盒的key
#define SDKCONFKEY @"SDKCONF"
#define SYSTEMSDKKEY  @"SYSTEMSDK"
#define USERKEY    @"USER"

#define kScreen_LE_Width [UIScreen mainScreen].bounds.size.width
#define kScreen_LE_Height [UIScreen mainScreen].bounds.size.height
#define kScreen_LE_Size [UIScreen mainScreen].bounds.size

// 屏幕分辨率 resolution
#define kScreen_Resolution (SCREEN_WIDTH * SCREEN_HEIGHT * ([UIScreen mainScreen].scale))

// iPhone X系列判断
#define  kIS_iPhoneX (CGSizeEqualToSize(CGSizeMake(375.f, 812.f), [UIScreen mainScreen].bounds.size) || CGSizeEqualToSize(CGSizeMake(812.f, 375.f), [UIScreen mainScreen].bounds.size)  || CGSizeEqualToSize(CGSizeMake(414.f, 896.f), [UIScreen mainScreen].bounds.size) || CGSizeEqualToSize(CGSizeMake(896.f, 414.f), [UIScreen mainScreen].bounds.size))
// 状态栏高度
#define kStatusBarHeight (kIS_iPhoneX ? 44.f : 20.f)
// 导航栏高度
#define kNavBarHeight (44.f+kStatusBarHeight)
// 底部标签栏高度
#define kTabBarHeight (kIS_iPhoneX ? (49.f+34.f) : 49.f)
// 安全区域高度
#define kTabbarSafeBottomMargin (kIS_iPhoneX ? 34.f : 0.f)

#endif /* LEGlobalConf_h */
