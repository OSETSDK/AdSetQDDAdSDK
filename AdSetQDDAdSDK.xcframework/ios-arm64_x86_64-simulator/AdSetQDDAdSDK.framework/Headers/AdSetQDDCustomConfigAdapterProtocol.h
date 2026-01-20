//
//  AdSetQDDCustomConfigAdapterProtocol.h
//  AdSetQDDAdSDK
//
//  Created by AdSetQDD on 2025/6/9.
//  Copyright AdSetQDDAdSDK All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdSetQDDCPSDKConfigModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol AdSetQDDCustomConfigAdapterProtocol <NSObject>
@required
/// adn初始化方法
/// @param initConfig 初始化配置，包括appid、appkey基本信息和部分用户传递配置
- (void)initializeAdapterWithConfiguration:(AdSetQDDCPSDKConfigModel *_Nullable)initConfig;
/// adn的版本号
- (NSString *_Nonnull)networkSdkVersion;
@optional
/// adapter的版本号
- (NSString *_Nonnull)adapterVersion;
@end

NS_ASSUME_NONNULL_END
