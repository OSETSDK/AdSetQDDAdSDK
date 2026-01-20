//
//  AdSetQDDBannerViewDelegate.h
//  AdSetQDDAdSDKDev
//
//  Created by AdSetQDD on 2020/7/21.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#ifndef AdSetQDDBannerViewDelegate_h
#define AdSetQDDBannerViewDelegate_h

@class AdSetQDDBannerView;

@protocol AdSetQDDBannerViewDelegate <NSObject>

@optional
/**
 * 加载成功回调
 * 回调说明：广告加载成功时触发
 * 使用场景：媒体如需要统计广告加载成功数可通过实现该回调来统计数据
 */
- (void)adsetqddBannerLoadedSuccess:(AdSetQDDBannerView *)adsetqddBannerAd;
/**
 * 请求广告失败后调用
 */
- (void)adsetqddBannerLoadedFail:(AdSetQDDBannerView *)adsetqddBannerAd error:(NSError *)error;
/**
   广告渲染成功
 */
- (void)adsetqddBannerAdRenderSuccess:(AdSetQDDBannerView *)adsetqddBannerAd;
/**
   广告渲染失败
 */
- (void)adsetqddBannerAdRenderFail:(AdSetQDDBannerView *)adsetqddBannerAd error:(NSError *)error;
/**
 * banner广告曝光
 */
- (void)adsetqddBannerExposure:(AdSetQDDBannerView *)adsetqddBannerAd;
/**
 *  banner条点击回调
 */
- (void)adsetqddBannerClicked:(AdSetQDDBannerView *)adsetqddBannerAd;
/**
 *  banner条被用户关闭时调用
 */
- (void)adsetqddBannerClosed:(AdSetQDDBannerView *)adsetqddBannerAd;
/**
 *  banner广告点击以后弹出全屏广告页完毕
 */
- (void)adsetqddBannerDetailShow:(AdSetQDDBannerView *)adsetqddBannerAd;
/**
 *  全屏广告页已经被关闭
 */
- (void)adsetqddBannerDetailClosed:(AdSetQDDBannerView *)adsetqddBannerAd;

@end
#pragma mark banner扩展功能回调（包含统计、获取个性化参数等回调）
@protocol AdSetQDDBannerViewExtensionFunctionDelegate <NSObject>

@optional
/**
 渠道加载失败回调
* 回调说明：当前广告平台请求失败后调用，为保证填充，该广告位可能配置多家渠道，当前渠道请求失败后触发该回调，注意此回调并不代表本次请求动作已经结束且可能存在多次回调的情况
* 使用场景：媒体如需要统计渠道加载失败数可通过实现该回调来统计数据
 */
- (void)adsetqddBannerPlatformError:(AdSetQDDPlatform)platform
                     bannerAd:(AdSetQDDBannerView *)adsetqddBannerAd
                        error:(NSError *)error;
@end
#endif /* AdSetQDDBannerViewDelegate_h */
