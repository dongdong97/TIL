//
//  countries.swift
//  boost_pro3
//
//  Created by 동균 on 2018. 5. 29..
//  Copyright © 2018년 동균. All rights reserved.
//

import Foundation

//{"korean_name":"일본","asset_name":"jp"}


struct Countries: Codable {
    let korean_name: String
    let asset_name: String
    
    var assetImage: String{
        return "flag_" + self.asset_name
    }
    
}

/*
 {
 "city_name":"도쿄",
 "state":12,
 "celsius":2.3,
 "rainfall_probability":40
 }
 */

struct jp:Codable {
    let city_name: String
    let state: Int
    let celsius: Double
    let rainfall_probability: Int
}
