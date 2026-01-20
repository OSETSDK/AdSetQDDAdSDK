//
//  AdSetQDDRewardAd.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2020/7/20.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import "AdSetQDDBaseAd.h"
#import "AdSetQDDRewardVideoAdDelegate.h"
#import "AdSetQDDBaseAdConfigParams.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDDRewardVideoAd : AdSetQDDBaseAd
/**
 激励视频基础回调代理对象
 */
@property(nonatomic,weak) id<AdSetQDDRewardVideoAdDelegate> delegate;
/**
 激励视频扩展回调代理对象
 如不需要扩展回调相关功能，可不用指定
 */
@property(nonatomic,weak) id<AdSetQDDRewardVideoAdExtensionFunctionDelegate>extDelegate;
/*
 加载激励视频
 @param pid      广告位id [必传]
 @param adParams 广告参数 [必传]
 **/
- (void)loadRewardVideoAdWithPid:(NSString *)pid adConfigParams:(AdSetQDDRewardAdConfigParams *)adParams;
/**
  渲染广告
 */
- (void)renderAd;
/**
 展示激励视频（收到
 adsetqddRewardVideoCached回调后调用该接口）
 @param presentVC  [必传]
 
 注意：当调用该接口时，内部会自检该广告是否有效，
 当检测到该广告无效时会回调
 adsetqddRewardVideoAdFail
 */
- (void)showRewardVideoAdFromRootViewController:(UIViewController *)presentVC;
/**
 展示激励视频时，检测广告是否有效
 */
- (BOOL)isAdValid;
/**
 广告价格  单位：分 [C2S下，返回渠道出价，非C2S下，返回平台填写的固价]
 注意：广告加载成功后获取
 */
- (NSInteger)ecpm;
@end

NS_ASSUME_NONNULL_END
