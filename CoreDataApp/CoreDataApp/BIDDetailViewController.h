//
//  BIDDetailViewController.h
//  CoreDataApp
//
//  Created by Crescens Techstars on 1/3/14.
//  Copyright (c) 2014 Crescens Techstars. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
