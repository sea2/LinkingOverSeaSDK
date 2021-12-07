//
//  LEWebViewController.h
//  LinKingOASDK
//
//  Created by leon on 2021/11/29.
//  Copyright © 2021 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEWebViewController : UIViewController
@property (nonatomic, copy) NSString * webURL;
@property (nonatomic, copy) NSString * productId;
@property (nonatomic, strong) NSDictionary *parames;
@property (nonatomic, copy) void(^payHandler)(NSInteger type);
@end

NS_ASSUME_NONNULL_END
