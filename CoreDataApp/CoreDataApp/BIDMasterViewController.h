//
//  BIDMasterViewController.h
//  CoreDataApp
//
//  Created by Crescens Techstars on 1/3/14.
//  Copyright (c) 2014 Crescens Techstars. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface BIDMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
