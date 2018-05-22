//
//  FirstSingletonVC.swift
//  imagePikerView
//
//  Created by 동균 on 2018. 5. 22..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class FirstSingletonVC: UIViewController {

    @IBOutlet weak var nameText: UITextField!
    @IBOutlet weak var ageText: UITextField!
    override func viewDidLoad() {
        super.viewDidLoad()
//        navigationController?.delegate = self
        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    @IBAction func pushButton(_ sender: Any) {
        UserInfomation.shared.name = nameText.text
        UserInfomation.shared.age = ageText.text
        
        let vc = self.storyboard?.instantiateViewController(withIdentifier: "Second") as? SecondSingletonVC
        self.navigationController?.show(vc!, sender: nil)
        
    }
    
    override func viewWillAppear(_ animated: Bool) {
        self.navigationController?.setNavigationBarHidden(true, animated: false)
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
