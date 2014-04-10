//
//  CardMatchingGame.h
//  matchismo
//
//  Created by Matías Gil Echavarría on 4/9/14.
//  Copyright (c) 2014 matiasdim. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

//Ddesignated initializer
-(instancetype)initWtihCardCount:(NSUInteger)count
                       usingDeck:(Deck *)deck;

-(void)chooseCardAtIndex:(NSUInteger)index;
-(Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end
