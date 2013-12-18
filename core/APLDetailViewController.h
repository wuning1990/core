//
//  APLDetailViewController.h
//  core
//
//  Created by Ning on 13-12-17.
//  Copyright (c) 2013年 Ning. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface APLDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
