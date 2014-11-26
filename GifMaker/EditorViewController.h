//
//  EditorViewController.h
//  GifMaker
//
//  Created by HalloWorld on 14-10-16.
//  Copyright (c) 2014年 HalloWorld. All rights reserved.
//

#import <UIKit/UIKit.h>


#pragma mark - EditorViewController
@interface EditorViewController : HWViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    IBOutlet UICollectionView *collctionImgView;
    NSIndexPath *editIndexPath;
}

@property (strong, nonatomic) NSMutableArray *imgNameArray;


- (void)initImgNameArray:(NSArray *)aArr;

- (IBAction)btnPreviewTap:(id)sender;

@end


#pragma mark - ImgEditorCell
@interface ImgEditorCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imgView;

+ (NSString *)identifier;

+ (UINib *)nib;


@end

