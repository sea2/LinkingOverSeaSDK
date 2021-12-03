
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAYclePayView : UIView
@property (weak, nonatomic) IBOutlet UILabel *label_TipOne;
@property (weak, nonatomic) IBOutlet UILabel *label_TipTwo;
@property (weak, nonatomic) IBOutlet UIButton *button_Mailbox;
@property (weak, nonatomic) IBOutlet UIButton *button_Apple;
@property (weak, nonatomic) IBOutlet UIButton *button_Facebook;
@property (nonatomic, copy) void (^bindStyleAction)(UIButton *sender);
@property (nonatomic, copy) void (^closeAlterViewEvent)(UIButton *sender);
@property (nonatomic, copy) void (^gotoBackAlterViewEvent)(UIButton *sender);
+ (instancetype)instanceOABindView;
- (void)setContextView:(UIView *)contextView;
@end

NS_ASSUME_NONNULL_END
