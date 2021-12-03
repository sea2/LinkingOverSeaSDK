
#import <UIKit/UIKit.h>

@class OACacheCountdown;
@class OAOk;
@class OAWork;
@class OAOodsYcle;
@class OAFloatOods;
@class OAOodsGray;
@class OACacheScroll;
@class OATopWith;


NS_ASSUME_NONNULL_BEGIN

@interface OAFailScroll : NSObject
@property (nonatomic, copy) void(^initializeSDKCallBack)(OAFailScroll *manager,NSError *error);
@property (nonatomic, strong,readonly) OACacheCountdown *oauthManager;
@property (nonatomic, strong,readonly) OAOk *adManager;
@property (nonatomic, strong,readonly) OAWork *ironsAdManager;
@property (nonatomic, strong,readonly) OAOodsYcle *facebookAdManager;
@property (nonatomic, strong,readonly) OAFloatOods *pointManager;
@property (nonatomic, strong,readonly) OAOodsGray *payManager;
@property (nonatomic, strong,readonly) OACacheScroll *shareManager;

+ (instancetype)shared;

- (void)registLinKingSDKAppID:(NSString * _Nonnull)appId withSecretkey:(NSString * _Nonnull)secretkey cmoplete:(void(^_Nonnull)(OAFailScroll *manager,NSError *error))complete;

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
