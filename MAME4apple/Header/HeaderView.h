//
//  HeaverView.h
//  MAME4apple
//
//  Created by WhiteTiger "sgama la rete" on 04/12/2016.
//  Copyright © 2016 Les Bird. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HeaderView : UITableViewHeaderFooterView

@property (nonatomic, readonly, copy) NSString *reuseIdentifier;

+ (NSString *)sectionIndentifier;
+ (instancetype)nibView;

- (void)configure:(NSString *)title actionSearch:(void (^)(void))actionSearch;

@end
