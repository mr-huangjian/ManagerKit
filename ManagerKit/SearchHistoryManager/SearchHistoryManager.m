//
//  WSSearchHistoryManager.m
//  ShowYou
//
//  Created by hj on 16/7/14.
//  Copyright © 2016年 soppysonny. All rights reserved.
//

#import "SearchHistoryManager.h"

#define MaxRecordCount  10  // 最多存储记录条数
#define SearchHistory   @"SearchHistory"
#define SearchHistoryArray [[NSUserDefaults standardUserDefaults] arrayForKey:SearchHistory]

@implementation SearchHistoryManager

+ (void)insertSearchRecord:(NSString *)keyWord
{
    NSMutableArray *array = [[NSMutableArray alloc]initWithArray:SearchHistoryArray];
    if (array == nil) {
        array = [[NSMutableArray alloc]init];
    } else if ([array containsObject:keyWord]) {
        [array removeObject:keyWord];
    } else if ([array count] >= MaxRecordCount) {
        [array removeObjectsInRange:NSMakeRange(MaxRecordCount - 1, [array count] - MaxRecordCount + 1)];
    }
    [array insertObject:keyWord atIndex:0];
    [[NSUserDefaults standardUserDefaults] setObject:array forKey:SearchHistory];
}

+ (void)deleteSearchRecord:(NSString *)keyWord
{
    NSMutableArray *array = [[NSMutableArray alloc]initWithArray:SearchHistoryArray];
    [array removeObject:keyWord];
    [[NSUserDefaults standardUserDefaults] setObject:array forKey:SearchHistory];
}

+ (NSArray *)getAllSearchHistory
{
    return SearchHistoryArray;
}

+ (void)clearAllSearchHistory
{
    [[NSUserDefaults standardUserDefaults] setObject:[[NSMutableArray alloc]init] forKey:SearchHistory];
}

@end
