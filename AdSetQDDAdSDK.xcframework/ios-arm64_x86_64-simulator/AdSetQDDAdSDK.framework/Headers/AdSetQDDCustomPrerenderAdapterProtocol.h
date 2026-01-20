//
//  AdSetQDDCustomPrerenderAdapterProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/20.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdSetQDDCustomAdapterProtocol.h"
#import "AdSetQDDCustomPrerenderEventProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDDCustomPrerenderAdapterProtocol <AdSetQDDCustomAdapterProtocol>

@required
/**
 *  加载广告
 *  详解：pid - 广告位 id
 */
- (void)loadAdPid:(NSString *)pid
          adCount:(NSInteger)adCount
           adSize:(CGSize)adSize
        videoMute:(BOOL)mute
        presentVC:(UIViewController *)presentVC
            event:(id<AdSetQDDCustomPrerenderEventProtocol>)event;
/**
  渲染广告
 */
- (void)renderAd;

@optional
/**
 检测广告是否有效
 注意：
 adView参数为当前广告
 */
- (BOOL)checkAdViewIsValid:(UIView *_Nullable)adView;
//更新vc
- (void)updateCustomAdapterCurrentPresentVC:(UIViewController *)presentVC;
@end

NS_ASSUME_NONNULL_END
