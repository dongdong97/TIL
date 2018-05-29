//
//  ViewController.swift
//  boost_pro3
//
//  Created by 동균 on 2018. 5. 29..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class ViewController: UIViewController, UITableViewDataSource ,UITableViewDelegate {
    
    @IBOutlet weak var tableView: UITableView!
    let cellIdentifier: String = "cell"
    var country:[Countries] = []
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.tableView.dataSource = self
        self.tableView.delegate = self
        
        let jsonDecode: JSONDecoder = JSONDecoder()
        guard let dataAsset: NSDataAsset = NSDataAsset(name: "countries") else {
            return
        }
        
        do{
            self.country = try jsonDecode.decode([Countries].self, from: dataAsset.data)
        } catch{
            print(error.localizedDescription)
        }
        self.tableView.reloadData()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell: UITableViewCell = tableView.dequeueReusableCell(withIdentifier: self.cellIdentifier, for: indexPath)
        let country: Countries = self.country[indexPath.row]
        
        cell.textLabel?.text = country.korean_name
        
        switch country.asset_name {
        case "jp":
            cell.imageView?.image = #imageLiteral(resourceName: "flag_jp")
        case "kr":
            cell.imageView?.image = #imageLiteral(resourceName: "flag_kr")
        case "de":
            cell.imageView?.image = #imageLiteral(resourceName: "flag_de")
        case "it":
            cell.imageView?.image = #imageLiteral(resourceName: "flag_it")
        case "us":
            cell.imageView?.image = #imageLiteral(resourceName: "flag_us")
        case "fr":
            cell.imageView?.image = #imageLiteral(resourceName: "flag_fr")
        default:
            break;
        }
        return cell
    }
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return self.country.count
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        if let vc = self.storyboard?.instantiateViewController(withIdentifier: "Second") as? SecondVC{
            vc.navigationItem.title = country[indexPath.row].korean_name
            
            self.navigationController?.show(vc, sender: nil)
        }
        let cell = tableView.cellForRow(at: indexPath)
        cell?.isSelected = false
    }

}

