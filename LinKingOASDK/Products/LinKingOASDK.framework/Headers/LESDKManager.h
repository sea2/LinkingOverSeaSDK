//
//  LESDKManager.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/7.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>

@class LEOauthManager;
@class LEAdManager;
@class LEIronSourceAdManager;
@class LEFacebookAdManager;
@class LEPointManager;
@class LEApplePayManager;
@class LEFBShareManager;
@class LEUser;


NS_ASSUME_NONNULL_BEGIN

@interface LESDKManager : NSObject
@property (nonatomic, copy) void(^initializeSDKCallBack)(LESDKManager *manager,NSError *error);
@property (nonatomic, strong,readonly) LEOauthManager *oauthManager;
@property (nonatomic, strong,readonly) LEAdManager *adManager;
@property (nonatomic, strong,readonly) LEIronSourceAdManager *ironsAdManager;
@property (nonatomic, strong,readonly) LEFacebookAdManager *facebookAdManager;
@property (nonatomic, strong,readonly) LEPointManager *pointManager;
@property (nonatomic, strong,readonly) LEApplePayManager *payManager;
@property (nonatomic, strong,readonly) LEFBShareManager *shareManager;

+ (instancetype)shared;

/// 注册SDK
/// @param appId  平台分发的appId
/// @param secretkey 平台分发的key
/// @param complete 完成注册的回调
- (void)registLinKingSDKAppID:(NSString * _Nonnull)appId withSecretkey:(NSString * _Nonnull)secretkey cmoplete:(void(^_Nonnull)(LESDKManager *manager,NSError *error))complete;

/// 语言bundle，preferredLanguage变化时languageBundle会变化
/// 可通过手动设置bundle，让选择器支持新的的语言（需要在设置preferredLanguage后设置languageBundle）。欢迎提交PR把语言文件提交上来~
@property (strong, nonatomic) NSBundle *_Nullable languageBundle;

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)applicationWillTerminate:(UIApplication *)application;
- (BOOL)application:(nonnull UIApplication *)application openURL:(nonnull NSURL *)url options:(nonnull NSDictionary<NSString *, id> *)options;
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts API_AVAILABLE(ios(13.0));
- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void(^)(NSArray<id<UIUserActivityRestoring>> * __nullable restorableObjects))restorationHandler;
@end

NS_ASSUME_NONNULL_END
