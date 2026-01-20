//
//  AdSetQDDNativeFeedVideoInterface.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2020/8/28.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdSetQDDFeedVideoConfig.h"
#import "AdSetQDDFeedVideoDelegate.h"

@protocol AdSetQDDFeedVideoInterface <NSObject>
@optional
- (void)registerDataObject:(id<AdSetQDDFeedAdMeta>)dataObject
            clickableViews:(NSArray<UIView *>*)clickableViews AdSetQDDAdDEPRECATED_MSG("该回调已废弃，请使用registerDataObject：adContainer:clickableViews替代");
@required
- (void)registerDataObject:(id<AdSetQDDFeedAdMeta>)dataObject
               adContainer:(UIView *)adContainer
            clickableViews:(NSArray<UIView *>*)clickableViews;
-(void)unregisterDataObject;
-(void) config:(AdSetQDDFeedVideoConfig*)config
     presentVc:(UIViewController*)presentVc
      delegate:(id<AdSetQDDFeedVideoDelegate>)delegate;
- (void)playVideo;
- (void)pauseVideo;
- (void)muteVideo:(BOOL)isMute;
- (void)replayVideo;
/**
 * 视频广告时长，单位 s
 */
- (CGFloat)totalTime;
/**
 * 视频广告已播放时长，单位 s
 */
- (CGFloat)currentTime;
/**
 当外部需要再次更新播放器size后需调用该接口通知内部
 调用时机：绑定事件（即调用registerDataObject接口）之后调用
 */
- (void)resizeAdVideo:(CGSize)adsize;
@end


