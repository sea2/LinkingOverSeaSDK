//
//  LENetWork.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/10.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>
@class AFHTTPSessionManager;
NS_ASSUME_NONNULL_BEGIN

@interface LENetWork : NSObject
+(AFHTTPSessionManager *)sharedHttpSessionManager;
+ (void)getWithURLString:(NSString *)urlString success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;

+ (void)getFromPhpithURLString:(NSString *)urlString success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;

// 参数不做处理
+ (void)postWithURLString:(NSString *)urlString parameters:(NSDictionary *)parameters success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;

// 处理参数并且处理请求头
+ (void)postWithURLString:(NSString *)urlString parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;

/// 上传多张图片携带其他参数
/// @param urlString 上传路径
/// @param images 图片集合
/// @param parameters 其他参数
/// @param headerField 请求头参数
/// @param complete 完成后的回调
+ (void)uploadWithURLString:(NSString *)urlString withImages:(NSArray<UIImage *>*)images parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField complete:(void(^)(NSError *error))complete;


/// json 方式请求
/// @param urlString urlString description
/// @param parameters parameters description
/// @param headerField headerField description
/// @param success success description
/// @param failure failure description
+ (void)postNormalWithURLString:(NSString *)urlString parameters:(NSDictionary *)parameters HTTPHeaderField:(NSDictionary *)headerField success:(void(^)(id responseObject))success failure:(void(^)(NSError *error))failure;
@end

NS_ASSUME_NONNULL_END
