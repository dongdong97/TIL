//
//  Friend.swift
//  project3_ex
//
//  Created by 동균 on 2018. 5. 29..
//  Copyright © 2018년 동균. All rights reserved.
//

import Foundation

/*
 {
 "name":"하나",
 "age":22,
 "address_info": {
 "country":"대한민국",
 "city":"울산"
 }
 }
 */
struct Friend: Codable {
    struct Address: Codable {
        let country: String
        let city: String
    }
    
    let name: String
    let age: Int
    let addressInfo: Address
    
    var nameAndAge: String{
        return self.name + "(\(self.age))"
    }
    
    var fullAddress: String{
        return self.addressInfo.city + " , " + self.addressInfo.country
    }
    enum CodingKeys: String, CodingKey {
        case name, age
        case addressInfo = "address_info"
    }
}
