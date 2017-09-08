//
//  YelpDataStore.h
//  YelpStudy
//
//  Created by Tianyu Zhuang on 7/5/17.
//  Copyright © 2017 Tianyu Zhuang. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "YelpDataModel.h"
@import CoreLocation;

@interface YelpDataStore : NSObject

@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;

+ (YelpDataStore *)sharedInstance;
@end

