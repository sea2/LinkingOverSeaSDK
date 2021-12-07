//
//  LELoginView.h
//  LinKingEnSDK
//
//  Created by leon on 2020/8/10.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LELoginView : UIView
+ (instancetype)instanceOauthView;
@property(nonatomic, copy)void(^closeAlterViewCallBack)(void);
@property(nonatomic, copy)void(^startLoginCallBack)(void);
@property(nonatomic, copy)void(^thirdLoginCallBack)(UIButton *sender);
@property(nonatomic, copy)void(^changeBoxCallBack)(UIButton *sender);
@property(nonatomic, copy)void(^useAgreemmentCallBack)(BOOL isAgreement,UIButton *sender);
@property (weak, nonatomic) IBOutlet UIImageView *imageView_close;
@property (weak, nonatomic) IBOutlet UIButton *button_close;
@property (weak, nonatomic) IBOutlet UIButton *button_box;
@property (weak, nonatomic) IBOutlet UILabel *label_or;
@property (weak, nonatomic) IBOutlet UILabel *label_oneTip;
@property (weak, nonatomic) IBOutlet UIButton *button_UserAgreement;
@property (weak, nonatomic) IBOutlet UIButton *button_PrivacyPolicy;
@property (weak, nonatomic) IBOutlet UIButton *button_fb_login;
@property (weak, nonatomic) IBOutlet UIView *view_apple;
@property (weak, nonatomic) IBOutlet UIButton *button_apple_login;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layout_fb_top;
@property (weak, nonatomic) IBOutlet UIButton *button_visitors_login;

- (void)setLESuperView:(UIView *)superView;
@end

NS_ASSUME_NONNULL_END
