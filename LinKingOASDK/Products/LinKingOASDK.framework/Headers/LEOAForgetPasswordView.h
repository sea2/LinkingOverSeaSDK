//
//  LEOAForgetPasswordView.h
//  LinKingOASDK_Example
//
//  Created by leon on 2021/9/8.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEOAForgetPasswordView : UIView
@property (weak, nonatomic) IBOutlet UILabel *label_TopTip;
@property (weak, nonatomic) IBOutlet UITextField *textField_Email;
@property (weak, nonatomic) IBOutlet UITextField *textField_Code;
@property (weak, nonatomic) IBOutlet UITextField *textField_Password;
@property (weak, nonatomic) IBOutlet UITextField *textField_SurePassword;
@property (weak, nonatomic) IBOutlet UIButton *button_GetCode;
@property (weak, nonatomic) IBOutlet UIButton *button_Reset;
@property (weak, nonatomic) IBOutlet UIButton *button_Eye;
@property (weak, nonatomic) IBOutlet UIButton *button_SureEye;
@property (nonatomic, copy) void (^closeAlterViewEvent)(UIButton *sender);
@property (nonatomic, copy) void (^gotoBackAlterViewEvent)(UIButton *sender);
@property (nonatomic, copy) void (^getVerificationCodeEvent)(UIButton *sender, NSString *email);
@property (nonatomic, copy) void (^resetEmailPasswordEvent)(UIButton *sender, NSString *email, NSString *code, NSString *password);
+ (instancetype)instanceOAForgetPasswordView;
- (void)setContextView:(UIView *)contextView;
@end

NS_ASSUME_NONNULL_END
