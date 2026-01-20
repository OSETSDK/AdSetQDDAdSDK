//
//  AdSetQDDCPVideoAdConfigModel.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2025/6/9.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kAdSetQDDCPVideoAdMediaDrawingKey;//请求开屏展示类型
extern NSString *const kAdSetQDDCPVideoAdMediaVideoMutedKey;//设置视频静音开关
extern NSString *const kAdSetQDDCPVideoAdMediaClkLimitKey;//广告请求接口类型
extern NSString *const kAdSetQDDCPVideoAdMediaAdSizeKey;//广告请求size
extern NSString *const kAdSetQDDCPVideoAdMediaExpireTimestampKey;//
extern NSString *const kAdSetQDDCPVideoAdMediaMediaExtConfigKey;//媒体个性化参数
extern NSString *const kAdSetQDDCPVideoAdMediaAdnNameKey;//广告源名称
extern NSString *const kAdSetQDDCPVideoAdMediaPresentVCKey;// 广告展示的控制器
extern NSString *const kAdSetQDDCPVideoAdMediaAutoRenderKey;//是否自动渲染
extern NSString *const kAdSetQDDCPVideoAdMediaADNAcceptIDKey;//当前广告源接受方ID

@interface AdSetQDDCPVideoAdConfigModel : NSObject
/**
 请求视频展示类型
 */
@property(nonatomic,assign,readonly)NSInteger requestAdType;
/**
 设置视频静音开关 默认静音
 */
@property(nonatomic,assign,readonly)BOOL videoMuted;
/**
 广告交互类型
 */
@property(nonatomic,assign,readonly)NSInteger adInteractionType;
/**
 广告请求size
 */
@property(nonatomic,assign,readonly)CGSize adSize;
/**
 广告过期时长 单位s
 */
@property(nonatomic,assign)NSInteger expire_timestamp;
/**
 媒体其他个性化参数
 */
@property(nonatomic,strong,readonly,nullable)NSDictionary *mediaExtConfig;
/**
 当前广告源名称
 */
@property(nonatomic,copy,readonly,nullable)NSString *adnName;
/**
 广告展示的控制器
 */
@property(nonatomic,weak,readonly)UIViewController *presentVc;
/**
 * 是否自动渲染 默认YES （可选参数）
 */
@property(nonatomic,assign,readonly)BOOL isAutoRender;
/**
 当前广告源接受方ID
 */
@property(nonatomic,copy,readonly,nullable)NSString *adnAcceptID;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
