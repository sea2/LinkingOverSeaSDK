//
//  LEMorePayView.h
//  LinKingOASDK
//
//  Created by leon on 2021/11/25.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEMorePayView : UIView
@property (weak, nonatomic) IBOutlet UIButton *button_google;
@property (weak, nonatomic) IBOutlet UIButton *button_paypal;
//@property (weak, nonatomic) IBOutlet UIButton *button_close;
// 10 Google 20 paypal
@property (nonatomic, copy) void(^payMoreEvent)(NSInteger tag);
@property (nonatomic, copy) void(^closeViewEvent)(void);
+ (instancetype)instanceMorePayView;
@end

NS_ASSUME_NONNULL_END
