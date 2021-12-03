
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OALogoView : UIView

@property (weak, nonatomic) IBOutlet UIButton *faceBookBtn;
@property (weak, nonatomic) IBOutlet UIButton *appleBtn;

@property (nonatomic, copy) void(^closeAlterViewCallBack)(void);
@property (nonatomic, copy) void(^thirdBindingCallBack)(UIButton *sender);
@property (weak, nonatomic) IBOutlet UIView *contentView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layout_fb_top;
@property (weak, nonatomic) IBOutlet UIButton *button_fb;

+ (instancetype)instanceBindingView;
@property (weak, nonatomic) IBOutlet UILabel *label_info;

@property (weak, nonatomic) IBOutlet UIView *view_apple;


@end

NS_ASSUME_NONNULL_END
