
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OALogoutIgn : NSObject
+ (instancetype)shared;
- (void)loginAppleWithComplete:(void(^)(BOOL success))complete;
@property (nonatomic, copy) void (^didCompleteWithAuthorization)(NSInteger type,NSString * _Nullable user,NSString * _Nullable token,NSString * _Nullable code,NSString * _Nullable password);
@property (nonatomic, copy) void (^didCompleteWithError)(NSError *error);
@end

NS_ASSUME_NONNULL_END
