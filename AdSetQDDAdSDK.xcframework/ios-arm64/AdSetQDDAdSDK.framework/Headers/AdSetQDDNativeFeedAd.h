//
//  AdSetQDDNativeFeedAd.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2021/7/31.
//  Copyright AdSetQDDAdSDK All rights reserved.
//
#import "AdSetQDDBaseAd.h"
#import "AdSetQDDBaseAdConfigParams.h"
#import "AdSetQDDNativeFeedAdDelegate.h"
NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDDNativeFeedAd : AdSetQDDBaseAd
/**
 * 信息流混合广告基础回调代理
 */
@property(nonatomic,weak) id<AdSetQDDNativeFeedAdDelegate> delegate;
/**
 * 信息流混合广告扩展回调代理
 * 如不需要扩展回调相关功能，可不用指定
 */
@property(nonatomic,weak) id<AdSetQDDNativeFeedAdExtensionFunctionDelegate> extDelegate;
/**
 *  广告发起请求方法
 *  @param pid          广告位ID 【必传】
 *  @param adParam 广告参数 【必传】
 */
- (void)loadAdWithPid:(NSString *)pid adParam:(AdSetQDDNativeFeedAdConfigParams *)adParam;
/**
  渲染广告
 */
- (void)renderAd;

@end

NS_ASSUME_NONNULL_END
