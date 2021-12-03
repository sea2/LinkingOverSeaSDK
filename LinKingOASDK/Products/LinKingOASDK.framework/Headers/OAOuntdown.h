
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAOuntdown : NSObject
+ (instancetype)shared;
- (NSDictionary *)getAdConfInfo:(NSString *)key;
- (NSArray *)getAdConfInfos:(NSString *)key;
@end

NS_ASSUME_NONNULL_END
