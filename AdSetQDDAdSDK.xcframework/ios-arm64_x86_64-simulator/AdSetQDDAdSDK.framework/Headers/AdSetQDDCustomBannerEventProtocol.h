//
//  AdSetQDDCustomBannerEventProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/17.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
//已废弃协议
@protocol AdSetQDDCustomBannerDeprecatedEventProtocol <NSObject>

@optional
/**
 *  banner广告曝光调用
 */
- (void)adsetqddCustomBannerShow:(UIView *)bannerAd AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomBannerShow:extInfo:替代");
/**
 *  banner条点击调用
 */
- (void)adsetqddCustomBannerClicked:(UIView *)bannerAd AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomBannerClicked:extInfo:替代");
/**
    广告渲染失败调用
 */
- (void)adsetqddCustomBannerAdRenderFail:(UIView *)bannerAd error:(NSError *)error AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomBannerAdRenderFail:error:extInfo:替代");
@end

@protocol AdSetQDDCustomBannerEventProtocol <AdSetQDDCustomBannerDeprecatedEventProtocol>

@optional
/**
 * 广告开始加载素材
 */
- (void)adsetqddCustomBannerStartLoadSource:(UIView * _Nullable)bannerAd;
/**
 * 广告素材加载成功调用
 */
- (void)adsetqddCustomBannerLoadSourceSuccess:(UIView * _Nullable)bannerAd extInfo:(NSDictionary *_Nullable)extInfo;
/**
 * 广告素材加载失败调用
 */
- (void)adsetqddCustomBannerLoadSourceFailed:(UIView * _Nullable)bannerAd error:(NSError *)error extInfo:(NSDictionary *_Nullable)extInfo;

@required
/**
 *  广告加载成功调用
 */
- (void)adsetqddCustomBannerLoaded:(UIView *)bannerAd;
/**
 *  广告加载失败调用
 */
- (void)adsetqddCustomBannerError:(NSError *)error;
/**
    广告渲染成功调用
 */
- (void)adsetqddCustomBannerAdRenderSuccess:(UIView *)bannerAd;
/**
    广告渲染失败调用
 */
- (void)adsetqddCustomBannerAdRenderFail:(UIView *)bannerAd error:(NSError *)error extInfo:(NSDictionary *_Nullable)extInfo;
/**
 *  banner广告曝光调用
 *  @param bannerAd 广告视图
 *  @param extInfo 媒体个性化参数
 */
- (void)adsetqddCustomBannerShow:(UIView *)bannerAd extInfo:(NSDictionary *_Nullable)extInfo;
/**
 *  banner条点击调用
 */
- (void)adsetqddCustomBannerClicked:(UIView *)bannerAd extInfo:(NSDictionary *_Nullable)extInfo;
/**
 *  banner条被用户关闭时调用
 */
- (void)adsetqddCustomBannerClosed:(UIView *)bannerAd;
/**
 *  banner广告点击以后弹出全屏广告页完毕调用
 */
- (void)adsetqddCustomBannerDetailShow:(UIView *)bannerAd;
/**
 *  全屏广告页已经被关闭调用
 */
- (void)adsetqddCustomBannerDetailClosed:(UIView *)bannerAd;
@end

NS_ASSUME_NONNULL_END
