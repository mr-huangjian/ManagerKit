//
//  WSSearchHistoryManager.h
//  ShowYou
//
//  Created by hj on 16/7/14.
//  Copyright © 2016年 soppysonny. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SearchHistoryManager : NSObject

/* 插入关键字 */
+ (void)insertSearchRecord:(NSString *)keyWord;

/* 删除关键字 */
+ (void)deleteSearchRecord:(NSString *)keyWord;

/* 获取所有历史记录 */
+ (NSArray *)getAllSearchHistory;

/* 清空所有历史记录 */
+ (void)clearAllSearchHistory;

@end
