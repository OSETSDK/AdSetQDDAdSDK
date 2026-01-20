//
//  AdSetQDDCustomInterstitialEventProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/16.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
//已废弃协议
@protocol AdSetQDDCustomInterstitialDeprecatedEventProtocol <NSObject>

@optional

- (void)adsetqddCustomInterstitialEventShow AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomInterstitialEventShow:extInfo:替代");

- (void)adsetqddCustomInterstitialEventClicked AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomInterstitialEventClicked:extInfo:替代");

@end

@protocol AdSetQDDCustomInterstitialEventProtocol <AdSetQDDCustomInterstitialDeprecatedEventProtocol>

@optional
/**
 * 广告开始加载素材
 */
- (void)adsetqddCustomInterstitialEventStartLoadSource:(UIView * _Nullable)adView;
/**
 * 广告素材加载成功调用
 */
- (void)adsetqddCustomInterstitialEventLoadSourceSuccess:(UIView * _Nullable)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 * 广告素材加载失败调用
 */
- (void)adsetqddCustomInterstitialEventLoadSourceFailed:(UIView * _Nullable)adView error:(NSError *)error extInfo:(NSDictionary *_Nullable)extInfo;

@required
/**
 *  广告加载成功调用
 */
- (void)adsetqddCustomInterstitialEventLoaded;
/**
 *  广告加载失败调用
 */
- (void)adsetqddCustomInterstitialEventError:(NSError *)error;
/**
 *  广告渲染成功调用
 */
- (void)adsetqddCustomInterstitialEventRenderSuccess;
/**
 *  广告渲染失调用
 */
- (void)adsetqddCustomInterstitialEventRenderFailed:(NSError *)error;
/**
 *  插屏广告视图展示成功调用
 *  @param adView 广告视图
    @param extInfo 广告个性化参数
 */
- (void)adsetqddCustomInterstitialEventShow:(UIView * _Nullable)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
   平台广告展示失败调用
 */
- (void)adsetqddCustomInterstitialEventShowFail:(NSError *)error;
/**
 *  插屏广告展示结束调用
 */
- (void)adsetqddCustomInterstitialEventClosed;
/**
 *  插屏广告点击调用
 *  @param adView 广告视图
    @param extInfo 广告个性化参数
 */
- (void)adsetqddCustomInterstitialEventClicked:(UIView *_Nullable)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 *  广告落地页被关闭调用
 */
- (void)adsetqddCustomInterstitialEventDetailClosed;
@end

NS_ASSUME_NONNULL_END
