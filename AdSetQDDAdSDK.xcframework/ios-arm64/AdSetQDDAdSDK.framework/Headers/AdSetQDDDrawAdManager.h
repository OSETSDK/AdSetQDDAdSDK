//
//  AdSetQDDDrawAdManager.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2022/2/21.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdSetQDDDrawAd.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDDDrawAdManagerDelegate <NSObject>

@optional
/**
 广告加载成功
 */
-(void)adsetqddDrawAdManagerLoadSuccess:(NSArray<AdSetQDDDrawAd *> *)drawAds;
/**
 最终失败回调
 */
-(void)adsetqddDrawAdManagerLoadFailed:(NSError *)error;
/**
*  获取平台加载错误信息
*  详解:该回调仅表示当前平台加载失败，并不代表当次请求过程已结束，请勿在此回调中释放广告请求对象
   可能会调用多次
   @param platform 平台标识 代表当前哪个平台加载失败
   @param drawAd   广告请求对象
   @param error    平台错误信息
*/
-(void)adsetqddDrawAdManagerPlatformError:(AdSetQDDPlatform)platform
                            videoAd:(AdSetQDDDrawAd *)drawAd
                              error:(NSError *)error;
/**
 视频缓存成功
 */
- (void)adsetqddDrawAdVideoCacheSuccess:(AdSetQDDDrawAd *)drawAd;
/**
 视频缓存失败
 */
- (void)adsetqddDrawAdVideoCacheFailed:(AdSetQDDDrawAd *)drawAd withError:(NSError *)error;
@end

@interface AdSetQDDDrawAdManager : NSObject
/**
 加载广告
 @param pid             广告位id  必传
 @param adParams  广告参数  必传
 @param adCount   广告请求个数，默认拉取1条 建议不要拉取过多
 @param delegate  回调接受delegate 必传
 */
-(void)loadAdWithPid:(NSString *)pid
               count:(NSInteger)adCount
            adParams:(AdSetQDDDrawAdConfigParams *)adParams
            delegate:(id<AdSetQDDDrawAdManagerDelegate>)delegate;

-(void)renderAd;
      
@end

NS_ASSUME_NONNULL_END
