//
//  AdSetQDDInterstitialAd.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2020/7/23.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdSetQDDInterstitialDelegate.h"
#import "AdSetQDDBaseAd.h"
#import "AdSetQDDBaseAdConfigParams.h"
NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDDInterstitialAd : AdSetQDDBaseAd
/**
 * 插屏基础回调代理
 */
@property(nonatomic,weak) id<AdSetQDDInterstitialDelegate> delegate;
/**
 * 插屏扩展回调代理
 * 如不需要扩展回调相关功能，可不用指定
 */
@property(nonatomic,weak) id<AdSetQDDInterstitialExtensionFunctionDelegate> extDelegate;
/**
 *  加载广告
 *  @param pid             广告位id  [必传]
 *  @param adParams 广告参数  [必传]
 */
- (void)loadAdWithPid:(NSString *)pid adConfigParams:(AdSetQDDInterstitialAdConfigParams *)adParams;
/**
  渲染广告
 */
- (void)renderAd;
/**
 *  显示广告
 *  @param presentVC  【必传】
 */
- (void)showAdFromRootViewController:(UIViewController *)presentVC;
/**
 广告是否有效
 注意：调用show接口前建议先检测广告是否有效
 */
- (BOOL)isAdValid;
/**
 广告价格  单位：分 [C2S下，返回渠道出价，非C2S下，返回平台填写的固价]
 注意：广告加载成功后获取
 */
- (NSInteger)ecpm;
@end

NS_ASSUME_NONNULL_END
