//
//  CustomTableViewCell.swift
//  boost_pro3
//
//  Created by 동균 on 2018. 5. 29..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class CustomTableViewCell: UITableViewCell {

    /*
     {
     "city_name":"도쿄",
     "state":12,
     "celsius":2.3,
     "rainfall_probability":40
     }
     */
    @IBOutlet weak var stateImage: UIImageView!
    @IBOutlet weak var cityLabel: UILabel!
    @IBOutlet weak var celLabel: UILabel!
    @IBOutlet weak var rainyLabel: UILabel!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        super.setSelected(selected, animated: animated)

        // Configure the view for the selected state
    }

}
