//
//  ARScrollAppsCell.h
//  Arima
//
//  Created by iMokhles on 20/08/16.
//
//

#import <UIKit/UIKit.h>
#import "ITAppView.h"

@class ITAppView;
@interface ARScrollAppsCell : UITableViewCell <UIScrollViewDelegate>
@property (strong, nonatomic) UILabel *titleLabel;
@property (strong, nonatomic) UIButton *showMoreButton;

- (void)configureWithTitle:(NSString *)title items:(NSMutableArray *)items;

@property (nonatomic, copy) void (^itemTappedBlock)(ARScrollAppsCell *itemCell, ITAppView *currentItem);
@property (nonatomic, copy) void (^showAllTappedBlock)(ARScrollAppsCell *appCell, UIButton *currentButton);
@end
