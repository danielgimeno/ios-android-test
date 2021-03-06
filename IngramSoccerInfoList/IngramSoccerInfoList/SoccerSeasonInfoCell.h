//
//  SoccerSeasonInfoCell.h
//  IngramSoccerInfoList
//
//  Created by balaji on 22/10/15.
//  Copyright (c) 2015 balaji. All rights reserved.
//  This file is custom table view cell for showing soccerinfo.

#import <UIKit/UIKit.h>

@interface SoccerSeasonInfoCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *lbl_homeTeam;
@property (weak, nonatomic) IBOutlet UILabel *lbl_goalsHome;
@property (weak, nonatomic) IBOutlet UILabel *lbl_awayTeam;
@property (weak, nonatomic) IBOutlet UILabel *lbl_status;
@property (weak, nonatomic) IBOutlet UILabel *lbl_goalsAway;
@property (weak, nonatomic) IBOutlet UILabel *lbl_gameDate;

@end
