//
//  HHMockHttpUtil.h
//  HHDemo
//
//  Created by zero on 2017/8/29.
//  Copyright © 2017年 黄花菜. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * 此类为模拟网络状态的工具类，不需要提交至svn
 */
@interface HHMockHttpUtil : NSObject

/**
 * 模拟网络开关控制
 * tip:默认为开启，正式环境下需要手动关闭，即调用此方法
 */
+ (void)setMockEnabled:(BOOL)enabled;


/**
 * 配置模拟数据
 * tip：具体模拟数据建议写在此方法内
 */
+ (void)configMockHttpResponse;

@end
