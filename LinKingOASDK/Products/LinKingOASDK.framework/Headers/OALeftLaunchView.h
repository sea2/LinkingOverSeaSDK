
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface OALeftLaunchView : UIView

@property (nonatomic, copy) void(^closeAlterViewCallBack)(void);
@property (nonatomic, copy) void(^changeAccountCallBack)(void);
@property (nonatomic, copy) void(^logoutCallBack)(void);
@property (weak, nonatomic) IBOutlet UILabel *lable_title;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_close;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UILabel *label_id;
@property (weak, nonatomic) IBOutlet UIButton *button_change;
@property (weak, nonatomic) IBOutlet UIImageView *imageView_arrow;
@property (weak, nonatomic) IBOutlet UILabel *label_or;
@property (weak, nonatomic) IBOutlet UIView *view_content;
@property (weak, nonatomic) IBOutlet UIButton *button_logout;

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;

+ (instancetype)instanceAccountCenterView;

@end

NS_ASSUME_NONNULL_END
