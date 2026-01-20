//
//  AdSetQDDCustomPrerenderEventProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/20.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//已废弃协议
@protocol AdSetQDDCustomPrerenderDeprecatedEventProtocol <NSObject>

@optional
/**
 *  信息流模版广告曝光调用
 */
- (void)adsetqddCustomPrerenderShow:(UIView *)adView AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomPrerenderShow:adInfo:替代");
/**
 *  广告点击时调用
 */
- (void)adsetqddCustomPrerenderClicked:(UIView *)adView AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用adsetqddCustomPrerenderClicked:adInfo:替代");

@end

@protocol AdSetQDDCustomPrerenderEventProtocol <AdSetQDDCustomPrerenderDeprecatedEventProtocol>

@optional
/**
 * 广告开始加载素材
 */
- (void)adsetqddCustomPrerenderStartLoadSource:(UIView * _Nullable)adView;
/**
 * 广告素材加载成功调用
 */
- (void)adsetqddCustomPrerenderLoadSourceSuccess:(UIView * _Nullable)adView extInfo:(NSDictionary *_Nullable)extInfo;
/**
 * 广告素材加载失败调用
 */
- (void)adsetqddCustomPrerenderLoadSourceFailed:(UIView * _Nullable)adView error:(NSError *)error extInfo:(NSDictionary *_Nullable)extInfo;
/**
 * 广告将要曝光
 */
- (void)adsetqddCustomPrerenderwillShow:(UIView * _Nullable)adView;

@required
/**
 *  广告加载成功后调用
 */
- (void)adsetqddCustomPrerenderLoaded:(NSArray<UIView*>*)adViewArray;
/**
 *  广告加载失败后调用
 */
- (void)adsetqddCustomPrerenderError:(NSError *)error;
/**
 *  广告视图渲染成功调用
 */
- (void)adsetqddCustomPrerenderRenderSuccess:(UIView *)adView adInfo:(NSDictionary *)adInfo;
/**
 *  广告视图渲染失败调用
 */
- (void)adsetqddCustomPrerenderRenderError:(UIView *)adView error:(NSError *)error;
/**
 *  广告曝光调用
 *  @param adView 广告视图
    @param adInfo 媒体个性化参数
 */
- (void)adsetqddCustomPrerenderShow:(UIView *)adView adInfo:(NSDictionary *_Nullable)adInfo;
/**
 *  广告点击时调用
 *  @param adView 广告视图
    @param adInfo 媒体个性化参数
 */
- (void)adsetqddCustomPrerenderClicked:(UIView *)adView adInfo:(NSDictionary *_Nullable)adInfo;
/**
 *  广告被关闭时调用
 */
- (void)adsetqddCustomPrerenderClosed:(UIView *)adView;
/**
   视频播放状态
 */
- (void)adsetqddCustomPrerenderPlayerStatus:(AdSetQDDPlayerPlayState)status adView:(UIView *)adView;
@end

NS_ASSUME_NONNULL_END
