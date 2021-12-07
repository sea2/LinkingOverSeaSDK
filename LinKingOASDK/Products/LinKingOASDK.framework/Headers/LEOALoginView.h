//
//  LEOALoginView.h
//  LinKingOASDK_Example
//
//  Created by leon on 2021/9/8.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEOALoginView : UIView
@property (weak, nonatomic) IBOutlet UILabel *label_Mail;
@property (weak, nonatomic) IBOutlet UILabel *label_Apple;
@property (weak, nonatomic) IBOutlet UILabel *label_Facebook;
@property (weak, nonatomic) IBOutlet UIView *view_Mail;
@property (weak, nonatomic) IBOutlet UIView *view_Apple;
@property (weak, nonatomic) IBOutlet UIView *view_Facebook;
@property (weak, nonatomic) IBOutlet UIButton *button_Mail;
@property (weak, nonatomic) IBOutlet UIButton *button_Apple;
@property (weak, nonatomic) IBOutlet UIButton *button_Facebook;
@property (weak, nonatomic) IBOutlet UIButton *button_Register;
@property (weak, nonatomic) IBOutlet UIButton *button_Tourist;
@property (weak, nonatomic) IBOutlet UIButton *button_CheckBox;
@property (weak, nonatomic) IBOutlet UIButton *button_UserAgreement;
@property (weak, nonatomic) IBOutlet UIButton *button_PrivacyPolicy;
@property (weak, nonatomic) IBOutlet UIView *view_LeftLine;
@property (weak, nonatomic) IBOutlet UIView *view_RightLine;
@property (weak, nonatomic) IBOutlet UILabel *label_or;
@property (weak, nonatomic) IBOutlet UILabel *label_Agree;

+ (instancetype)instanceOALoginView;
- (void)setLESuperView:(UIView *)superView;
@property (nonatomic, copy) void(^mailLoginEvent)(UIButton *sender);
@property (nonatomic, copy) void(^appleLoginEvent)(UIButton *sender);
@property (nonatomic, copy) void(^facebookLoginEvent)(UIButton *sender);
@property (nonatomic, copy) void(^googleLoginEvent)(UIButton *sender);
@property (nonatomic, copy) void(^registerEvent)(UIButton *sender);
@property (nonatomic, copy) void(^touristEvent)(UIButton *sender);
@property (nonatomic, copy) void(^checkboxEvent)(UIButton *sender);
@property(nonatomic, copy)void(^useAgreemmentCallBack)(BOOL isAgreement,UIButton *sender);
@property (nonatomic, copy) void (^closeAlterViewEvent)(UIButton *sender);
@end

NS_ASSUME_NONNULL_END
