//
//  LESignInFacebook.h
//  LinKingEnSDK
//
//  Created by MrDML on 2020/8/15.
//  Copyright © 2020 "". All rights reserved.
//

#import <UIKit/UIKit.h>
@class LEFacebookHelper;
@class FBSDKLoginManagerLoginResult;
NS_ASSUME_NONNULL_BEGIN

@interface LESignInFacebook : NSObject
+ (instancetype)shared;

- (void)loginRootViewController:(UIViewController * _Nonnull)viewController complete:(void(^_Nullable)(FBSDKLoginManagerLoginResult* _Nullable result, NSError * _Nonnull error))complete;

-(void)logOut;


@end

NS_ASSUME_NONNULL_END
