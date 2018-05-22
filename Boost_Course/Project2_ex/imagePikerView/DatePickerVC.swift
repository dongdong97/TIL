//
//  DatePickerVC.swift
//  imagePikerView
//
//  Created by 동균 on 2018. 5. 22..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class DatePickerVC: UIViewController {

    @IBOutlet weak var datePicker: UIDatePicker!
    @IBOutlet weak var dateLabel: UILabel!
    let dateFormatter: DateFormatter = {
        let formatter: DateFormatter = DateFormatter()
//        formatter.dateStyle = .medium
//        formatter.timeStyle = .medium
        formatter.dateFormat = "yyyy/MM/dd hh:mm:ss"
        
        return formatter
    }()
    
    @IBAction func didDatePickerValueChanged(_ sender: UIDatePicker) {
        
//        let date: Date = sender.date      둘이 같은것이다.
        let date: Date = self.datePicker.date
        let dateString: String = self.dateFormatter.string(from: date)
        
        dateLabel.text = dateString
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.datePicker.addTarget(self, action: #selector(self.didDatePickerValueChanged(_:)), for: UIControlEvents.valueChanged)

        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
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
