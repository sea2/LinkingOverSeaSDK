
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LKCountdownTask : NSOperation
@property (copy, nonatomic) void (^countingDownBlcok)(NSTimeInterval timeInterval);
@property (copy, nonatomic) void (^finishedBlcok)(NSTimeInterval timeInterval);
@property (assign, nonatomic) NSTimeInterval leftTimeInterval;
@property (assign, nonatomic) UIBackgroundTaskIdentifier taskIdentifier;
@end

NS_ASSUME_NONNULL_END
