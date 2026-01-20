//
//  AdSetQDDCustomSplashAdapterProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/4/26.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdSetQDDCustomSplashEventProtocol.h"
#import "AdSetQDDCustomAdapterProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDDCustomSplashAdapterProtocol <AdSetQDDCustomAdapterProtocol>

@required
/**
 加载广告
 */
- (void)loadSplashAd:(NSString *)pid
         splashEvent:(id<AdSetQDDCustomSplashEventProtocol>)event;
/**
  渲染广告
 */
- (void)renderAd;
/**
 展示开屏广告
 */
- (void)showSplashAd:(UIWindow *)window bottomView:(UIView *)bottomView;
/**
 广告是否有效
 如果三方提供查询广告是否有效接口则用三方的，否则按照三方广告过期时长进行处理
 */
- (BOOL)isAdValid;

@optional
/**
 移除开屏广告，返回代表移除是否成功
 */
- (BOOL)removeSplashAdView;
@end

NS_ASSUME_NONNULL_END
