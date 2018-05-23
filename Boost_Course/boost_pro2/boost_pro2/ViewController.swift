//
//  ViewController.swift
//  boost_pro2
//
//  Created by 동균 on 2018. 5. 23..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    @IBOutlet weak var idText: UITextField!
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

    override func viewWillAppear(_ animated: Bool) {
        if ( UserInformation.shared.id != nil){
            idText.text = UserInformation.shared.id
            print("꺄")
            print(UserInformation.shared.id)
        }
    }

}

