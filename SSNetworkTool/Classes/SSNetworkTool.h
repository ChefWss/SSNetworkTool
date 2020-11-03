//
//  SSNetworkTool.h
//  SSNetworkTool_Example
//
//  Created by 王少帅 on 2020/11/3.
//  Copyright © 2020 wang_shaoshuai@sina.cn. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SSNetworkTool : NSObject

- (void)doSomethng;

@property (strong,nonatomic) NSURLSessionDataTask *task;

- (NSURLSessionDataTask *)POSTWithURLString:(NSString *)URLString
                                 parameters:(id)parameters
                                    success:(void (^)(id responseObject))success
                                    failure:(void (^)(id error))failure;

@end

NS_ASSUME_NONNULL_END
