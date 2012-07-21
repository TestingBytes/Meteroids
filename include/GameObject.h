//
//  GameObject.h
//  Meteroids
//
//  Created by Sam on 12-07-20.
//  Copyright (c) 2012 TestingBytes. All rights reserved.
//

#ifndef Meteroids_GameObject_h
#define Meteroids_GameObject_h

#include "cinder/Vector.h"

class GameObject {
    
public:
    GameObject();
    GameObject( ci::Vec2f position ); 
    virtual void draw();
    virtual void update();
               
    ci::Vec2f   mPosition;
    ci::Vec2f   mDirection;
    ci::Vec2f   mVelocity;
};


#endif
