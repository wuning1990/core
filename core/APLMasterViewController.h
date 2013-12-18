//
//  APLMasterViewController.h
//  core
//
//  Created by Ning on 13-12-17.
//  Copyright (c) 2013年 Ning. All rights reserved.
//

#import <UIKit/UIKit.h>

@class APLDetailViewController;

#import <CoreData/CoreData.h>

@interface APLMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) APLDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
