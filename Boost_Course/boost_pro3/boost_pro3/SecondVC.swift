//
//  SecondVC.swift
//  boost_pro3
//
//  Created by 동균 on 2018. 5. 29..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class SecondVC: UIViewController, UITableViewDelegate, UITableViewDataSource {

    var country: String = ""
    let cellIdentifier: String = "CustomCell"

    var city:[jp] = []
    
    @IBOutlet weak var secondTable: UITableView!
    
    override func viewDidLoad() {
        
        super.viewDidLoad()
        self.secondTable.dataSource = self
        self.secondTable.delegate = self
        
        let jsonDecode: JSONDecoder = JSONDecoder()
        guard let dataAsset: NSDataAsset = NSDataAsset(name: "jp") else {
            return
        }
        
        do{
            self.city = try jsonDecode.decode([jp].self, from: dataAsset.data)
        } catch{
            print(error.localizedDescription)
        }
        self.secondTable.reloadData()
        // Do any additional setup after loading the view.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return city.count
    }
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let CustomCell: CustomTableViewCell = tableView.dequeueReusableCell(withIdentifier: self.cellIdentifier, for: indexPath) as! CustomTableViewCell
        let city: jp = self.city[indexPath.row]
        CustomCell.celLabel.text = String(city.celsius)
        CustomCell.cityLabel.text = String(city.city_name)
        CustomCell.rainyLabel.text = String(city.rainfall_probability)
        switch city.state {
        case 10:
            CustomCell.stateImage.image = #imageLiteral(resourceName: "sunny")
        case 11:
            CustomCell.stateImage.image = #imageLiteral(resourceName: "cloudy")
        case 12:
            CustomCell.stateImage.image = #imageLiteral(resourceName: "rainy")
        case 13:
            CustomCell.stateImage.image = #imageLiteral(resourceName: "snowy")
        default:
            CustomCell.stateImage.image = #imageLiteral(resourceName: "sunny")
        }

        return CustomCell
    }
    func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return 80
    }
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        if let vc = self.storyboard?.instantiateViewController(withIdentifier: "Detail") as? DetailViewController{
            vc.navigationItem.title = city[indexPath.row].city_name
            
            self.navigationController?.show(vc, sender: nil)
        }
    }
}
