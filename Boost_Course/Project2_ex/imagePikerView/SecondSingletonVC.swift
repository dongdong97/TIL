//
//  SecondSingletonVC.swift
//  imagePikerView
//
//  Created by 동균 on 2018. 5. 22..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class SecondSingletonVC: UIViewController {

    @IBOutlet weak var nameLabel: UILabel!
    @IBOutlet weak var ageLabel: UILabel!
    override func viewDidLoad() {
        
        nameLabel.text = UserInfomation.shared.name
        ageLabel.text = UserInfomation.shared.age
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    override func viewWillAppear(_ animated: Bool) {
        self.navigationController?.setNavigationBarHidden(false, animated: false)
    }

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
