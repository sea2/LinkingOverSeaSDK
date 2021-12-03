

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (LKCountDown)


- (void)startWithScheduledCountDownWithKey:(NSString *)keySting WithTime:(NSInteger)timeLine title:(NSString *)title countDownTitle:(NSString *)subTitle mainColor:(UIColor *)mColor countColor:(UIColor *)color;

- (void)startWithScheduledCountDownWithKey:(NSString *)keySting WithTime:(NSInteger)timeLine title:(NSString *)title countDownTitle:(NSString *)subTitle mainColor:(UIColor *)mColor countColor:(UIColor *)color complete:(void (^)(void))complete;
@end

NS_ASSUME_NONNULL_END
