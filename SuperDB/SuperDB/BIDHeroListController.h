//
//  BIDHeroListController.h
//  SuperDB
//
//  Created by Crescens Techstars on 1/6/14.
//  Copyright (c) 2014 Crescens Techstars. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDHeroListController : UIViewController<UITableViewDataSource, UITableViewDelegate, UITabBarDelegate, NSFetchedResultsControllerDelegate, UIAlertViewDelegate>




@property (weak, nonatomic) IBOutlet UITableView *heroTableView;
@property (weak, nonatomic) IBOutlet UITabBar *heroTabBar;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *addButton;

- (IBAction)addHero:(id)sender;


@end
