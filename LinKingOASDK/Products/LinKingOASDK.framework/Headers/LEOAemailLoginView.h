//
//  LEOAemailLoginView.h
//  LinKingOASDK_Example
//
//  Created by leon on 2021/9/8.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEOAemailLoginView : UIView
@property (weak, nonatomic) IBOutlet UILabel *label_bottom_Tip;
@property (weak, nonatomic) IBOutlet UILabel *label_Tip;
@property (weak, nonatomic) IBOutlet UITextField *textField_Email;
@property (weak, nonatomic) IBOutlet UITextField *textField_Password;
@property (weak, nonatomic) IBOutlet UIButton *button_Eye;
@property (weak, nonatomic) IBOutlet UIButton *button_Forget;
@property (weak, nonatomic) IBOutlet UIButton *button_Login;
@property (weak, nonatomic) IBOutlet UIButton *button_Register;
@property (nonatomic, copy) void (^closeAlterViewEvent)(UIButton *sender);
@property (nonatomic, copy) void (^gotoBackAlterViewEvent)(UIButton *sender);
@property (nonatomic, copy) void (^forgetPasswordEvent)(UIButton *sender);
@property (nonatomic, copy) void (^loginEmailEvent)(UIButton *sender, NSString *email, NSString* password);
@property (nonatomic, copy) void (^registerEmailEvent)(UIButton *sender);
+ (instancetype)instanceOAemailLoginView;
- (void)setContextView:(UIView *)contextView;
@end

NS_ASSUME_NONNULL_END
