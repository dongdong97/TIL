//
//  FirstSingUpVC.swift
//  boost_pro2
//
//  Created by 동균 on 2018. 5. 23..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class FirstSingUpVC: UIViewController, UIImagePickerControllerDelegate ,UINavigationControllerDelegate{

    
    @IBOutlet weak var textView: UITextView!
    @IBOutlet weak var imageButton: UIButton!
    @IBOutlet weak var passCheckLabel: UITextField!
    @IBOutlet weak var passLabel: UITextField!
    @IBOutlet weak var idLabel: UITextField!
    
    @IBOutlet weak var cancelButton: UIButton!
    @IBOutlet weak var nextButton: UIButton!
    var tmpimage: UIImage? = nil
    
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.nextButton.isEnabled = false
        self.navigationController?.isNavigationBarHidden = true
    }

    lazy var imagePicker: UIImagePickerController = {
        let picker: UIImagePickerController = UIImagePickerController()
        picker.sourceType = .photoLibrary
        picker.allowsEditing = true
        //이걸 추가하면 아래 사진을 고를때 UIImagePickerControllerEditedImage 으로 사용가능해진다.
        picker.delegate = self
        return picker
    }()
    
    @IBAction func imageButtonCheck(_ sender: Any) {
        self.present(imagePicker, animated: true, completion: nil)
        
    }
    
    func imagePickerControllerDidCancel(_ picker: UIImagePickerController) {
        self.dismiss(animated: true, completion: nil)
    }
    
    func imagePickerController(_ picker: UIImagePickerController, didFinishPickingMediaWithInfo info: [String : Any]) {
//        if let image: UIImage = info[UIImagePickerControllerOriginalImage] as? UIImage{ 사진을 고르자마자 사용할 때 수정없이!
        if let image: UIImage = info[UIImagePickerControllerEditedImage] as? UIImage{
            tmpimage = image
            self.imageButton.setBackgroundImage(tmpimage, for: .normal)
            
        }
        self.dismiss(animated: true, completion: nil)
    }
    
    @IBAction func cancelButton(_ sender: UIButton) {
        UserInformation.shared.id = nil
        self.dismiss(animated: true, completion: nil)
    }
    
    
    @IBAction func nextButtom(_ sender: UIButton) {
        UserInformation.shared.id = idLabel.text
        let vc = self.storyboard?.instantiateViewController(withIdentifier: "Second") as? SecondSingUpVC
        self.navigationController?.show(vc!, sender: nil)
    }
    
    @IBAction func tapGesture(_ sender: UITapGestureRecognizer) {
        if (passLabel.text == passCheckLabel.text && passLabel.text != "" && idLabel.text != "" && tmpimage != nil && textView.text != ""){
            nextButton.isEnabled = true
        }else {
            nextButton.isEnabled = false
        }
        self.view.endEditing(true)  // 키보드 내려가기!

        
    }
    
}
