//
//  RRArticleTableViewCell.h
//  RSSReader
//
//  Created by 刘旭 on 16/9/6.
//  Copyright © 2016年 刘旭. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RRArticleTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *dateLabel;

@end
