//
//  BWTableViewCell.h
//  BobWongStudioSDK
//
//  Created by BobWong on 16/10/12.
//  Copyright © 2016年 BobWongStudio. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BWTableViewCell : UITableViewCell

+ (instancetype)cellAllocWithTableView:(UITableView *)tableView;
+ (instancetype)cellXibWithTableView:(UITableView *)tableView;

@end
