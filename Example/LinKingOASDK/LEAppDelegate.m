//
//  LEAppDelegate.m
//  LinKingOASDK
//
//  Created by dml1630@163.com on 07/16/2021.
//  Copyright (c) 2021 dml1630@163.com. All rights reserved.
//

#import "LEAppDelegate.h"
#import <LinKingOASDK/LinKingOASDK.h>

@implementation LEAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    [LKLog setLogLevel:LKLogLevelVerbose];
    [LEThirdLog setThirdLog:LEThirdLogLevelOn];
    // 注册AF
    [[LEAFManager shared] registAppsFlyerDevKey:@"Rz7VqcsJLyJeofrrdNMQgg" appleAppID:@"id1556813676" isDebug:YES];
    [[LESDKManager shared] application:application didFinishLaunchingWithOptions:launchOptions];
    /// 注册SDK（appid&key由零境提供）
    [[LESDKManager shared] registLinKingSDKAppID:@"xxyzapp_ios" withSecretkey:@"a8c46799d6" cmoplete:^(LESDKManager * _Nonnull manager, NSError * _Nonnull error) {
        // 加载启动
    }];
    return YES;
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    
    [[LESDKManager shared] applicationWillTerminate:application];
}

- (BOOL)application:(nonnull UIApplication *)application openURL:(nonnull NSURL *)url options:(nonnull NSDictionary<NSString *, id> *)options{
    
    return [[LESDKManager shared] application:application openURL:url options:options];
}
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation{
    
    return [[LESDKManager shared] application:application openURL:url sourceApplication:sourceApplication annotation:annotation];
    
}
- (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler{
    
    return [[LESDKManager shared] application:application didReceiveRemoteNotification:userInfo fetchCompletionHandler:completionHandler];
}
- (void)scene:(UIScene *)scene openURLContexts:(NSSet<UIOpenURLContext *> *)URLContexts API_AVAILABLE(ios(13.0)){
    
    [[LESDKManager shared] scene:scene openURLContexts:URLContexts];
}
- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void(^)(NSArray<id<UIUserActivityRestoring>> * __nullable restorableObjects))restorationHandler{
    
    return [[LESDKManager shared] application:application continueUserActivity:userActivity restorationHandler:restorationHandler];
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    [[LESDKManager shared] applicationDidBecomeActive:application];
}

@end
