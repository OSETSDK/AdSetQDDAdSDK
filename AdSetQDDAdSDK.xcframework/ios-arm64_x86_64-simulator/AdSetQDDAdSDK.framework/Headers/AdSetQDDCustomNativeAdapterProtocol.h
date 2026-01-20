//
//  AdSetQDDCustomNativeAdapterProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/5/20.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdSetQDDCustomAdapterProtocol.h"
#import "AdSetQDDCustomNativeEventProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDDCustomNativeAdapterProtocol <AdSetQDDCustomAdapterProtocol>

@required
/**
 *  加载广告
 *  详解：pid - 广告位 id
 */
- (void)loadAdPid:(NSString *)pid
          adCount:(NSInteger)adCount
        presentVC:(UIViewController *)presentVC
            event:(id<AdSetQDDCustomNativeEventProtocol>)event;
/**
  渲染广告
 */
- (void)renderAd;

@optional
/**
 检测广告是否有效
 注意：
 当信息流是自渲染类型 调用方法 【self  checkAdIsValid:data adView:nil】
 当信息流是模版类型 调用方法 【self  checkAdIsValid:nil adView:adView】
 */
- (BOOL)checkAdIsValid:(id<AdSetQDDFeedAdMeta> _Nullable)adData adView:(UIView *_Nullable)adView;
//更新vc
- (void)updateCustomAdapterCurrentPresentVC:(UIViewController *)presentVC;
@end

NS_ASSUME_NONNULL_END
