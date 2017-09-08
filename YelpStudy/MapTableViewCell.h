//
//  MapTableViewCell.h
//  YelpStudy
//
//  Created by Tianyu Zhuang on 7/9/17.
//  Copyright © 2017 Tianyu Zhuang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YelpDataModel.h"

@interface MapTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end
