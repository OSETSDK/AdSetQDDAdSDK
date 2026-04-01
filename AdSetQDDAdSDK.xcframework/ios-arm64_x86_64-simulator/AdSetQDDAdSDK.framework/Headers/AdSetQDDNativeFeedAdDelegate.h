//
//  AdSetQDDNativeFeedAdDelegate.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2021/7/31.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDDNativeFeedAdModel;
@class AdSetQDDNativeFeedAd;

@protocol AdSetQDDNativeFeedAdDelegate <NSObject>

@optional
/**
 *  新原生广告加载广告数据成功回调，返回为广告物料的数组
 *
 */
- (void)adsetqddNativeFeedAdLoadedSuccess:(AdSetQDDNativeFeedAd *)nativeFeedAd feedAds:(NSArray <AdSetQDDNativeFeedAdModel *> *)feedAds;
/**
 *  新原生广告加载广告数据失败回调
 */
- (void)adsetqddNativeFeedAdLoadedFail:(AdSetQDDNativeFeedAd *)nativeFeedAd withError:(NSError *)error;
/**
 *  新原生广告渲染或者展示失败
 */
- (void)adsetqddNativeFeedAdFail:(AdSetQDDNativeFeedAd *)nativeFeedAd feedAd:(AdSetQDDNativeFeedAdModel *)feedAd extInfo:(NSDictionary *)info error:(NSError *)error;
/**
 *  广告素材渲染成功回调
 */
- (void)adsetqddNativeFeedAdRenderSuccess:(AdSetQDDNativeFeedAd *)nativeFeedAd feedAd:(AdSetQDDNativeFeedAdModel *)feedAd;
/**
 *注意⚠️：当该广告物料是⚠️[模版广告]⚠️时触发此回调
 *  广告被关闭
 *  详解:广告点击关闭后回调
 */
- (void)adsetqddNativeFeedAdClosed:(AdSetQDDNativeFeedAdModel *)feedAd;
/**
 *  新原生广告即将展现
 */
- (void)adsetqddNativeFeedAdExposure:(AdSetQDDNativeFeedAdModel *)feedAd;
/**
 *  广告被点击
 */
- (void)adsetqddNativeFeedAdClick:(AdSetQDDNativeFeedAdModel *)feedAd;
/**
 模版视频播放状态
 注意：仅神蓍、广点通、穿山甲会回调
 */
- (void)adsetqddNativeFeedAdVideoStateDidChanged:(AdSetQDDPlayerPlayState)playerState
                                    feedAd:(AdSetQDDNativeFeedAdModel *)feedAd;
/**
 *注意⚠️：当该广告物料是⚠️自渲染广告⚠️时触发此回调
 *  原生广告点击之后将要展示内嵌浏览器或应用内AppStore回调
 */
- (void)adsetqddNativeFeedAdDetailShow;
/**
 *注意⚠️：当该广告物料是⚠️自渲染广告⚠️时触发此回调
 * 新原生广告点击以后，内置AppStore或是内置浏览器被关闭时回调
 */
- (void)adsetqddNativeFeedAdDetailClosed;

@end
#pragma mark 信息流混合广告扩展功能回调（包含统计、获取个性化参数等回调）

@protocol AdSetQDDNativeFeedAdExtensionFunctionDelegate <NSObject>

@optional
/**
   渠道加载失败回调
 * 回调说明：当前广告平台请求失败后调用，为保证填充，该广告位可能配置多家渠道，当前渠道请求失败后触发该回调，注意此回调并不代表本次请求动作已经结束且可能存在多次回调的情况
 * 使用场景：媒体如需要统计渠道加载失败数可通过实现该回调来统计数据
 */
- (void)adsetqddNativeFeedAdPlatformError:(AdSetQDDPlatform)platform nativeFeedAd:(AdSetQDDNativeFeedAd *)nativeFeedAd error:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
