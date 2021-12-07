//
//  LEAFManager.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/16.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@protocol LEAFManagerDelegate <NSObject>
- (void)onConversionDataFail:(nonnull NSError *)error;
- (void)onConversionDataSuccess:(nonnull NSDictionary *)conversionInfo;
@optional
- (void)onAppOpenAttribution:(NSDictionary*) attributionData;
- (void)onAppOpenAttributionFailure:(NSError *)error;
@end
@interface LEAFManager : NSObject
@property (nonatomic, weak) id<LEAFManagerDelegate>delegate;
/// 实例
+ (instancetype)shared;
/// 注册AF
- (void)registAppsFlyer;
// 加载AF
- (void)loadData;

/// 注册AF
/// @param devKey 平台key
/// @param appleAppID 苹果应用Id
- (void)registAppsFlyerDevKey:(NSString * _Nonnull)devKey appleAppID:(NSString * _Nonnull)appleAppID isDebug:(BOOL)isDebug;

/// 用于追踪游戏等级事件
/// @param level 等级
/// @param score 得分
- (void)afLogLevel:(NSInteger)level score:(CGFloat)score;
/// 用于追踪付款信息配置状态
/// @param success 是否成功
- (void)afLogAddPaymentInfoSuccess:(BOOL)success;
/// 用于追踪付款信息配置状态
/// @param price 价格
/// @param type 商品类型
/// @param currency 货币类型
/// @param goodsId 商品id
/// @param content 商品描述
/// @param quantity 商品数量
- (void)afLogAddGoodsCartWithPrice:(NSNumber *)price goodsType:(NSString *)type currency:(NSString *)currency goodsId:(NSString *)goodsId content:(NSString *)content quantity:(int)quantity;

/// 完成购买
/// @param price     购买产生的收入
/// @param orderId 购买生成的订单ID
/// @param receiptId 买家生成的收据ID
- (void)afLogCompletedPurchase:(NSNumber *)price orderId:(NSString *)orderId receiptId:(NSString *)receiptId;

/// 用于追踪特定商品的“添加到愿望清单”事件
/// @param price 价格
/// @param type 类型
/// @param goodsId 物品id
/// @param content 详细描述
/// @param currency 货币类型
/// @param quantity 数量
- (void)afLogAddWishlistWithPrice:(NSNumber *)price goodsType:(NSString *)type goodsId:(NSString *)goodsId content:(NSString *)content currency:(NSString *)currency quantity:(int)quantity;

/// 用于追踪用户注册方式
/// @param style 注册方式
- (void)afLogCompleteRegistrationStyle:(NSString *)style;

/// 用于追踪教程完成情况
/// @param success 是否成功
/// @param userId 用户id
/// @param desc 描述
- (void)afLogTutorialCompletionWithSuccess:(BOOL)success userId:(NSString *)userId desc:(NSString *)desc;

/// 用于追踪结账事件
/// @param price 价格
/// @param contentType 商品类型
/// @param contentId 商品id
/// @param quantity 商品数量
/// @param payment 支付方式（信息）
/// @param currency 货币类型
- (void)afLogInitiatedCheckoutWithPrice:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content  quantity:(int)quantity payment:(NSString *)payment currency:(NSString *)currency;

/// 用于追踪购买事件（及相关收入）
/// @param price 价格
/// @param type 订单了类型
/// @param currency 货币类型 USD
/// @param orderId 订单Id
/// @param desc 描述
/// @param quantity 数量
- (void)afLogPurchaseWithPrice:(NSNumber *)price type:(NSString *)type currency:(NSString *)currency orderId:(NSString *)orderId desc:(NSString *)desc quantity:(int)quantity;

/// 用于追踪付费订阅购买
/// @param price 价格
- (void)afLogSubscribeWithPrice:(NSNumber *)price;

/// 用于追踪产品的免费试用的开始
/// @param price 价格
/// @param currency 货币类型
- (void)afLogStartTrialWithPrice:(NSNumber *)price currency:(NSString *)currency;

/// 用于追踪应用/商品评级事件
/// @param rating 当前评级
/// @param contentType 评级类型
/// @param contentId 评级id
/// @param content 评级内容
/// @param maxRating 最大评级
- (void)afLogWithRating:(CGFloat)rating contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content maxRating:(CGFloat)maxRating;

/// 用于追踪搜索事件
/// @param contentType 搜索类别
/// @param searchWords 搜索关键字
/// @param success 是否搜索成功
- (void)afLogSearchWithContentType:(NSString *)contentType searchWords:(NSString *)searchWords success:(BOOL)success;

/// 用于追踪积分花费事件
/// @param price 价格
/// @param contentType 事件类型
/// @param contentId 事件id
/// @param content 事件内容
- (void)afLogSpentCreditsWithPrice:(NSNumber *)price ContentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content;

/// 用于追踪成就解锁事件
/// @param desc 详细描述
- (void)afLogAchievementUnlockedWithDesc:(NSString *)desc;

/// 用于追踪内容视图事件
/// @param price 价格
/// @param contentType 内容类型
/// @param contentId 内容id
/// @param content 内容描述
/// @param currency 货币类型
- (void)afLogContentViewWithPrice:(NSNumber *)price contentType:(NSString *)contentType contentId:(NSString *)contentId content:(NSString *)content currency:(NSString *)currency;

/// 用于追踪列表视图事件
/// @param contentType 列表视图类别
/// @param contentList 列表集合
- (void)afLogListViewWithContentType:(NSString *)contentType contentList:(NSArray *)contentList;

///  用于追踪应用中展示广告的点击次数
- (void)afLogAdclickWithAdStyle:(NSString *)style;

/// 用于追踪应用中展示广告的展示次数
- (void)afLogAdView:(NSString *)style;

/// 用于追踪分享事件
/// @param desc 分享描述
- (void)afLogShareDesc:(NSString*)desc;

/// 用于追踪邀请（社交）事件
- (void)afLogInvite;

///  用于追踪用户的重参与事件
- (void)afLogActive;

/// 用于追踪用户登录事件
- (void)afLogLoginStyle:(NSString *)style;

/// 从推送通知打开 用于追踪从推送通知打开应用的事件
- (void)afLogOpenedFromPushNotification;

/// 用于追踪更新事件
/// @param contentId 更新事件Id
- (void)afLogWithContentId:(NSString *)contentId;


/// 应用内事件
/// @param eventName 事件名
/// @param values 详细信息
- (void)afLogTrackEvent:(NSString *)eventName withValues:(NSDictionary *)values;


/// 设置用户id
/// @param userId <#userId description#>
- (void)afLogTrackSetCustomerUserID:(NSString *)userId;

/// 获取AppsFlyer ID
- (NSString *)afLogTrackAppsFlyerUID;
@end

NS_ASSUME_NONNULL_END
