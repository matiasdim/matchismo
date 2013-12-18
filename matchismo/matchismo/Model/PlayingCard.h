//
//  PlayingCard.h
//  matchismo
//
//  Created by Matías Gil Echavarría on 12/17/13.
//  Copyright (c) 2013 matiasdim. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *) validSuits;
+ (NSUInteger) maxRank;

@end
