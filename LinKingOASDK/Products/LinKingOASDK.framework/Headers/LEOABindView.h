//
//  LEOABindView.h
//  LinKingOASDK_Example
//
//  Created by leon on 2021/9/8.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEOABindView : UIView
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
