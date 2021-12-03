

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OABlueModity : NSObject
+ (nonnull id)sharedSingletion;

- (void)scheduledCountDownWithKey:(nonnull NSString *)aKey timeInterval:(NSTimeInterval)timeInterval countingDown:(nonnull void (^)(NSTimeInterval leftTimeInterval))countingDown  finished:(nonnull void (^)(__unused NSTimeInterval finalTimeInterval))finished;

- (BOOL)coundownTaskExistWithKey:(nonnull NSString *)akey task:(NSOperation * _Nullable * _Nullable)task;


@end

NS_ASSUME_NONNULL_END
