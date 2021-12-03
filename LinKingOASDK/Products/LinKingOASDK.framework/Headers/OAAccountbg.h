
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAAccountbg : NSObject
+ (void)save:(NSString *)service data:(id)data;
+ (id)load:(NSString *)service;
+ (void)deleteKeyData:(NSString *)service;
@end

NS_ASSUME_NONNULL_END
