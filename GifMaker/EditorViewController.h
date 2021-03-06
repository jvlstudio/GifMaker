//
//  EditorViewController.h
//  GifMaker
//
//  Created by HalloWorld on 14-10-16.
//  Copyright (c) 2014年 HalloWorld. All rights reserved.
//

#import <UIKit/UIKit.h>


#pragma mark - EditorViewController
@interface EditorViewController : HWViewController <UICollectionViewDataSource, UICollectionViewDelegate, UIAlertViewDelegate>
{
    IBOutlet UICollectionView *collctionImgView;
    NSIndexPath *editIndexPath;
}

@property (strong, nonatomic) NSMutableArray *imgNameArray;

@property (nonatomic, weak) IBOutlet UIButton *btnSelectAll;
@property (nonatomic, weak) IBOutlet UIButton *btnSelectReverse;
@property (nonatomic, weak) IBOutlet UIButton *btnDoodle;
@property (nonatomic, weak) IBOutlet UIButton *btnPreview;


- (void)initImgNameArray:(NSArray *)aArr;

- (IBAction)btnPreviewTap:(id)sender;

@end


#pragma mark - ImgEditorCell
@interface ImgEditorCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imgView;

+ (NSString *)identifier;

+ (UINib *)nib;


@end
