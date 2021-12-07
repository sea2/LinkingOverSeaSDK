//
//  LEApplePay.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/18.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class LKProduct;
typedef enum {
    SIAPPurchSuccess = 0,       // 购买成功
    SIAPPurchFailed = 1,        // 购买失败
    SIAPPurchCancle = 2,        // 取消购买
    SIAPPurchVerFailed = 3,     // 订单校验失败
    SIAPPurchVerSuccess = 4,    // 订单校验成功
    SIAPPurchNotArrow = 5,      // 不允许内购
    SIAPPurchNoGoods = 6,       // 没有商品
    SIAPPurchRestoredGoods = 7, // 已经购买过该商品
    SIAPPurchServiceFail = 8, // 接口错误
}SIAPPurchType;
@protocol LEApplePayDelegate <NSObject>
@optional

/// 创建订单成功回调

- (void)storePayCreateOrderId:(NSString * _Nullable)orderId withError:(NSError *_Nullable)error;

/// 支付成功回调
/// @param isSuccess isSuccess description
/// @param error error description
- (void)storePayFinishPay:(BOOL)isSuccess withError:(NSError *_Nullable)error;

/// 取消支付回调
- (void)storePayCancelPay;

@end
typedef void (^IAPCompletionHandle)(SIAPPurchType type,NSData * _Nullable  data);
@interface LEApplePay : NSObject
@property (nonatomic, weak) id <LEApplePayDelegate> delegate;

+ (instancetype)shared;
/// 拉取所有商品信息
- (void)requestProductDatasComplete:(void(^_Nullable)(NSError * _Nullable error, NSArray*_Nullable products,NSArray * _Nullable invalidProducts))complete;
//开始内购
- (void)startPurchWithID:(NSString *)purchID parames:(NSDictionary *)parames completeHandle:(IAPCompletionHandle)handle;
// 查询订阅
- (void)querysubscribeProduct:(NSString *)productId Complete:(void(^)(NSError *error, NSDictionary*results))complete;
-(void)setup;
-(void)destroy;
-(BOOL)canMakePayments;
@end

NS_ASSUME_NONNULL_END
