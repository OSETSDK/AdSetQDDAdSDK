//
//  AdSetQDDFeedVideoDelegate.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2020/9/1.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDDFeedVideoDelegate <NSObject>
@optional
//视频播放完成
- (void)adsetqddFeedVideoFinish;
//视频开始播放
- (void)adsetqddFeedVideoStart;
//视频暂停播放
- (void)adsetqddFeedVideoPause;
//视频恢复播放
- (void)adsetqddFeedVideoResume;
/// 视频播放进度
/// - Parameters:
///   - progress: 播放进度百分比 取值[0~100%]
///   - currentTime: 当前播放时间
///   - totalTime:   视频总时长
- (void)adsetqddFeedVideoPlayingProgress:(CGFloat)progress currentTime:(CGFloat)currentTime totalTime:(CGFloat)totalTime;
//视频播放出错
- (void)adsetqddFeedVideoError:(NSError *)error;
@end

NS_ASSUME_NONNULL_END
