//
//  MCMasterViewController.h
//  UITableViewPersistentOrder
//
//  Created by Manuel "StuFF mc" Carrasco Molina on 30/12/12.
//  Copyright (c) 2012 Pomcast.biz. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MCDetailViewController;

#import <CoreData/CoreData.h>

@interface MCMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) MCDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
