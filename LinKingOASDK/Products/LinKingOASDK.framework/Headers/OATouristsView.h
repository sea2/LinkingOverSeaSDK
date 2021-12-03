
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OATouristsView : UIView
@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property(nonatomic, copy)void(^changeAccountCallBack)(void);
@property(nonatomic, copy)void(^bindingAccountCallBack)(void);
@property(nonatomic, copy)void(^logoutCallBack)(void);
@property (weak, nonatomic) IBOutlet UILabel *label_title;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_close;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UILabel *label_id;
@property (weak, nonatomic) IBOutlet UIButton *button_change;
@property (weak, nonatomic) IBOutlet UIButton *button_binding;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_rightArrow;
@property (weak, nonatomic) IBOutlet UILabel *label_or;
@property (weak, nonatomic) IBOutlet UIButton *button_logout;
@property (weak, nonatomic) IBOutlet UILabel *labe_Account_Tip;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layout_account_tip_height;

+ (instancetype)instanceUserCenterView;
@end

NS_ASSUME_NONNULL_END
