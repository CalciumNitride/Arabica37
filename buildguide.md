# build guide
自作キーボードキット Arabica3/7のビルドガイドです

## Parts

### キット内容物

名称| 数量 | 備考 |
----|----:|:----:|
PCB             |　2 | リバーシブル
スイッチプレート  | 2|"
ボトムプレート   | 2|"
Promicroカバー|2|"
TRRSジャック     |2|
タクトスイッチ    |2|リセットスイッチ用
スペーサ M2 8mm   |18|
ネジ M2          |36|
ダイオード       |44|スルーホール

### 別途用意する必要のあるもの

名称| 数量 | 備考 |
----|----:|:----:|
キースイッチ|44|MX互換もしくはKailh choc
Kailh PCBソケット|44|キースイッチに合うもの
キーキャップ 1U |44|キースイッチに合うもの
ProMicro|2|コンスルー使用可
スタビライザー|2|小指キー用
USBケーブル|1|
TRRSケーブル|1|


### オプション
名称| 数量 | 備考 |
----|----:|:----:|
ダイオード(チップ)|44|1N4148Wに対応
デジタルLEDテープ|2|Underglow用
配線材|3|Underglow LED用
OLEDモジュール|2|
4pinピンヘッダ|2|OLED用
4pinピンソケット|2|OLED用  


## 組み立て

PCBはリバーシブルです。どちらを左/右にしてもかまいません  
基本的に左右の実装は同じですが、Pro microの位置は間違え安いので注意してください

### 1.ダイオードを半田付けする

PCBの裏面にダイオードを半田付けします。
ダイオードの足を折り曲げ、PCBに差し込みます。このとき、ダイオードの黒い印がある側(マイナス)がPCB上の四角いパッドに来るようにします。

![diode01](https://user-images.githubusercontent.com/46911478/60717401-a2e16980-9f5c-11e9-9c77-8489db1e3366.JPG)

ひっくり返して半田付けします。

![diode02](https://user-images.githubusercontent.com/46911478/60716958-9d375400-9f5b-11e9-93eb-6c2eda3b54cb.JPG)

飛び出している足をニッパーで切ります。

![diode03](https://user-images.githubusercontent.com/46911478/60717536-0b304b00-9f5d-11e9-9482-989f406d5411.JPG)


※SMDのダイオードを使用する場合は[Corneのビルドガイド](https://github.com/foostan/crkbd/blob/master/corne-cherry/doc/buildguide_jp.md#ダイオード)等を参考にしてください。


### 2.OLEDモジュール用ジャンパ(オプション)

OLEDモジュールを使用する場合はPCBの __表側のみ__ 図のようにジャンパします

![2019-07-06 03](https://user-images.githubusercontent.com/46911478/60858177-41651780-a248-11e9-9bd5-d6d5af544b6b.jpg)


### 3.PCBソケットを半田付けする

PCBソケットをPCBの裏側に実装します。
ソケットは上がKailh choc用、下がMX互換用です。

まず、パッドにはんだを盛ります。
![socket01](https://user-images.githubusercontent.com/46911478/60717706-9c9fbd00-9f5d-11e9-8afa-5c9822ec0c4f.JPG)

次に、ソケットを載せ、側面からこて先をあてがって盛ったはんだを溶かし取り付けます。このとき、ソケットが浮かないようにピンセット等で押さえながら作業する必要があります。

![socket02](https://user-images.githubusercontent.com/46911478/60717664-6cf0b500-9f5d-11e9-8fcc-471f0a1a1e9c.png)

### 4.OLEDモジュール用ピンソケットを半田付けする(オプション)

ピンソケットをPCBの表側に半田付けします(OLEDを利用する場合のみ)

![2019-07-05 007](https://user-images.githubusercontent.com/46911478/60858215-68bbe480-a248-11e9-8296-a62e91c078e6.JPG)



### 5.タクトスイッチ、TRRSジャックを半田付けする

TRRSジャック、タクトスイッチはPCBの表側に実装します。



### 6. ProMicroを実装する

ProMicro用ピンヘッダをPCBの表側に半田付けし、その上にProMicroを裏面(平たい方)を上にして半田付けします

※このとき、ピンヘッダをPCB上の白い枠に合わせて実装します。正しく取り付けられて入ればPCB上の"RAW"とProMicroの"RAW"が同じ位置(左上)になります。
※コンスルーを使用する場合は[Helixのビルドガイド](https://github.com/MakotoKurauchi/helix/blob/master/Doc/buildguide_jp.md#pro-micro)等を参考にしてください 

### 7. スタビライザーをはめ込む

2Uキー用のスタビライザーをPCBにはめ込みます。プレートマウントのスタビライザーを使う場合はプレート側にはめ込みます。

※現行のv1.2基板ではPCBマウントタイプのスタビライザーがスペーサーと干渉します。PCBマウントのスタビライザーを使う場合はスイッチプレートを6箇所で固定してください。

### 8. プレートにスイッチをはめ込む

スイッチプレートにスイッチをはめ込みます。
