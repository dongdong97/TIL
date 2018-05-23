//
//  SecondSingUpVC.swift
//  boost_pro2
//
//  Created by 동균 on 2018. 5. 23..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class SecondSingUpVC: UIViewController {

    @IBOutlet weak var singUpButton: UIButton!
    @IBOutlet weak var phoneNumberText: UITextField!
    @IBOutlet weak var dateText: UILabel!
    @IBOutlet weak var datePicker: UIDatePicker!
    let dateFormatter: DateFormatter = {
        let formatter: DateFormatter = DateFormatter()
       formatter.dateStyle = .medium
        return formatter
    }()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        pickDate()
    }
    
    override func viewWillAppear(_ animated: Bool) {
        if ( UserInformation.shared.phone == nil || UserInformation.shared.phone == ""){
            print(UserInformation.shared.phone)
            singUpButton.isEnabled = false
        }else {
            phoneNumberText.text = UserInformation.shared.phone
            singUpButton.isEnabled = true
        }
        if ( UserInformation.shared.date != nil){
            dateText.text = UserInformation.shared.date
        }
    }

    func pickDate() {
        
        let date: Date = self.datePicker.date
        let dateString: String = self.dateFormatter.string(from: date)
        
        dateText.text = dateString
    }
    @IBAction func datePick(_ sender: Any) {
        pickDate()
        if(phoneNumberText.text != "" ){
            singUpButton.isEnabled = true
        }else{
            singUpButton.isEnabled = false
        }
    }
    
    @IBAction func cancelButton(_ sender: UIButton) {
        UserInformation.shared.id = nil
        self.dismiss(animated: true, completion: nil)
    }
    @IBAction func previousButton(_ sender: UIButton) {
        UserInformation.shared.phone = phoneNumberText.text
        UserInformation.shared.date = dateText.text
        self.navigationController?.popViewController(animated: true)
    }
    
    @IBAction func singUpButton(_ sender: UIButton) {
        self.dismiss(animated: true, completion: nil)
    }
    
    @IBAction func tapGesture(_ sender: UITapGestureRecognizer) {
        if(phoneNumberText.text != "" ){
            singUpButton.isEnabled = true
        }else{
            singUpButton.isEnabled = false
        }
        self.view.endEditing(true)
    }
    
    
}
