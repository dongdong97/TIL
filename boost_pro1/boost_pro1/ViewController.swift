//
//  ViewController.swift
//  boost_pro1
//
//  Created by 황동주 on 2018. 4. 27..
//  Copyright © 2018년 dong.gyun. All rights reserved.
//

import UIKit
import AVFoundation

class ViewController: UIViewController, AVAudioPlayerDelegate {

    
    var player: AVAudioPlayer!
    var timer: Timer!
    
    @IBOutlet weak var playPauseButton: UIButton!
    @IBOutlet weak var timeLabel: UILabel!
    @IBOutlet weak var progressSlider: UISlider!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


    @IBAction func touchUpPlayPressButton (_ sender: UIButton ){
        print("press Button")
    }
    @IBAction func sliderValueChanged(_ sender: UISlider) {
        print("slider value changed")
    }
}

