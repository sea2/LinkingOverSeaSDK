//
//  LEApplePayManager.h
//  LinKingEnSDK
//
//  Created by leon on 2020/9/8.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>
@class LEGoods;
typedef enum {
   PurchSuccess = 0,       // 购买成功
   PurchFailed = 1,        // 购买失败
   PurchCancle = 2,        // 取消购买
   PurchVerFailed = 3,     // 订单校验失败
   PurchVerSuccess = 4,    // 订单校验成功
   PurchNotArrow = 5,      // 不允许内购
   PurchNoGoods = 6,       // 没有商品
   PurchRestoredGoods = 7, // 已经购买过该商品
   PurchServiceFail = 8, // 网络故障
   PurchReceiptInvalid = 9, // 支付票据无效
   PurchOrderNotExist = 10, // 支付订单不存在
   PurchOrderClosed = 11, // 支付订单已结束
   PurchOrderNoComplete = 12, // 支付订单未完成
   PurchAbnormalOrder = 13, // 异常订单
   PurchOrderFail = 14, // 下单失败
}PurchType;
NS_ASSUME_NONNULL_BEGIN
typedef void (^CompletionHandle)(PurchType type,NSError * _Nullable error);

@protocol LEApplePayManagerDelegate <NSObject>

@optional
/// 创建订单成功回调
- (void)storePayCreateOrderId:(NSString * _Nullable)orderId withError:(NSError *_Nullable)error;

@end

@interface LEApplePayManager : NSObject

@property (nonatomic, weak) id<LEApplePayManagerDelegate>delegate;

+ (instancetype)shared;
/**
 启动工具
 */
- (void)startManager;
/**
 结束工具
 */
- (void)stopManager;

/// 拉取所有商品信息
- (void)itemsListOnFinished:(void(^)(NSError * _Nullable error, NSArray*_Nullable products))complete;

//开始内购
- (void)statrtProductWithId:(NSString *)productId parames:(NSDictionary *)parames completeHandle:(CompletionHandle)handle;


// 新增内购
- (void)statrProductWithId:(NSString *)productId  parames:(NSDictionary *)parames rootViewController:(UIViewController *)viewController completeHandle:(CompletionHandle)handle;

- (void)statrtSubscribeProductWithId:(NSString *)productId parames:(NSDictionary *)parames completeHandle:(CompletionHandle)handle;

@end

NS_ASSUME_NONNULL_END
