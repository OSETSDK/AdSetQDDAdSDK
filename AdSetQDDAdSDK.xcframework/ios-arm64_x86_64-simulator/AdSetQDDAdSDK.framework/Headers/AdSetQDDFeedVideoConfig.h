//
//  AdSetQDDNativeFeedVideoConfig.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2020/8/28.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDDFeedVideoConfig : NSObject

@property(nonatomic,assign) BOOL isMute;
//视频是否自动播放，默认YES 仅神蓍、广点通设置有效
@property(nonatomic,assign) BOOL isAutoPlay;

@end

NS_ASSUME_NONNULL_END
