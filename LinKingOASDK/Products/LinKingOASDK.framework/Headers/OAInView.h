
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OAInView : UIView
@property (nonatomic,copy)void(^sureCallBack)(BOOL isSelect);
@property (weak, nonatomic) IBOutlet UIView *view_content;
@property (weak, nonatomic) IBOutlet UIButton *button_box;
@property (weak, nonatomic) IBOutlet UIButton *button_ok;
@property (weak, nonatomic) IBOutlet UILabel *label_title;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_close;
@property (weak, nonatomic) IBOutlet UILabel *lable_agree;

+ (instancetype)instanceUseAgreementView;
@end

NS_ASSUME_NONNULL_END
