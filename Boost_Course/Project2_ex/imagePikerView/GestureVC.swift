//
//  GestureVC.swift
//  imagePikerView
//
//  Created by 동균 on 2018. 5. 23..
//  Copyright © 2018년 동균. All rights reserved.
//

import UIKit

class GestureVC: UIViewController , UIGestureRecognizerDelegate{

    // 방법 1 스토리보드 연결
    // 방법 2 코드 직접 연결
    // 방법 3 델리게이트 만들어 연결
    
//    // 방법 1 , 방법 2
//    @IBAction func tabView(_ sender: UITapGestureRecognizer) {
//        self.view.endEditing(true)
//    } // 스토리 보드에 따로 연결안하고 viewDidLoad에 직접 연결하기
    override func viewDidLoad() {
        super.viewDidLoad()

//        // 방법2
//        let tapGesutre: UITapGestureRecognizer =
//            UITapGestureRecognizer(target: self, action: #selector (self.tabView(_:))) //self.tabView 가 없으면 만들 수 없다. 따라서 위에 액션 지우면 안된다!
//        self.view.addGestureRecognizer(tapGesutre)
        
        //방법 3  우선 UIGestureRecognizerDelegate 선언
        let tapGesture: UITapGestureRecognizer = UITapGestureRecognizer()
        tapGesture.delegate = self
        
        self.view.addGestureRecognizer(tapGesture)
    }

    
    func gestureRecognizer(_ gestureRecognizer: UIGestureRecognizer, shouldReceive touch: UITouch) -> Bool {
        self.view.endEditing(true)
        return true
    }
    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    



}
