//
//  LEVersion.h
//  LinKingEnSDK
//
//  Created by leon on 2020/9/18.
//  Copyright © 2020 "". All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEVersion : NSObject
/**
 *  打开APPStore在本应用 默认是不打开的
 */
@property (nonatomic, assign) BOOL openAPPStoreInsideAPP;

/**
 *  国家简写 列如 countryAbbreviation = @"cn"`,`countryAbbreviation = @"us" 通常情况下你可以不需要设置
 */
@property (nonatomic, copy) NSString *countryAbbreviation;
/**
 *  创建一个单例管理类
 */
+ (instancetype)shared;
/**
 *  检测版本信息.
 */
- (void)checkVersion;
/**
 *  检测版本 下次提示 本次前往更新
 */
- (void)checkVersionWithAlertTitle:(NSString *)alertTitle nextTimeTitle:(NSString *)nextTimeTitle confimTitle:(NSString * )confimTitle;
/**
 *  检测版本 下次提示 本次前往更新 提示版本标题
 */
- (void)checkVersionWithAlertTitle:(NSString *)alertTitle nextTimeTitle:(NSString *)nextTimeTitle confimTitle:(NSString *)confimTitle skipVersionTitle:(NSString *_Nullable)skipVersionTitle;



@end

NS_ASSUME_NONNULL_END
