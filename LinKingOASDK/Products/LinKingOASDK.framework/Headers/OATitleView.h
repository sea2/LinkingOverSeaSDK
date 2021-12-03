
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OATitleView : UIView
+ (instancetype)instanceMatrixViewWithViewController:(UIViewController *)viewController;
- (void)setMatrixConfig:(NSDictionary *)matrixConfig withGroup:(NSInteger)group;
@property (nonatomic, copy) void (^didSelectItemAtIndex)(NSString *appid);
@end

NS_ASSUME_NONNULL_END
