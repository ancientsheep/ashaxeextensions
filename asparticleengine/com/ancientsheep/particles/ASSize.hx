package com.ancientsheep.particles;


//
//  CGSize
//
//  Created by Baluta Cristian on 2011-07-12.
//  Copyright (c) 2011 ralcr.com. All rights reserved.
//

class ASSize {
	
	public var width :Float;
	public var height :Float;
	
	
	public function new (w:Float=0.0, h:Float=0.0) {
		this.width = w;
		this.height = h;
	}
	public function toString () :String {
		return "[ASSize width="+width+", height="+height+"]";
	}
}
