
#import "OAGameplaceholdbg.h"

NS_ASSUME_NONNULL_BEGIN

@interface OASourceRder : OAGameplaceholdbg
+ (void)fetchSDKConfigComplete:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)checkUserInfoComplete:(void(^)(NSError *error))complete;
+ (void)fetchSDKConfigAppId:(NSString *)appId complete:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)checkUserInfoWithTime:(int)second complete:(void(^_Nullable)(NSDictionary *_Nullableresult,NSError *error))complete;

+ (void)fetchSDKConfigURLWithAppId:(NSString *)appId complete:(void(^_Nullable)(NSString * _Nullable url,NSError *_Nullable error))complete;
+ (void)fetchSDKConfigWithURL:(NSString *)url complete:(void(^_Nullable)(NSError *_Nullable error))complete;
@end

NS_ASSUME_NONNULL_END
