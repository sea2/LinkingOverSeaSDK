//
//  LEViewController.m
//  LinKingOASDK
//
//  Created by dml1630@163.com on 07/16/2021.
//  Copyright (c) 2021 dml1630@163.com. All rights reserved.
//

#import "LEViewController.h"
#import <LinKingOASDK/LinKingOASDK.h>
@interface LEViewController ()
<LEAdManagerDelegate,LEOauthManagerDelegate>
@property (weak, nonatomic) IBOutlet UITextView *textView;
@property (nonatomic, strong) LESDKManager *manager;
@end

@implementation LEViewController


- (void)viewDidLoad
{
    [super viewDidLoad];
    [LESDKManager shared].initializeSDKCallBack = ^(LESDKManager * _Nonnull manager, NSError * _Nonnull error) {
        self.manager = manager;
        
        if (!error) {
            [self login:manager];
        }
    };
}


- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [self.view endEditing:YES];
}

- (void)login:(LESDKManager *)manager{
    
    self.manager.oauthManager.delegate = self;
    self.manager.adManager.delegate = self;
    [self.manager.oauthManager login:self onFinished:^(LEUser * _Nonnull user, NSError * _Nonnull error) {
        NSLog(@"登录回调=====>%@",user.userId);
    }];
   
}
- (IBAction)logOutSDKAction:(id)sender {

    [self.manager.oauthManager logout];

    [self login:self.manager];
}

#pragma mark LEOauthManagerDelegate
- (void)logoutSDKCallBack{
    NSLog(@"==退出登录回调===");
    [self login:self.manager];
}

- (void)changeAccountCallBack{
    NSLog(@"==切换账号回调===");
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        [self login:self.manager];
    });
}

- (IBAction)showLoginAction:(id)sender {
//
//    [[LEOauthManager shared] showLoginAlterViewRootViewController:self withAgreement:YES];
}
- (IBAction)userCenterAction:(id)sender {
//    [[LEOauthManager shared] showUserCenterViewRootViewController:self];
   
}

- (IBAction)agreementAction:(id)sender {
    
//    [[LEOauthManager shared] showUseAgreementViewRootViewController:self];
}

- (IBAction)matrixAction:(id)sender {
//    [[LEOauthManager shared] showMatrixController:self];
    CGRect rect = CGRectMake(80, [UIScreen mainScreen].bounds.size.height - 200, 200, 160);
    [[LEOauthManager shared] showMatrixVieWithFrame:rect];
}
- (IBAction)hiddenMatrixAction:(id)sender {
    [[LEOauthManager shared] hiddenMatrixView];
}


- (IBAction)accountCenterAction:(id)sender {
//    [[LEOauthManager shared] showAccountCenterController:self];
    
}
- (IBAction)fansPageAction:(id)sender {
    
    [self.manager.shareManager showFacebookFansPage];
    
}
- (IBAction)enterGamePointAction:(id)sender {

//    [[LEPointManager shared] logEnterGame:@"1000" roleId:@"10010" roleName:@"白龙" enterGame:YES];
  
    [[LEPointManager shared] logRoleCreate:@"1000" roleId:@"2000" roleName:@"唐三"];
    //
}

- (IBAction)bindingAccountAction:(id)sender {


    
}
- (IBAction)payAction:(id)sender {



    self.textView.text = @"正在支付";
    

    [self.manager.payManager itemsListOnFinished:^(NSError * _Nullable error, NSArray * _Nullable products) {
        NSLog(@"-->%@",products);
        srand((unsigned)time(0));
        int num = rand() % 6;
        LEGoods *goods = products[num];
            NSDictionary *params = @{
                @"cp_order_no":[NSString stringWithFormat:@"%@%d",@"432432494238934829042", rand() % 1000],
                @"server_id":@"1",
                @"notify_url":@"xxx",
                @"extra":@"1",
                @"role_id":@"31231",
                @"product_id":goods.productId,
                @"amount":goods.amount,
                @"type":@"ios",
            };
        [self.manager.payManager statrtProductWithId:goods.productId parames:params completeHandle:^(PurchType type, NSError * _Nullable error) {
            NSLog(@"回调:error = %@",error);
            NSLog(@"回调:error = %ld",(long)error.code);
            NSString *info = nil;
            if (type == PurchSuccess) {
                
                NSLog(@"购买成功");
                info = @"购买成功";
                
            } else if (type == PurchFailed) {
                
                NSLog(@"购买失败");
                info = @"购买失败";
            } else if (type == PurchCancle) {
                
                NSLog(@"取消购买");
                info = @"取消购买";
            } else if (type == PurchVerFailed) {
                
                NSLog(@"订单校验失败");
                info = @"订单校验失败";
            } else if (type == PurchVerSuccess) {
                
                NSLog(@"订单校验成功");
                info = @"订单校验成功";
            } else if (type == PurchNotArrow) {
                
                NSLog(@"没有权限");
                info = @"没有权限";
            } else if (type == PurchNoGoods) {
                
                NSLog(@"没有商品");
                info = @"没有商品";
            } else if (type == PurchRestoredGoods) {
                
                NSLog(@"已经购买过该商品");
                info = @"已经购买过该商品";
            } else if (type == PurchServiceFail) {
                
                NSLog(@"网络故障");
                info = @"网络故障";
            } else if (type == PurchReceiptInvalid) {
                
                NSLog(@"支付票据无效");
                info = @"支付票据无效";
            } else if (type == PurchOrderNotExist) {
                
                NSLog(@"支付订单不存在");
                info = @"支付订单不存在";
            } else if (type == PurchOrderClosed) {
                
                NSLog(@"支付订单已结束");
                info = @"支付订单已结束";
            } else if (type == PurchOrderNoComplete) {
                
                NSLog(@"支付订单未完成");
                info = @"支付订单未完成";
            }
            
            dispatch_async(dispatch_get_main_queue(), ^{
                self.textView.text = info;
            });
            
        }];




    }];
    
}


- (IBAction)bannerAction:(UIButton *)sender {
    
    [self.manager.adManager initAd:ADTYPE_BANNER rootViewController:self superView:self.view];
    
    

    
    

}

- (IBAction)chapingAction:(id)sender {
    
    [self.manager.adManager initAd:ADTYPE_INTERSTITAL rootViewController:self superView:self.view];
    

}
- (IBAction)rewardAction:(id)sender {

    [self.manager.adManager initAd:ADTYPE_REWARDVIDEO rootViewController:self superView:self.view];
    


}
- (IBAction)shareAction:(id)sender {
    
    [[LEFBShareManager shared] shareToFacebook:self omplete:^(NSDictionary<NSString *,id> * _Nullable results, BOOL isCancel, NSError * _Nullable error) {
        
    }];

}

- (IBAction)jumpYouTuBe:(id)sender {
    
    [[LEFBShareManager shared] jumpYouTuBe];
    
}

- (IBAction)jumpAppStore:(id)sender {
    
    [[LEFBShareManager shared] openAppStoreApplication];
}


- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/// 横屏广告加载失败
/// @param error 错误信息
- (void)bannerAdDidLoadFail:(NSError * _Nullable)error{
    
}
/// 横屏广告点击关闭
- (void)bannerAdDidClose{
    
}
/// 横屏广告点击
- (void)bannerAdDidClick{
    
}
/// 横屏广告呈现成功
- (void)bannerAdDidVisible{
    
}


/// 激励视频加载失败
/// @param error 错误信息
- (void)rewardAdDidLoadFail:(NSError * _Nullable)error{
    
    NSLog(@"%s",__FUNCTION__);
}
/// 激励视频点击关闭
- (void)rewardAdDidClose{
    NSLog(@"%s",__FUNCTION__);
}
/// 激励视频点击
- (void)rewardAdDidClick{
    NSLog(@"%s",__FUNCTION__);
}
/// 激励视频呈现成功
- (void)rewardAdDidVisible{
    NSLog(@"%s",__FUNCTION__);
}
/// 获取奖励
- (void)rewardAdWinReward{
    NSLog(@"%s",__FUNCTION__);
}



/// 插屏广告加载失败
/// @param error 错误信息
- (void)interstitialAdDidLoadFail:(NSError * _Nullable)error{
    
}
/// 插屏广告关闭
- (void)interstitialAdDidClose{
    
}
/// 插屏广告点击
- (void)interstitialAdDidClick{
    
}
/// 插屏广告呈现成功
- (void)interstitialAdDidVisible{
    
}

/// 广告加载成功
- (void)adDidFinishLoading:(LEADTYPE)type{
    if (type == ADTYPE_BANNER) {
        [[LESDKManager shared].adManager showBannerPayuser:LE_PAY];
    }else if(type == ADTYPE_INTERSTITAL){
        [[LESDKManager shared].adManager showInterstitialAdPayuser:LE_PAY];
    }else if(type == ADTYPE_REWARDVIDEO){
        [[LESDKManager shared].adManager showRewardVideoAdPayuser:LE_PAY];
    }
}


#pragma mark -LEOauthManagerDelegate
- (void)logOutSDK{
    
    // 退出登录回调
    NSLog(@"===退出登录====");
}

@end
