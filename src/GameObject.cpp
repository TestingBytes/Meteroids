//
//  GameObject.cpp
//  Meteroids
//
//  Created by Sam on 12-07-21.
//  Copyright (c) 2012 TestingBytes. All rights reserved.
//

#include <iostream>
#include "GameObject.h"

using namespace ci;

GameObject::GameObject()
{
    
}

GameObject::GameObject( Vec2f position )
{
    mPosition = position;
    mDirection = Vec2f(0.0f, 0.0f);
    mVelocity = Vec2f(0.0f, 0.0f);
}

void GameObject::draw()
{
    
}

void GameObject::update()
{
    mPosition += mDirection * mVelocity;
}