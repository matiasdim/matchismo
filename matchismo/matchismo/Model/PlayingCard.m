//
//  PlayingCard.m
//  matchismo
//
//  Created by Matías Gil Echavarría on 12/17/13.
//  Copyright (c) 2013 matiasdim. All rights reserved.
//

#import "PlayingCard.h"

@implementation PlayingCard

- (NSString *)contents
{
    NSString *rankStrings = [PlayingCard rankStrings];
    return [rankStrings[self.rank] stringByAppendingString:self.suit];
}

@synthesize suit = _suit;

+ (NSArray *) validSuits
{
    return @[@"♠",@"♣",@"♥",@"♦"];
}

- (void) setSuit:(NSString *)suit
{
    if ([[PlayingCard validSuits] containsObject:suit]) {
        _suit = suit;
    }
}

- (NSString *)suit
{
    return _suit ? _suit : @"?";
}

+ (NSString *)rankStrings
{
    return @[@"?",@"A",@"1",@"2",@"3",@"4",@"5",@"6",@"7",@"8",@"9",@"10",
             @"J",@"Q",@"K"];
}

@end
