//
//  AdSetQDDCustomSplashEventProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/4/26.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//已废弃协议
@protocol AdSetQDDCustomSplashDeprecatedEventProtocol <NSObject>

@optional
/**
 * 开屏广告加载成功调用
 */
- (void)adsetqddCustomSplashEventSplashLoaded  AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomSplashEventSplashLoaded:extInfo:替代");
/**
 *  开屏广告渲染成功调用
 */
- (void)adsetqddCustomSplashEventRenderSuccess AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomSplashEventRenderSuccess:extInfo:替代");
/**
 *  开屏广告曝光成功调用
 */
- (void)adsetqddCustomSplashEventSplashShow AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomSplashEventSplashShowWithSplashView:extInfo:替代");
/**
 *  开屏广告点击调用
 */
- (void)adsetqddCustomSplashEventSplashClicked AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomSplashEventSplashClicked:extInfo:替代");

@end

@protocol AdSetQDDCustomSplashEventProtocol <AdSetQDDCustomSplashDeprecatedEventProtocol>

@optional
/**
 * 开屏广告开始加载素材
 */
- (void)adsetqddCustomSplashEventSplashStartLoadSource:(UIView * _Nullable)splashView;
/**
 * 开屏广告素材加载成功调用
 */
- (void)adsetqddCustomSplashEventSplashLoadSourceSuccess:(UIView * _Nullable)splashView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 * 开屏广告素材加载失败调用
 */
- (void)adsetqddCustomSplashEventSplashLoadSourceFailed:(UIView * _Nullable)splashView error:(NSError *_Nullable)err extInfo:(NSDictionary *_Nullable)extInfo;
/**
 打开dp-ulk
 */
- (void)adsetqddCustomSplashEventSplashOpenDpOrUlk:(NSDictionary *_Nullable)extInfo;

@required
/**
 * 开屏广告加载成功调用
 */
- (void)adsetqddCustomSplashEventSplashLoaded:(UIView * _Nullable)splashView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 *  开屏广告失败调用
 */
- (void)adsetqddCustomSplashEventError:(NSError *)error;
/**
 *  开屏广告渲染成功调用
 *  splashView:广告视图
 *  extInfo：媒体个性化参数
 */
- (void)adsetqddCustomSplashEventRenderSuccess:(UIView * _Nullable)splashView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 *  开屏广告渲染失败调用
 */
- (void)adsetqddCustomSplashEventRenderFailedError:(NSError *)error;
/**
 * 开屏广告投屏成功调用
 */
- (void)adsetqddCustomSplashEventSplashPresent;
/**
 *  开屏广告曝光成功调用
 *  splashView:广告视图
 *  extInfo：媒体个性化参数
 */
- (void)adsetqddCustomSplashEventSplashShowWithSplashView:(UIView * _Nullable)splashView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 *  开屏广告曝光失败调用
 */
- (void)adsetqddCustomSplashEventSplashAdShowFail:(NSError *)error;
/**
 *  开屏广告点击调用
 *  splashView:广告视图
 *  extInfo：媒体个性化参数
 */
- (void)adsetqddCustomSplashEventSplashClicked:(UIView * _Nullable)splashView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 *  开屏广告将要关闭调用
 */
- (void)adsetqddCustomSplashEventSplashWillClosed;
/**
 *  开屏广告关闭调用
 */
- (void)adsetqddCustomSplashEventSplashClosed;
/**
 *  点击以后全屏广告页已经关闭调用
 */
- (void)adsetqddCustomSplashEventSplashDetailClosed;
/**
 * 当用户点击跳过按钮时触发调用
 */
- (void)adsetqddCustomSplashEventSplashSkip;
/**
 * 开屏广告展示剩余时间
 */
- (void)adsetqddCustomSplashAdLifeTime:(NSInteger)time;

@end

NS_ASSUME_NONNULL_END
