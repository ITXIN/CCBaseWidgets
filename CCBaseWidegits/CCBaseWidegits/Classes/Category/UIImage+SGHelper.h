//
//  UIImage+SGHelper.h
//  SGQRCodeExample
//
//  Created by apple on 17/3/27.
//  Copyright © 2017年 Sorgle. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (SGHelper)
/** 返回一张不超过屏幕尺寸的 image */
+ (UIImage *)imageSizeWithScreenImage:(UIImage *)image;
// 图片压缩
- (UIImage *)scaleToSize:(CGSize)newSize;
// 裁剪中心点周围最大的正方形区域的图片
- (UIImage *)cropCenterMaxSquareArea;
- (UIImage *)fixOrientation;
@end
